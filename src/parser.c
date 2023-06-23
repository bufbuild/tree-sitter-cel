#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 126
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_COMMA = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_COLON = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_DOT = 9,
  anon_sym_QMARK = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_BANG = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_PERCENT = 16,
  anon_sym_EQ_EQ = 17,
  anon_sym_BANG_EQ = 18,
  anon_sym_LT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE_PIPE = 24,
  sym_identifier = 25,
  anon_sym_0 = 26,
  anon_sym_x = 27,
  anon_sym_X = 28,
  anon_sym__ = 29,
  aux_sym_hex_literal_token1 = 30,
  anon_sym_o = 31,
  anon_sym_O = 32,
  aux_sym_octal_literal_token1 = 33,
  aux_sym_decimal_literal_token1 = 34,
  aux_sym_decimal_literal_token2 = 35,
  anon_sym_b = 36,
  anon_sym_B = 37,
  aux_sym_binary_literal_token1 = 38,
  anon_sym_u = 39,
  anon_sym_U = 40,
  sym_float_literal = 41,
  anon_sym_DQUOTE = 42,
  aux_sym_double_quote_string_literal_token1 = 43,
  aux_sym_double_quote_string_literal_token2 = 44,
  anon_sym_SQUOTE = 45,
  aux_sym_single_quoted_string_literal_token1 = 46,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 47,
  aux_sym_triple_double_quote_string_literal_token1 = 48,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 49,
  aux_sym_triple_single_quoted_string_literall_token1 = 50,
  sym_null = 51,
  sym_true = 52,
  sym_false = 53,
  sym_comment = 54,
  sym_expr = 55,
  sym__expression = 56,
  sym__expressions = 57,
  sym_parenthesized_expression = 58,
  sym_map_expression = 59,
  sym_map_entry = 60,
  sym_list_expression = 61,
  sym_index_expression = 62,
  sym_select_expression = 63,
  sym_call_expression = 64,
  sym_member_call_expression = 65,
  sym_arguments = 66,
  sym_conditional_expression = 67,
  sym_unary_expression = 68,
  sym_binary_expression = 69,
  sym_hex_literal = 70,
  sym_octal_literal = 71,
  sym_decimal_literal = 72,
  sym_binary_literal = 73,
  sym_int_literal = 74,
  sym_uint_literal = 75,
  sym_double_quote_string_literal = 76,
  sym_single_quoted_string_literal = 77,
  sym_triple_double_quote_string_literal = 78,
  sym_triple_single_quoted_string_literall = 79,
  sym_string_literal = 80,
  aux_sym__expressions_repeat1 = 81,
  aux_sym_map_expression_repeat1 = 82,
  aux_sym_hex_literal_repeat1 = 83,
  aux_sym_octal_literal_repeat1 = 84,
  aux_sym_decimal_literal_repeat1 = 85,
  aux_sym_binary_literal_repeat1 = 86,
  aux_sym_double_quote_string_literal_repeat1 = 87,
  aux_sym_single_quoted_string_literal_repeat1 = 88,
  aux_sym_triple_double_quote_string_literal_repeat1 = 89,
  aux_sym_triple_single_quoted_string_literall_repeat1 = 90,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_identifier] = "identifier",
  [anon_sym_0] = "0",
  [anon_sym_x] = "x",
  [anon_sym_X] = "X",
  [anon_sym__] = "_",
  [aux_sym_hex_literal_token1] = "hex_literal_token1",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [aux_sym_octal_literal_token1] = "octal_literal_token1",
  [aux_sym_decimal_literal_token1] = "decimal_literal_token1",
  [aux_sym_decimal_literal_token2] = "decimal_literal_token2",
  [anon_sym_b] = "b",
  [anon_sym_B] = "B",
  [aux_sym_binary_literal_token1] = "binary_literal_token1",
  [anon_sym_u] = "u",
  [anon_sym_U] = "U",
  [sym_float_literal] = "float_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quote_string_literal_token1] = "double_quote_string_literal_token1",
  [aux_sym_double_quote_string_literal_token2] = "double_quote_string_literal_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_literal_token1] = "single_quoted_string_literal_token1",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_triple_double_quote_string_literal_token1] = "triple_double_quote_string_literal_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_triple_single_quoted_string_literall_token1] = "triple_single_quoted_string_literall_token1",
  [sym_null] = "null",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_comment] = "comment",
  [sym_expr] = "expr",
  [sym__expression] = "_expression",
  [sym__expressions] = "_expressions",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_map_expression] = "map_expression",
  [sym_map_entry] = "map_entry",
  [sym_list_expression] = "list_expression",
  [sym_index_expression] = "index_expression",
  [sym_select_expression] = "select_expression",
  [sym_call_expression] = "call_expression",
  [sym_member_call_expression] = "member_call_expression",
  [sym_arguments] = "arguments",
  [sym_conditional_expression] = "conditional_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_hex_literal] = "hex_literal",
  [sym_octal_literal] = "octal_literal",
  [sym_decimal_literal] = "decimal_literal",
  [sym_binary_literal] = "binary_literal",
  [sym_int_literal] = "int_literal",
  [sym_uint_literal] = "uint_literal",
  [sym_double_quote_string_literal] = "double_quote_string_literal",
  [sym_single_quoted_string_literal] = "single_quoted_string_literal",
  [sym_triple_double_quote_string_literal] = "triple_double_quote_string_literal",
  [sym_triple_single_quoted_string_literall] = "triple_single_quoted_string_literall",
  [sym_string_literal] = "string_literal",
  [aux_sym__expressions_repeat1] = "_expressions_repeat1",
  [aux_sym_map_expression_repeat1] = "map_expression_repeat1",
  [aux_sym_hex_literal_repeat1] = "hex_literal_repeat1",
  [aux_sym_octal_literal_repeat1] = "octal_literal_repeat1",
  [aux_sym_decimal_literal_repeat1] = "decimal_literal_repeat1",
  [aux_sym_binary_literal_repeat1] = "binary_literal_repeat1",
  [aux_sym_double_quote_string_literal_repeat1] = "double_quote_string_literal_repeat1",
  [aux_sym_single_quoted_string_literal_repeat1] = "single_quoted_string_literal_repeat1",
  [aux_sym_triple_double_quote_string_literal_repeat1] = "triple_double_quote_string_literal_repeat1",
  [aux_sym_triple_single_quoted_string_literall_repeat1] = "triple_single_quoted_string_literall_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_identifier] = sym_identifier,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_X] = anon_sym_X,
  [anon_sym__] = anon_sym__,
  [aux_sym_hex_literal_token1] = aux_sym_hex_literal_token1,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [aux_sym_octal_literal_token1] = aux_sym_octal_literal_token1,
  [aux_sym_decimal_literal_token1] = aux_sym_decimal_literal_token1,
  [aux_sym_decimal_literal_token2] = aux_sym_decimal_literal_token2,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_B] = anon_sym_B,
  [aux_sym_binary_literal_token1] = aux_sym_binary_literal_token1,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_U] = anon_sym_U,
  [sym_float_literal] = sym_float_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quote_string_literal_token1] = aux_sym_double_quote_string_literal_token1,
  [aux_sym_double_quote_string_literal_token2] = aux_sym_double_quote_string_literal_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_literal_token1] = aux_sym_single_quoted_string_literal_token1,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_triple_double_quote_string_literal_token1] = aux_sym_triple_double_quote_string_literal_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_triple_single_quoted_string_literall_token1] = aux_sym_triple_single_quoted_string_literall_token1,
  [sym_null] = sym_null,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_comment] = sym_comment,
  [sym_expr] = sym_expr,
  [sym__expression] = sym__expression,
  [sym__expressions] = sym__expressions,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_map_expression] = sym_map_expression,
  [sym_map_entry] = sym_map_entry,
  [sym_list_expression] = sym_list_expression,
  [sym_index_expression] = sym_index_expression,
  [sym_select_expression] = sym_select_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_member_call_expression] = sym_member_call_expression,
  [sym_arguments] = sym_arguments,
  [sym_conditional_expression] = sym_conditional_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_hex_literal] = sym_hex_literal,
  [sym_octal_literal] = sym_octal_literal,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_binary_literal] = sym_binary_literal,
  [sym_int_literal] = sym_int_literal,
  [sym_uint_literal] = sym_uint_literal,
  [sym_double_quote_string_literal] = sym_double_quote_string_literal,
  [sym_single_quoted_string_literal] = sym_single_quoted_string_literal,
  [sym_triple_double_quote_string_literal] = sym_triple_double_quote_string_literal,
  [sym_triple_single_quoted_string_literall] = sym_triple_single_quoted_string_literall,
  [sym_string_literal] = sym_string_literal,
  [aux_sym__expressions_repeat1] = aux_sym__expressions_repeat1,
  [aux_sym_map_expression_repeat1] = aux_sym_map_expression_repeat1,
  [aux_sym_hex_literal_repeat1] = aux_sym_hex_literal_repeat1,
  [aux_sym_octal_literal_repeat1] = aux_sym_octal_literal_repeat1,
  [aux_sym_decimal_literal_repeat1] = aux_sym_decimal_literal_repeat1,
  [aux_sym_binary_literal_repeat1] = aux_sym_binary_literal_repeat1,
  [aux_sym_double_quote_string_literal_repeat1] = aux_sym_double_quote_string_literal_repeat1,
  [aux_sym_single_quoted_string_literal_repeat1] = aux_sym_single_quoted_string_literal_repeat1,
  [aux_sym_triple_double_quote_string_literal_repeat1] = aux_sym_triple_double_quote_string_literal_repeat1,
  [aux_sym_triple_single_quoted_string_literall_repeat1] = aux_sym_triple_single_quoted_string_literall_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_octal_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U] = {
    .visible = true,
    .named = false,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_string_literal_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_triple_double_quote_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_triple_single_quoted_string_literall_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expressions] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_map_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_list_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_index_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_select_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_member_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_uint_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quote_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_triple_double_quote_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_triple_single_quoted_string_literall] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__expressions_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_map_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decimal_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_binary_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quote_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_triple_double_quote_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_triple_single_quoted_string_literall_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_condition = 3,
  field_consequence = 4,
  field_function = 5,
  field_index = 6,
  field_kind = 7,
  field_left = 8,
  field_member = 9,
  field_operand = 10,
  field_operator = 11,
  field_quoted = 12,
  field_right = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_function] = "function",
  [field_index] = "index",
  [field_kind] = "kind",
  [field_left] = "left",
  [field_member] = "member",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_quoted] = "quoted",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 3},
  [9] = {.index = 17, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_quoted, 0},
  [1] =
    {field_operand, 1},
    {field_operator, 0},
  [3] =
    {field_arguments, 1},
    {field_function, 0},
  [5] =
    {field_kind, 0},
    {field_quoted, 1},
  [7] =
    {field_member, 2},
    {field_operand, 0},
  [9] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [12] =
    {field_index, 2},
    {field_operand, 0},
  [14] =
    {field_arguments, 3},
    {field_function, 2},
    {field_operand, 0},
  [17] =
    {field_alternative, 4},
    {field_condition, 0},
    {field_consequence, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == 'B') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(80);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(79);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '0') ADVANCE(78);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(116);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(25);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == '|') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 26:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(25);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(76);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 35:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == 'B') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(84);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(80);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(79);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      END_STATE();
    case 36:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(50);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '?') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == ']') ADVANCE(47);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(69);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(73);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(70);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(68);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(67);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(71);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_hex_literal_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_octal_literal_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token2);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_binary_literal_token1);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_double_quote_string_literal_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_double_quote_string_literal_token2);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_literal_token1);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_triple_double_quote_string_literal_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_triple_double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_triple_single_quoted_string_literall_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_triple_single_quoted_string_literall_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(76);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 38},
  [28] = {.lex_state = 38},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 38},
  [36] = {.lex_state = 38},
  [37] = {.lex_state = 36},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 38},
  [49] = {.lex_state = 36},
  [50] = {.lex_state = 38},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 35},
  [55] = {.lex_state = 35},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 35},
  [59] = {.lex_state = 35},
  [60] = {.lex_state = 35},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 35},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 35},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 35},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 35},
  [72] = {.lex_state = 35},
  [73] = {.lex_state = 35},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 35},
  [76] = {.lex_state = 35},
  [77] = {.lex_state = 35},
  [78] = {.lex_state = 35},
  [79] = {.lex_state = 35},
  [80] = {.lex_state = 35},
  [81] = {.lex_state = 35},
  [82] = {.lex_state = 35},
  [83] = {.lex_state = 35},
  [84] = {.lex_state = 35},
  [85] = {.lex_state = 35},
  [86] = {.lex_state = 35},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 35},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 35},
  [91] = {.lex_state = 35},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 10},
  [99] = {.lex_state = 9},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 35},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 36},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 36},
  [114] = {.lex_state = 36},
  [115] = {.lex_state = 38},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 35},
  [119] = {.lex_state = 35},
  [120] = {.lex_state = 37},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 38},
  [124] = {.lex_state = 35},
  [125] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_hex_literal_token1] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [aux_sym_octal_literal_token1] = ACTIONS(1),
    [aux_sym_decimal_literal_token1] = ACTIONS(1),
    [aux_sym_decimal_literal_token2] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [aux_sym_binary_literal_token1] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_U] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_double_quote_string_literal_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_expr] = STATE(117),
    [sym__expression] = STATE(89),
    [sym_parenthesized_expression] = STATE(89),
    [sym_map_expression] = STATE(89),
    [sym_list_expression] = STATE(89),
    [sym_index_expression] = STATE(89),
    [sym_select_expression] = STATE(89),
    [sym_call_expression] = STATE(89),
    [sym_member_call_expression] = STATE(89),
    [sym_conditional_expression] = STATE(89),
    [sym_unary_expression] = STATE(89),
    [sym_binary_expression] = STATE(89),
    [sym_hex_literal] = STATE(52),
    [sym_octal_literal] = STATE(52),
    [sym_decimal_literal] = STATE(52),
    [sym_binary_literal] = STATE(52),
    [sym_int_literal] = STATE(51),
    [sym_uint_literal] = STATE(89),
    [sym_double_quote_string_literal] = STATE(63),
    [sym_single_quoted_string_literal] = STATE(63),
    [sym_triple_double_quote_string_literal] = STATE(63),
    [sym_triple_single_quoted_string_literall] = STATE(63),
    [sym_string_literal] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_0] = ACTIONS(13),
    [aux_sym_decimal_literal_token1] = ACTIONS(15),
    [sym_float_literal] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(25),
    [sym_null] = ACTIONS(27),
    [sym_true] = ACTIONS(27),
    [sym_false] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    STATE(121), 1,
      sym__expressions,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(33), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(84), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [80] = 19,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    STATE(110), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(91), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [160] = 19,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      sym_float_literal,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_int_literal,
    STATE(108), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(91), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [240] = 19,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(31), 1,
      sym_float_literal,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_int_literal,
    STATE(125), 1,
      sym__expressions,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(33), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(84), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [320] = 18,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(45), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(49), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(85), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [398] = 19,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      sym_float_literal,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_int_literal,
    STATE(110), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(91), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [478] = 18,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(49), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(85), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [556] = 18,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(37), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    STATE(110), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(91), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [633] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(47), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(49), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(85), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [707] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(55), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(80), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [781] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(59), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(61), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(82), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [855] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(63), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(65), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(86), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [929] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(67), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(69), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(69), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1003] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(71), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(73), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(83), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1077] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(75), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(77), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(87), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1151] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(79), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(81), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(88), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1225] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(83), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(85), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(90), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1299] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(87), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(89), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(79), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1373] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(91), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(59), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1447] = 17,
    ACTIONS(3), 1,
      anon_sym_LPAREN,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_0,
    ACTIONS(15), 1,
      aux_sym_decimal_literal_token1,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(95), 1,
      sym_float_literal,
    STATE(51), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(97), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(52), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(63), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(75), 13,
      sym__expression,
      sym_parenthesized_expression,
      sym_map_expression,
      sym_list_expression,
      sym_index_expression,
      sym_select_expression,
      sym_call_expression,
      sym_member_call_expression,
      sym_conditional_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_uint_literal,
      sym_string_literal,
  [1521] = 7,
    ACTIONS(105), 1,
      anon_sym__,
    ACTIONS(109), 1,
      aux_sym_octal_literal_token1,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(107), 2,
      anon_sym_o,
      anon_sym_O,
    ACTIONS(111), 2,
      anon_sym_b,
      anon_sym_B,
    ACTIONS(99), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1568] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_arguments,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(81), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    ACTIONS(113), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1619] = 5,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(125), 1,
      aux_sym_binary_literal_token1,
    STATE(30), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1657] = 5,
    ACTIONS(131), 1,
      anon_sym__,
    ACTIONS(133), 1,
      aux_sym_hex_literal_token1,
    STATE(34), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1695] = 5,
    ACTIONS(139), 1,
      anon_sym__,
    ACTIONS(142), 1,
      aux_sym_binary_literal_token1,
    STATE(26), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1733] = 5,
    ACTIONS(149), 1,
      anon_sym__,
    ACTIONS(152), 1,
      aux_sym_decimal_literal_token2,
    STATE(27), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1771] = 5,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      aux_sym_decimal_literal_token2,
    STATE(27), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1809] = 5,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(161), 1,
      aux_sym_decimal_literal_token2,
    STATE(27), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1847] = 5,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(171), 1,
      aux_sym_binary_literal_token1,
    STATE(26), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1885] = 5,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(171), 1,
      aux_sym_binary_literal_token1,
    STATE(26), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1923] = 5,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(179), 1,
      aux_sym_octal_literal_token1,
    STATE(38), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1961] = 5,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(185), 1,
      aux_sym_octal_literal_token1,
    STATE(45), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(183), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(181), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1999] = 5,
    ACTIONS(191), 1,
      anon_sym__,
    ACTIONS(194), 1,
      aux_sym_hex_literal_token1,
    STATE(34), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2037] = 5,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(201), 1,
      aux_sym_decimal_literal_token2,
    STATE(28), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2075] = 5,
    ACTIONS(159), 1,
      anon_sym__,
    ACTIONS(203), 1,
      aux_sym_decimal_literal_token2,
    STATE(29), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2113] = 5,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(209), 1,
      aux_sym_binary_literal_token1,
    STATE(31), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2151] = 5,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(185), 1,
      aux_sym_octal_literal_token1,
    STATE(45), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2189] = 5,
    ACTIONS(131), 1,
      anon_sym__,
    ACTIONS(215), 1,
      aux_sym_hex_literal_token1,
    STATE(43), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2227] = 5,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(217), 1,
      aux_sym_octal_literal_token1,
    STATE(42), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2265] = 5,
    ACTIONS(131), 1,
      anon_sym__,
    ACTIONS(223), 1,
      aux_sym_hex_literal_token1,
    STATE(25), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2303] = 5,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(185), 1,
      aux_sym_octal_literal_token1,
    STATE(45), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2341] = 5,
    ACTIONS(131), 1,
      anon_sym__,
    ACTIONS(133), 1,
      aux_sym_hex_literal_token1,
    STATE(34), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(231), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2379] = 5,
    ACTIONS(177), 1,
      anon_sym__,
    ACTIONS(233), 1,
      aux_sym_octal_literal_token1,
    STATE(33), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2417] = 5,
    ACTIONS(239), 1,
      anon_sym__,
    ACTIONS(242), 1,
      aux_sym_octal_literal_token1,
    STATE(45), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2455] = 2,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_octal_literal_token1,
      anon_sym_u,
      anon_sym_U,
  [2486] = 2,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_hex_literal_token1,
      anon_sym_u,
      anon_sym_U,
  [2517] = 4,
    ACTIONS(245), 1,
      anon_sym__,
    ACTIONS(247), 1,
      aux_sym_decimal_literal_token2,
    ACTIONS(101), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2552] = 2,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_binary_literal_token1,
      anon_sym_u,
      anon_sym_U,
  [2583] = 2,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_decimal_literal_token2,
      anon_sym_u,
      anon_sym_U,
  [2614] = 3,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(113), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2645] = 2,
    ACTIONS(253), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2674] = 4,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_arguments,
    ACTIONS(257), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2707] = 2,
    ACTIONS(261), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(259), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2734] = 2,
    ACTIONS(265), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2761] = 2,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2788] = 2,
    ACTIONS(273), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2815] = 2,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2842] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(279), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [2885] = 2,
    ACTIONS(301), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2912] = 2,
    ACTIONS(305), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(303), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2939] = 2,
    ACTIONS(309), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(307), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2966] = 2,
    ACTIONS(313), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(311), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2993] = 2,
    ACTIONS(317), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(315), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3020] = 2,
    ACTIONS(321), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(319), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3047] = 2,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(323), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3074] = 2,
    ACTIONS(329), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3101] = 2,
    ACTIONS(333), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(331), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3128] = 4,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(337), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 18,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3159] = 2,
    ACTIONS(341), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(339), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3186] = 2,
    ACTIONS(345), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(343), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3213] = 2,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3240] = 2,
    ACTIONS(353), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3267] = 2,
    ACTIONS(357), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(355), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3294] = 4,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(361), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(359), 18,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3325] = 2,
    ACTIONS(365), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(363), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3352] = 2,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3379] = 2,
    ACTIONS(373), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(371), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3406] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(335), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [3445] = 7,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(335), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3482] = 2,
    ACTIONS(377), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(375), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3509] = 6,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(337), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(335), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3544] = 5,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(337), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(335), 15,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3577] = 12,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(381), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3622] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(383), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3662] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3701] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3739] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3777] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3815] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3853] = 10,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(295), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(287), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3891] = 4,
    ACTIONS(397), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(400), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(402), 1,
      aux_sym_triple_double_quote_string_literal_token1,
    STATE(92), 1,
      aux_sym_triple_double_quote_string_literal_repeat1,
  [3904] = 4,
    ACTIONS(405), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(408), 1,
      anon_sym_SQUOTE,
    ACTIONS(410), 1,
      aux_sym_single_quoted_string_literal_token1,
    STATE(93), 1,
      aux_sym_single_quoted_string_literal_repeat1,
  [3917] = 3,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3928] = 4,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_double_quote_string_literal_token1,
    ACTIONS(421), 1,
      aux_sym_double_quote_string_literal_token2,
    STATE(95), 1,
      aux_sym_double_quote_string_literal_repeat1,
  [3941] = 4,
    ACTIONS(424), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      aux_sym_double_quote_string_literal_token1,
    ACTIONS(428), 1,
      aux_sym_double_quote_string_literal_token2,
    STATE(95), 1,
      aux_sym_double_quote_string_literal_repeat1,
  [3954] = 3,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3965] = 4,
    ACTIONS(432), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(435), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(437), 1,
      aux_sym_triple_single_quoted_string_literall_token1,
    STATE(98), 1,
      aux_sym_triple_single_quoted_string_literall_repeat1,
  [3978] = 4,
    ACTIONS(440), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
    ACTIONS(444), 1,
      aux_sym_single_quoted_string_literal_token1,
    STATE(93), 1,
      aux_sym_single_quoted_string_literal_repeat1,
  [3991] = 4,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      aux_sym_double_quote_string_literal_token1,
    ACTIONS(450), 1,
      aux_sym_double_quote_string_literal_token2,
    STATE(96), 1,
      aux_sym_double_quote_string_literal_repeat1,
  [4004] = 4,
    ACTIONS(452), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(454), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(456), 1,
      aux_sym_triple_double_quote_string_literal_token1,
    STATE(92), 1,
      aux_sym_triple_double_quote_string_literal_repeat1,
  [4017] = 4,
    ACTIONS(458), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(460), 1,
      anon_sym_SQUOTE,
    ACTIONS(462), 1,
      aux_sym_single_quoted_string_literal_token1,
    STATE(99), 1,
      aux_sym_single_quoted_string_literal_repeat1,
  [4030] = 4,
    ACTIONS(464), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(466), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(468), 1,
      aux_sym_triple_single_quoted_string_literall_token1,
    STATE(98), 1,
      aux_sym_triple_single_quoted_string_literall_repeat1,
  [4043] = 4,
    ACTIONS(470), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(472), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(474), 1,
      aux_sym_triple_single_quoted_string_literall_token1,
    STATE(103), 1,
      aux_sym_triple_single_quoted_string_literall_repeat1,
  [4056] = 4,
    ACTIONS(476), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(478), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(480), 1,
      aux_sym_triple_double_quote_string_literal_token1,
    STATE(101), 1,
      aux_sym_triple_double_quote_string_literal_repeat1,
  [4069] = 3,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_map_expression_repeat1,
  [4079] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_map_expression_repeat1,
  [4089] = 3,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      aux_sym_map_expression_repeat1,
  [4099] = 2,
    ACTIONS(493), 1,
      anon_sym__,
    ACTIONS(495), 1,
      aux_sym_octal_literal_token1,
  [4106] = 1,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4111] = 2,
    ACTIONS(497), 1,
      anon_sym__,
    ACTIONS(499), 1,
      aux_sym_binary_literal_token1,
  [4118] = 2,
    ACTIONS(501), 1,
      anon_sym__,
    ACTIONS(503), 1,
      aux_sym_hex_literal_token1,
  [4125] = 1,
    ACTIONS(505), 1,
      aux_sym_binary_literal_token1,
  [4129] = 1,
    ACTIONS(507), 1,
      aux_sym_binary_literal_token1,
  [4133] = 1,
    ACTIONS(509), 1,
      aux_sym_decimal_literal_token2,
  [4137] = 1,
    ACTIONS(511), 1,
      aux_sym_hex_literal_token1,
  [4141] = 1,
    ACTIONS(513), 1,
      ts_builtin_sym_end,
  [4145] = 1,
    ACTIONS(515), 1,
      aux_sym_octal_literal_token1,
  [4149] = 1,
    ACTIONS(517), 1,
      aux_sym_octal_literal_token1,
  [4153] = 1,
    ACTIONS(519), 1,
      aux_sym_hex_literal_token1,
  [4157] = 1,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [4161] = 1,
    ACTIONS(523), 1,
      sym_identifier,
  [4165] = 1,
    ACTIONS(525), 1,
      aux_sym_decimal_literal_token2,
  [4169] = 1,
    ACTIONS(495), 1,
      aux_sym_octal_literal_token1,
  [4173] = 1,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 80,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 240,
  [SMALL_STATE(6)] = 320,
  [SMALL_STATE(7)] = 398,
  [SMALL_STATE(8)] = 478,
  [SMALL_STATE(9)] = 556,
  [SMALL_STATE(10)] = 633,
  [SMALL_STATE(11)] = 707,
  [SMALL_STATE(12)] = 781,
  [SMALL_STATE(13)] = 855,
  [SMALL_STATE(14)] = 929,
  [SMALL_STATE(15)] = 1003,
  [SMALL_STATE(16)] = 1077,
  [SMALL_STATE(17)] = 1151,
  [SMALL_STATE(18)] = 1225,
  [SMALL_STATE(19)] = 1299,
  [SMALL_STATE(20)] = 1373,
  [SMALL_STATE(21)] = 1447,
  [SMALL_STATE(22)] = 1521,
  [SMALL_STATE(23)] = 1568,
  [SMALL_STATE(24)] = 1619,
  [SMALL_STATE(25)] = 1657,
  [SMALL_STATE(26)] = 1695,
  [SMALL_STATE(27)] = 1733,
  [SMALL_STATE(28)] = 1771,
  [SMALL_STATE(29)] = 1809,
  [SMALL_STATE(30)] = 1847,
  [SMALL_STATE(31)] = 1885,
  [SMALL_STATE(32)] = 1923,
  [SMALL_STATE(33)] = 1961,
  [SMALL_STATE(34)] = 1999,
  [SMALL_STATE(35)] = 2037,
  [SMALL_STATE(36)] = 2075,
  [SMALL_STATE(37)] = 2113,
  [SMALL_STATE(38)] = 2151,
  [SMALL_STATE(39)] = 2189,
  [SMALL_STATE(40)] = 2227,
  [SMALL_STATE(41)] = 2265,
  [SMALL_STATE(42)] = 2303,
  [SMALL_STATE(43)] = 2341,
  [SMALL_STATE(44)] = 2379,
  [SMALL_STATE(45)] = 2417,
  [SMALL_STATE(46)] = 2455,
  [SMALL_STATE(47)] = 2486,
  [SMALL_STATE(48)] = 2517,
  [SMALL_STATE(49)] = 2552,
  [SMALL_STATE(50)] = 2583,
  [SMALL_STATE(51)] = 2614,
  [SMALL_STATE(52)] = 2645,
  [SMALL_STATE(53)] = 2674,
  [SMALL_STATE(54)] = 2707,
  [SMALL_STATE(55)] = 2734,
  [SMALL_STATE(56)] = 2761,
  [SMALL_STATE(57)] = 2788,
  [SMALL_STATE(58)] = 2815,
  [SMALL_STATE(59)] = 2842,
  [SMALL_STATE(60)] = 2885,
  [SMALL_STATE(61)] = 2912,
  [SMALL_STATE(62)] = 2939,
  [SMALL_STATE(63)] = 2966,
  [SMALL_STATE(64)] = 2993,
  [SMALL_STATE(65)] = 3020,
  [SMALL_STATE(66)] = 3047,
  [SMALL_STATE(67)] = 3074,
  [SMALL_STATE(68)] = 3101,
  [SMALL_STATE(69)] = 3128,
  [SMALL_STATE(70)] = 3159,
  [SMALL_STATE(71)] = 3186,
  [SMALL_STATE(72)] = 3213,
  [SMALL_STATE(73)] = 3240,
  [SMALL_STATE(74)] = 3267,
  [SMALL_STATE(75)] = 3294,
  [SMALL_STATE(76)] = 3325,
  [SMALL_STATE(77)] = 3352,
  [SMALL_STATE(78)] = 3379,
  [SMALL_STATE(79)] = 3406,
  [SMALL_STATE(80)] = 3445,
  [SMALL_STATE(81)] = 3482,
  [SMALL_STATE(82)] = 3509,
  [SMALL_STATE(83)] = 3544,
  [SMALL_STATE(84)] = 3577,
  [SMALL_STATE(85)] = 3622,
  [SMALL_STATE(86)] = 3662,
  [SMALL_STATE(87)] = 3701,
  [SMALL_STATE(88)] = 3739,
  [SMALL_STATE(89)] = 3777,
  [SMALL_STATE(90)] = 3815,
  [SMALL_STATE(91)] = 3853,
  [SMALL_STATE(92)] = 3891,
  [SMALL_STATE(93)] = 3904,
  [SMALL_STATE(94)] = 3917,
  [SMALL_STATE(95)] = 3928,
  [SMALL_STATE(96)] = 3941,
  [SMALL_STATE(97)] = 3954,
  [SMALL_STATE(98)] = 3965,
  [SMALL_STATE(99)] = 3978,
  [SMALL_STATE(100)] = 3991,
  [SMALL_STATE(101)] = 4004,
  [SMALL_STATE(102)] = 4017,
  [SMALL_STATE(103)] = 4030,
  [SMALL_STATE(104)] = 4043,
  [SMALL_STATE(105)] = 4056,
  [SMALL_STATE(106)] = 4069,
  [SMALL_STATE(107)] = 4079,
  [SMALL_STATE(108)] = 4089,
  [SMALL_STATE(109)] = 4099,
  [SMALL_STATE(110)] = 4106,
  [SMALL_STATE(111)] = 4111,
  [SMALL_STATE(112)] = 4118,
  [SMALL_STATE(113)] = 4125,
  [SMALL_STATE(114)] = 4129,
  [SMALL_STATE(115)] = 4133,
  [SMALL_STATE(116)] = 4137,
  [SMALL_STATE(117)] = 4141,
  [SMALL_STATE(118)] = 4145,
  [SMALL_STATE(119)] = 4149,
  [SMALL_STATE(120)] = 4153,
  [SMALL_STATE(121)] = 4157,
  [SMALL_STATE(122)] = 4161,
  [SMALL_STATE(123)] = 4165,
  [SMALL_STATE(124)] = 4169,
  [SMALL_STATE(125)] = 4173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_literal, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_literal, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_literal_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_literal_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_literal_repeat1, 2), SHIFT_REPEAT(114),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_literal_repeat1, 2), SHIFT_REPEAT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_literal_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decimal_literal_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_literal_repeat1, 2), SHIFT_REPEAT(115),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_literal_repeat1, 2), SHIFT_REPEAT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_literal, 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_literal, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_literal_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hex_literal_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_literal_repeat1, 2), SHIFT_REPEAT(116),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_literal_repeat1, 2), SHIFT_REPEAT(34),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_literal, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_literal, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 5),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_octal_literal_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_octal_literal_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_octal_literal_repeat1, 2), SHIFT_REPEAT(118),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_octal_literal_repeat1, 2), SHIFT_REPEAT(45),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 3, .production_id = 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_expression, 3, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string_literal, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string_literal, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_call_expression, 4, .production_id = 8),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_call_expression, 4, .production_id = 8),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 7),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint_literal, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uint_literal, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_single_quoted_string_literall, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_single_quoted_string_literall, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_double_quote_string_literal, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_double_quote_string_literal, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string_literal, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string_literal, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string_literal, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string_literal, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string_literal, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string_literal, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_double_quote_string_literal, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_double_quote_string_literal, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 4),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 4),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_single_quoted_string_literall, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_single_quoted_string_literall, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, .production_id = 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, .production_id = 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expressions_repeat1, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(92),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_triple_double_quote_string_literal_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(92),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(93),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_literal_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(93),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expressions_repeat1, 2), SHIFT_REPEAT(10),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_literal_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(95),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(95),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_single_quoted_string_literall_repeat1, 2), SHIFT_REPEAT(98),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_triple_single_quoted_string_literall_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_single_quoted_string_literall_repeat1, 2), SHIFT_REPEAT(98),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [482] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_expression_repeat1, 2), SHIFT_REPEAT(9),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_expression_repeat1, 2),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [513] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cel(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
