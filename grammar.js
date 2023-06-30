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
const octalDigit = /[0-7]/
const decimalDigit = /[0-9]/
const binaryDigit = /[01]/
const hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit)))
const octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit)))
const decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit)))
const binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit)))
const decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits)
const decimalFloatLiteral = choice(
  seq(decimalDigits, '.', decimalDigits, optional(decimalExponent)),
  seq(decimalDigits, decimalExponent),
  seq('.', decimalDigits, optional(decimalExponent))
)
const hexExponent = seq(choice('p', 'P'), optional(choice('+', '-')), decimalDigits)
const hexMantissa = choice(
  seq(optional('_'), hexDigits, '.', optional(hexDigits)),
  seq(optional('_'), hexDigits),
  seq('.', hexDigits)
)
const hexFloatLiteral = seq('0', choice('x', 'X'), hexMantissa, hexExponent)
const floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral)

module.exports = grammar({
  name: 'cel',

  extras: ($) => [$.comment, /\s/],

  rules: {
    // TODO: add the actual grammar rules
    expr: ($) => $._expression,

    _expression: ($) =>
      choice(
        $.map_expression,
        $.struct_expression,
        $.list_expression,
        $.call_expression,
        $.index_expression,
        $.select_expression,
        $.member_call_expression,
        $.conditional_expression,
        $.unary_expression,
        $.binary_expression,
        $.identifier,
        $.uint_literal,
        $.int_literal,
        $.float_literal,
        $.string_literal,
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

    field_initializer: ($) => seq(field('key', $.identifier), ':', field('value', $._expression)),

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
      prec(PREC.select, seq(field('operand', $._expression), '.', field('member', $.identifier))),

    call_expression: ($) =>
      prec(PREC.primary, seq(field('function', $.identifier), field('arguments', $.arguments))),

    member_call_expression: ($) =>
      prec(
        PREC.primary,
        seq(
          field('operand', $._expression),
          '.',
          field('function', $.identifier),
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
        seq(field('operator', choice('+', '-', '!')), field('operand', $._expression))
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

    hex_literal: ($) => seq('0', choice('x', 'X'), optional('_'), hexDigits),
    octal_literal: ($) => seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
    decimal_literal: ($) => choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
    binary_literal: ($) => seq('0', choice('b', 'B'), optional('_'), binaryDigits),
    int_literal: ($) => choice($.hex_literal, $.octal_literal, $.decimal_literal, $.binary_literal),
    uint_literal: ($) => seq($.int_literal, choice('u', 'U')),
    float_literal: ($) => token(floatLiteral),

    double_quote_string_literal: ($) => seq('"', repeat(choice(/[^"\\\r\n]/, /\\./)), '"'),
    single_quoted_string_literal: ($) => seq("'", repeat(choice(/[^'\\\r\n]/, /\\./)), "'"),
    triple_double_quote_string_literal: ($) => seq('"""', repeat(choice(/[^"\\]/, /\\./)), '"""'),
    triple_single_quoted_string_literal: ($) => seq("'''", repeat(choice(/[^'\\]/, /\\./)), "'''"),

    string_literal: ($) =>
      prec(
        PREC.primary,
        seq(
          field('kind', optional($.identifier)),
          field(
            'quoted',
            choice(
              $.double_quote_string_literal,
              $.single_quoted_string_literal,
              $.triple_double_quote_string_literal,
              $.triple_single_quoted_string_literal
            )
          )
        )
      ),
    null: ($) => 'null',
    true: ($) => 'true',
    false: ($) => 'false',

    comment: ($) => token(choice(seq('//', /.*/), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'))),
  },
})
