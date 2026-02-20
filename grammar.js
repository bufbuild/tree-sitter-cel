// Copyright 2023 Buf Technologies, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/* eslint-disable comma-dangle */
/* eslint-disable camelcase */
/* eslint-disable no-undef */
const PREC = {
  primary: 9,
  select: 8,
  unary: 7,
  multiplicative: 6,
  additive: 5,
  comparative: 4,
  and: 3,
  or: 2,
  conditional: 1,
}
const multiplicative_operators = ['*', '/', '%']
const additive_operators = ['+', '-']
const comparative_operators = ['==', '!=', '<', '<=', '>', '>=', 'in']
const hexDigit = /[0-9a-fA-F]/
const decimalDigit = /[0-9]/
const hexDigits = seq(hexDigit, repeat(hexDigit))
const decimalDigits = seq(decimalDigit, repeat(decimalDigit))
const decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits)
const floatLiteral = choice(
  seq(decimalDigits, '.', decimalDigits, optional(decimalExponent)),
  seq(decimalDigits, decimalExponent),
  seq('.', decimalDigits, optional(decimalExponent))
)

// Escape sequence for non-raw strings per the CEL spec:
//   \ [abfnrtv\?"'`]
//   \ [xX] HH          (exactly 2 hex digits)
//   \ u HHHH           (exactly 4 hex digits)
//   \ U HHHHHHHH       (exactly 8 hex digits)
//   \ [0-3][0-7][0-7]  (3-digit octal)
// A fallback \. is included for robustness (lenient parsing of unknown escapes).
const string_escape = /\\(?:[abfnrtv\\"'`?]|[xX][0-9a-fA-F]{2}|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8}|[0-3][0-7][0-7]|.)/

module.exports = grammar({
  name: 'cel',

  // Enables keyword extraction: string literals that match the identifier
  // pattern (e.g. `in`, `as`, `true`) are always lexed as their own keyword
  // tokens and never as identifiers, regardless of parser context.
  word: ($) => $.identifier,

  extras: ($) => [$.comment, /\s/],

  rules: {
    expr: ($) => $._expression,

    _expression: ($) =>
      choice(
        $.map_expression,
        $.struct_expression,
        $.list_expression,
        $.call_expression,
        $.absolute_expression,
        $.index_expression,
        $.select_expression,
        $.member_call_expression,
        $.conditional_expression,
        $.unary_expression,
        $.binary_expression,
        $.identifier,
        $.reserved_keyword,
        $.uint_literal,
        $.int_literal,
        $.float_literal,
        $.string_literal,
        $.bytes_literal,
        $.null,
        $.true,
        $.false,
        $.parenthesized_expression
      ),

    _expressions: ($) => seq($._expression, repeat(seq(',', $._expression)), optional(',')),

    parenthesized_expression: ($) => seq('(', $._expression, ')'),

    struct_expression: ($) =>
      prec(
        PREC.primary,
        seq(field('type', $._expression), '{', optional(field('fields', $.struct_fields)), '}')
      ),

    struct_fields: ($) =>
      seq($.field_initializer, repeat(seq(',', $.field_initializer)), optional(',')),

    // Field keys use SELECTOR (= identifier or reserved keyword) per the CEL spec,
    // so proto fields named with reserved words (e.g. `as`, `return`) are valid.
    field_initializer: ($) =>
      seq(
        field('key', choice($.identifier, $.reserved_keyword)),
        ':',
        field('value', $._expression)
      ),

    map_expression: ($) =>
      seq('{', optional(seq($.map_entry, repeat(seq(',', $.map_entry)), optional(','))), '}'),
    map_entry: ($) => seq(field('key', $._expression), ':', field('value', $._expression)),

    list_expression: ($) => seq('[', optional($._expressions), ']'),

    index_expression: ($) =>
      prec(
        PREC.primary,
        seq(field('operand', $._expression), '[', field('index', $._expression), ']')
      ),

    select_expression: ($) =>
      prec(
        PREC.select,
        seq(
          field('operand', $._expression),
          '.',
          field('member', choice($.identifier, $.reserved_keyword))
        )
      ),

    call_expression: ($) =>
      prec(PREC.primary, seq(field('function', $.identifier), field('arguments', $.arguments))),

    // An absolute expression starts with a leading dot, denoting a name rooted at the
    // top-level namespace: e.g. `.google.protobuf.Timestamp` or `.func(args)`.
    absolute_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          '.',
          field('name', $.identifier),
          field('arguments', optional($.arguments))
        )
      ),

    member_call_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          field('operand', $._expression),
          '.',
          field('function', choice($.identifier, $.reserved_keyword)),
          field('arguments', $.arguments)
        )
      ),

    arguments: ($) => seq('(', optional($._expressions), ')'),

    conditional_expression: ($) =>
      prec.right(
        PREC.conditional,
        seq(
          field('condition', $._expression),
          '?',
          field('consequence', $._expression),
          ':',
          field('alternative', $._expression)
        )
      ),

    unary_expression: ($) =>
      prec(
        PREC.unary,
        seq(field('operator', choice('-', '!')), field('operand', $._expression))
      ),

    binary_expression: ($) => {
      const table = [
        [PREC.multiplicative, choice(...multiplicative_operators)],
        [PREC.additive, choice(...additive_operators)],
        [PREC.comparative, choice(...comparative_operators)],
        [PREC.and, '&&'],
        [PREC.or, '||'],
      ]

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field('left', $._expression),
              field('operator', operator),
              field('right', $._expression)
            )
          )
        )
      )
    },

    identifier: ($) => /[_\p{XID_Start}][_\p{XID_Continue}]*/,

    // Keywords reserved for future use or for embedding compatibility.
    // They cannot appear as identifiers in standard CEL expressions, but are
    // permitted as method names in receiver-call style (e.g. `x.package()`)
    // and as struct field keys (e.g. `Foo{as: 1}`).
    reserved_keyword: ($) =>
      choice(
        'as',
        'break',
        'const',
        'continue',
        'else',
        'for',
        'function',
        'if',
        'import',
        'in',
        'let',
        'loop',
        'package',
        'namespace',
        'return',
        'var',
        'void',
        'while'
      ),

    // Wrap in token() so whitespace cannot appear between components
    // (e.g. `0 x FF` must not parse as a hex literal).
    hex_literal: ($) => token(seq('0', choice('x', 'X'), hexDigit, repeat(hexDigit))),
    decimal_literal: ($) => token(choice('0', /[1-9][0-9]*/)),
    int_literal: ($) => choice($.hex_literal, $.decimal_literal),
    // uint_literal is a flat token() so no whitespace can appear between
    // the integer and the u/U suffix (e.g. `1 u` must not parse as uint).
    uint_literal: ($) =>
      token(
        choice(
          seq('0', /[uU]/),
          seq(/[1-9][0-9]*/, /[uU]/),
          seq('0', choice('x', 'X'), hexDigit, repeat(hexDigit), /[uU]/)
        )
      ),
    float_literal: ($) => token(floatLiteral),

    // String literals: no prefix (regular) or r/R prefix (raw, no escape processing).
    // The prefix is embedded in the token so the lexer resolves the ambiguity with
    // identifiers via maximal munch.
    double_quote_string_literal: ($) =>
      token(
        choice(
          seq('"', repeat(choice(/[^"\\\r\n]/, string_escape)), '"'),
          seq(/[rR]/, '"', repeat(/[^"\r\n]/), '"')
        )
      ),
    single_quoted_string_literal: ($) =>
      token(
        choice(
          seq("'", repeat(choice(/[^'\\\r\n]/, string_escape)), "'"),
          seq(/[rR]/, "'", repeat(/[^'\r\n]/), "'")
        )
      ),
    triple_double_quote_string_literal: ($) =>
      token(
        choice(
          seq(
            '"""',
            repeat(choice(/[^"\\]/, string_escape, /"[^"]/, /""[^"]/)),
            optional(/""?/),
            '"""'
          ),
          seq(
            /[rR]/,
            '"""',
            repeat(choice(/[^"]/, /"[^"]/, /""[^"]/)),
            optional(/""?/),
            '"""'
          )
        )
      ),
    triple_single_quoted_string_literal: ($) =>
      token(
        choice(
          seq(
            "'''",
            repeat(choice(/[^'\\]/, string_escape, /'[^']/, /''[^']/)),
            optional(/''?/),
            "'''"
          ),
          seq(
            /[rR]/,
            "'''",
            repeat(choice(/[^']/, /'[^']/, /''[^']/)),
            optional(/''?/),
            "'''"
          )
        )
      ),

    string_literal: ($) =>
      prec(
        PREC.primary,
        choice(
          $.double_quote_string_literal,
          $.single_quoted_string_literal,
          $.triple_double_quote_string_literal,
          $.triple_single_quoted_string_literal
        )
      ),

    // Bytes literals: b/B prefix (non-raw) or b/B + r/R in either order (raw).
    // Raw bytes treat backslash as a literal character.
    bytes_double_quote_literal: ($) =>
      token(
        choice(
          seq(/[bB]/, '"', repeat(choice(/[^"\\\r\n]/, string_escape)), '"'),
          seq(/[bB][rR]|[rR][bB]/, '"', repeat(/[^"\r\n]/), '"')
        )
      ),
    bytes_single_quoted_literal: ($) =>
      token(
        choice(
          seq(/[bB]/, "'", repeat(choice(/[^'\\\r\n]/, string_escape)), "'"),
          seq(/[bB][rR]|[rR][bB]/, "'", repeat(/[^'\r\n]/), "'")
        )
      ),
    bytes_triple_double_quote_literal: ($) =>
      token(
        choice(
          seq(
            /[bB]/,
            '"""',
            repeat(choice(/[^"\\]/, string_escape, /"[^"]/, /""[^"]/)),
            optional(/""?/),
            '"""'
          ),
          seq(
            /[bB][rR]|[rR][bB]/,
            '"""',
            repeat(choice(/[^"]/, /"[^"]/, /""[^"]/)),
            optional(/""?/),
            '"""'
          )
        )
      ),
    bytes_triple_single_quoted_literal: ($) =>
      token(
        choice(
          seq(
            /[bB]/,
            "'''",
            repeat(choice(/[^'\\]/, string_escape, /'[^']/, /''[^']/)),
            optional(/''?/),
            "'''"
          ),
          seq(
            /[bB][rR]|[rR][bB]/,
            "'''",
            repeat(choice(/[^']/, /'[^']/, /''[^']/)),
            optional(/''?/),
            "'''"
          )
        )
      ),

    bytes_literal: ($) =>
      prec(
        PREC.primary,
        choice(
          $.bytes_double_quote_literal,
          $.bytes_single_quoted_literal,
          $.bytes_triple_double_quote_literal,
          $.bytes_triple_single_quoted_literal
        )
      ),

    null: ($) => 'null',
    true: ($) => 'true',
    false: ($) => 'false',

    // The CEL spec only defines // line comments; block comments are not part of the language.
    comment: ($) => token(seq('//', /.*/)),
  },
})
