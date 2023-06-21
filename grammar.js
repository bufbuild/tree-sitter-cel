const
  PREC = {
    primary: 9,
    select: 8,
    unary: 7,
    multiplicative: 6,
    additive: 5,
    comparative: 4,
    and: 3,
    or: 2,
    conditional: 1,
  },

  multiplicative_operators = ['*', '/', '%'],
  additive_operators = ['+', '-'],
  comparative_operators = ['==', '!=', '<', '<=', '>', '>='],

  newline = /\r?\n/,
  terminator = choice(newline, ';'),

  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  binaryDigit = /[01]/,

  hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
  octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit))),
  decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit))),
  binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit))),

  hexLiteral = seq('0', choice('x', 'X'), optional('_'), hexDigits),
  octalLiteral = seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
  decimalLiteral = choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
  binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),

  intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral),

  decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits),
  decimalFloatLiteral = choice(
    seq(decimalDigits, '.', optional(decimalDigits), optional(decimalExponent)),
    seq(decimalDigits, decimalExponent),
    seq('.', decimalDigits, optional(decimalExponent)),
  ),

  hexExponent = seq(choice('p', 'P'), optional(choice('+', '-')), decimalDigits),
  hexMantissa = choice(
    seq(optional('_'), hexDigits, '.', optional(hexDigits)),
    seq(optional('_'), hexDigits),
    seq('.', hexDigits),
  ),
  hexFloatLiteral = seq('0', choice('x', 'X'), hexMantissa, hexExponent),

  floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral)

module.exports = grammar({
  name: 'CEL',

  rules: {
    // TODO: add the actual grammar rules
    expr: $ => $._expression,

    _expression: $ => choice(
      $.map_expression,
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

    _expressions : $ => seq(
      $._expression,
      repeat(seq(',', $._expression)),
      optional(',')
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    map_expression: $ => seq(
      '{',
      optional(seq(
        $.map_entry,
        repeat(seq(',', $.map_entry)),
        optional(',')
      )),
      '}'
    ),
    map_entry: $ => seq(
      $._expression,
      ':',
      $._expression
    ),


    list_expression: $ => seq(
      '[',
      optional($._expressions),
      ']'
    ),

    index_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '[',
      field('index', $._expression),
      ']'
    )),

    call_expression: $ => prec(PREC.primary, seq(
      field('function', $.identifier),
      field('arguments', $.arguments)
    )),

    select_expression: $ => prec(PREC.select, seq(
      field('operand', $._expression),
      '.',
      field('member', $.identifier)
    )),

    member_call_expression: $ => prec(PREC.primary, seq(
      field('operand', $._expression),
      '.',
      field('member', $.identifier),
      field('arguments', $.arguments)
    )),

    arguments: $ => seq(
      '(',
      optional($._expressions),
      ')'
    ),

    conditional_expression: $ => prec.right(PREC.conditional, seq(
      field('condition', $._expression),
      '?',
      field('consequence', $._expression),
      ':',
      field('alternative', $._expression)
    )),

    unary_expression: $ => prec(PREC.unary, seq(
      field('operator', choice('+', '-', '!')),
      field('operand', $._expression)
    )),

    binary_expression: $ => {
      const table = [
        [PREC.multiplicative, choice(...multiplicative_operators)],
        [PREC.additive, choice(...additive_operators)],
        [PREC.comparative, choice(...comparative_operators)],
        [PREC.and, '&&'],
        [PREC.or, '||'],
      ];

      return choice(...table.map(([precedence, operator]) =>
        prec.left(precedence, seq(
          field('left', $._expression),
          field('operator', operator),
          field('right', $._expression)
        ))
      ));

    },

    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    int_literal: $ => token(intLiteral),
    uint_literal: $ => seq(token(intLiteral), choice('u', 'U')),
    float_literal: $ => token(floatLiteral),
    string_literal: $ => prec(PREC.primary, seq(
      field("kind", optional($.identifier)),
      choice(
        seq('"', repeat(choice(/[^"\\\r\n]/, /\\./)), '"'),
        seq("'", repeat(choice(/[^'\\\r\n]/, /\\./)), "'"),
    ))),
    null: $ => 'null',
    true: $ => 'true',
    false: $ => 'false',

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  },
});
