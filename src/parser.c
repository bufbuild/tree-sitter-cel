#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 140
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_in = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_PIPE_PIPE = 25,
  sym_identifier = 26,
  anon_sym_0 = 27,
  anon_sym_x = 28,
  anon_sym_X = 29,
  anon_sym__ = 30,
  aux_sym_hex_literal_token1 = 31,
  anon_sym_o = 32,
  anon_sym_O = 33,
  aux_sym_octal_literal_token1 = 34,
  aux_sym_decimal_literal_token1 = 35,
  aux_sym_decimal_literal_token2 = 36,
  anon_sym_b = 37,
  anon_sym_B = 38,
  aux_sym_binary_literal_token1 = 39,
  anon_sym_u = 40,
  anon_sym_U = 41,
  sym_float_literal = 42,
  anon_sym_DQUOTE = 43,
  aux_sym_double_quote_string_literal_token1 = 44,
  aux_sym_double_quote_string_literal_token2 = 45,
  anon_sym_SQUOTE = 46,
  aux_sym_single_quoted_string_literal_token1 = 47,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 48,
  aux_sym_triple_double_quote_string_literal_token1 = 49,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 50,
  aux_sym_triple_single_quoted_string_literall_token1 = 51,
  sym_null = 52,
  sym_true = 53,
  sym_false = 54,
  sym_comment = 55,
  sym_expr = 56,
  sym__expression = 57,
  sym__expressions = 58,
  sym_parenthesized_expression = 59,
  sym_struct_expression = 60,
  sym_struct_fields = 61,
  sym_field_initializer = 62,
  sym_map_expression = 63,
  sym_map_entry = 64,
  sym_list_expression = 65,
  sym_index_expression = 66,
  sym_select_expression = 67,
  sym_call_expression = 68,
  sym_member_call_expression = 69,
  sym_arguments = 70,
  sym_conditional_expression = 71,
  sym_unary_expression = 72,
  sym_binary_expression = 73,
  sym_hex_literal = 74,
  sym_octal_literal = 75,
  sym_decimal_literal = 76,
  sym_binary_literal = 77,
  sym_int_literal = 78,
  sym_uint_literal = 79,
  sym_double_quote_string_literal = 80,
  sym_single_quoted_string_literal = 81,
  sym_triple_double_quote_string_literal = 82,
  sym_triple_single_quoted_string_literall = 83,
  sym_string_literal = 84,
  aux_sym__expressions_repeat1 = 85,
  aux_sym_struct_fields_repeat1 = 86,
  aux_sym_map_expression_repeat1 = 87,
  aux_sym_hex_literal_repeat1 = 88,
  aux_sym_octal_literal_repeat1 = 89,
  aux_sym_decimal_literal_repeat1 = 90,
  aux_sym_binary_literal_repeat1 = 91,
  aux_sym_double_quote_string_literal_repeat1 = 92,
  aux_sym_single_quoted_string_literal_repeat1 = 93,
  aux_sym_triple_double_quote_string_literal_repeat1 = 94,
  aux_sym_triple_single_quoted_string_literall_repeat1 = 95,
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
  [anon_sym_in] = "in",
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
  [sym_struct_expression] = "struct_expression",
  [sym_struct_fields] = "struct_fields",
  [sym_field_initializer] = "field_initializer",
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
  [aux_sym_struct_fields_repeat1] = "struct_fields_repeat1",
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
  [anon_sym_in] = anon_sym_in,
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
  [sym_struct_expression] = sym_struct_expression,
  [sym_struct_fields] = sym_struct_fields,
  [sym_field_initializer] = sym_field_initializer,
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
  [aux_sym_struct_fields_repeat1] = aux_sym_struct_fields_repeat1,
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
  [anon_sym_in] = {
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
  [sym_struct_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_field_initializer] = {
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
  [aux_sym_struct_fields_repeat1] = {
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
  field_fields = 5,
  field_function = 6,
  field_index = 7,
  field_key = 8,
  field_kind = 9,
  field_left = 10,
  field_member = 11,
  field_operand = 12,
  field_operator = 13,
  field_quoted = 14,
  field_right = 15,
  field_type = 16,
  field_value = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_index] = "index",
  [field_key] = "key",
  [field_kind] = "kind",
  [field_left] = "left",
  [field_member] = "member",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_quoted] = "quoted",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 1},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 3},
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
    {field_type, 0},
  [8] =
    {field_member, 2},
    {field_operand, 0},
  [10] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [13] =
    {field_key, 0},
    {field_value, 2},
  [15] =
    {field_fields, 2},
    {field_type, 0},
  [17] =
    {field_index, 2},
    {field_operand, 0},
  [19] =
    {field_arguments, 3},
    {field_function, 2},
    {field_operand, 0},
  [22] =
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
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
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
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '0') ADVANCE(79);
      if (lookahead == '1') ADVANCE(84);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(82);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(81);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 't') ADVANCE(74);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '&') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(109);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 36:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(103);
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == 'B') ADVANCE(91);
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(82);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(81);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(87);
      END_STATE();
    case 37:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '&') ADVANCE(6);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(63);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(118);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(75);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(113);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(70);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(69);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(73);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_hex_literal_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_octal_literal_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token1);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_decimal_literal_token2);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_binary_literal_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_U);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_double_quote_string_literal_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_double_quote_string_literal_token2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_literal_token1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_triple_double_quote_string_literal_token1);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_triple_double_quote_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_triple_single_quoted_string_literall_token1);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_triple_single_quoted_string_literall_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_null);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(78);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
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
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 38},
  [26] = {.lex_state = 39},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 37},
  [29] = {.lex_state = 38},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 38},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 38},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 36},
  [41] = {.lex_state = 36},
  [42] = {.lex_state = 36},
  [43] = {.lex_state = 36},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 38},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 38},
  [48] = {.lex_state = 36},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 36},
  [53] = {.lex_state = 36},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 36},
  [57] = {.lex_state = 36},
  [58] = {.lex_state = 36},
  [59] = {.lex_state = 36},
  [60] = {.lex_state = 36},
  [61] = {.lex_state = 36},
  [62] = {.lex_state = 36},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 36},
  [65] = {.lex_state = 36},
  [66] = {.lex_state = 36},
  [67] = {.lex_state = 36},
  [68] = {.lex_state = 36},
  [69] = {.lex_state = 36},
  [70] = {.lex_state = 36},
  [71] = {.lex_state = 36},
  [72] = {.lex_state = 36},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 36},
  [76] = {.lex_state = 36},
  [77] = {.lex_state = 36},
  [78] = {.lex_state = 36},
  [79] = {.lex_state = 36},
  [80] = {.lex_state = 36},
  [81] = {.lex_state = 36},
  [82] = {.lex_state = 36},
  [83] = {.lex_state = 36},
  [84] = {.lex_state = 36},
  [85] = {.lex_state = 36},
  [86] = {.lex_state = 36},
  [87] = {.lex_state = 36},
  [88] = {.lex_state = 36},
  [89] = {.lex_state = 36},
  [90] = {.lex_state = 36},
  [91] = {.lex_state = 36},
  [92] = {.lex_state = 36},
  [93] = {.lex_state = 36},
  [94] = {.lex_state = 36},
  [95] = {.lex_state = 36},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 26},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 26},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 38},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 37},
  [122] = {.lex_state = 36},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 37},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 39},
  [129] = {.lex_state = 37},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 36},
  [132] = {.lex_state = 36},
  [133] = {.lex_state = 38},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 36},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 38},
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
    [anon_sym_in] = ACTIONS(1),
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
    [sym_expr] = STATE(130),
    [sym__expression] = STATE(93),
    [sym_parenthesized_expression] = STATE(93),
    [sym_struct_expression] = STATE(93),
    [sym_map_expression] = STATE(93),
    [sym_list_expression] = STATE(93),
    [sym_index_expression] = STATE(93),
    [sym_select_expression] = STATE(93),
    [sym_call_expression] = STATE(93),
    [sym_member_call_expression] = STATE(93),
    [sym_conditional_expression] = STATE(93),
    [sym_unary_expression] = STATE(93),
    [sym_binary_expression] = STATE(93),
    [sym_hex_literal] = STATE(53),
    [sym_octal_literal] = STATE(53),
    [sym_decimal_literal] = STATE(53),
    [sym_binary_literal] = STATE(53),
    [sym_int_literal] = STATE(54),
    [sym_uint_literal] = STATE(93),
    [sym_double_quote_string_literal] = STATE(56),
    [sym_single_quoted_string_literal] = STATE(56),
    [sym_triple_double_quote_string_literal] = STATE(56),
    [sym_triple_single_quoted_string_literall] = STATE(56),
    [sym_string_literal] = STATE(93),
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
  [0] = 18,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(29), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(33), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(88), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [79] = 19,
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
    STATE(54), 1,
      sym_int_literal,
    STATE(112), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(95), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(43), 1,
      sym_float_literal,
    STATE(54), 1,
      sym_int_literal,
    STATE(127), 1,
      sym__expressions,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(45), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(87), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [241] = 19,
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
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_int_literal,
    STATE(124), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(95), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [322] = 19,
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
    ACTIONS(43), 1,
      sym_float_literal,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym_int_literal,
    STATE(134), 1,
      sym__expressions,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(45), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(87), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [403] = 19,
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
    STATE(54), 1,
      sym_int_literal,
    STATE(124), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(95), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [484] = 18,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(53), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(33), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(88), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [563] = 18,
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
    STATE(54), 1,
      sym_int_literal,
    STATE(124), 1,
      sym_map_entry,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(39), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(95), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [641] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(57), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(84), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [716] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(61), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(61), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [791] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(65), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(89), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [866] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(69), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(92), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [941] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(33), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(88), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1016] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(73), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(91), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1091] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(77), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(86), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1166] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(81), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(90), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1241] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(85), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(82), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1316] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(89), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(80), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1391] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(93), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(78), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1466] = 17,
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
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(97), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(59), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1541] = 17,
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
    ACTIONS(99), 1,
      sym_float_literal,
    STATE(54), 1,
      sym_int_literal,
    ACTIONS(9), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(101), 3,
      sym_null,
      sym_true,
      sym_false,
    STATE(53), 4,
      sym_hex_literal,
      sym_octal_literal,
      sym_decimal_literal,
      sym_binary_literal,
    STATE(56), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    STATE(94), 14,
      sym__expression,
      sym_parenthesized_expression,
      sym_struct_expression,
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
  [1616] = 7,
    ACTIONS(109), 1,
      anon_sym__,
    ACTIONS(113), 1,
      aux_sym_octal_literal_token1,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 2,
      anon_sym_x,
      anon_sym_X,
    ACTIONS(111), 2,
      anon_sym_o,
      anon_sym_O,
    ACTIONS(115), 2,
      anon_sym_b,
      anon_sym_B,
    ACTIONS(103), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1665] = 9,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      sym_arguments,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(65), 4,
      sym_double_quote_string_literal,
      sym_single_quoted_string_literal,
      sym_triple_double_quote_string_literal,
      sym_triple_single_quoted_string_literall,
    ACTIONS(117), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1718] = 5,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(129), 1,
      aux_sym_hex_literal_token1,
    STATE(32), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1758] = 5,
    ACTIONS(135), 1,
      anon_sym__,
    ACTIONS(137), 1,
      aux_sym_decimal_literal_token2,
    STATE(35), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1798] = 5,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(145), 1,
      aux_sym_octal_literal_token1,
    STATE(43), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1838] = 5,
    ACTIONS(151), 1,
      anon_sym__,
    ACTIONS(154), 1,
      aux_sym_binary_literal_token1,
    STATE(28), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1878] = 5,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(161), 1,
      aux_sym_hex_literal_token1,
    STATE(25), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1918] = 5,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(169), 1,
      aux_sym_binary_literal_token1,
    STATE(28), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1958] = 5,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(175), 1,
      aux_sym_octal_literal_token1,
    STATE(40), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [1998] = 5,
    ACTIONS(181), 1,
      anon_sym__,
    ACTIONS(184), 1,
      aux_sym_hex_literal_token1,
    STATE(32), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(179), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2038] = 5,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(191), 1,
      aux_sym_binary_literal_token1,
    STATE(38), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2078] = 5,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(129), 1,
      aux_sym_hex_literal_token1,
    STATE(32), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2118] = 5,
    ACTIONS(201), 1,
      anon_sym__,
    ACTIONS(204), 1,
      aux_sym_decimal_literal_token2,
    STATE(35), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2158] = 5,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(175), 1,
      aux_sym_octal_literal_token1,
    STATE(40), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2198] = 5,
    ACTIONS(135), 1,
      anon_sym__,
    ACTIONS(137), 1,
      aux_sym_decimal_literal_token2,
    STATE(35), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(209), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2238] = 5,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(169), 1,
      aux_sym_binary_literal_token1,
    STATE(28), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2278] = 5,
    ACTIONS(167), 1,
      anon_sym__,
    ACTIONS(215), 1,
      aux_sym_binary_literal_token1,
    STATE(30), 1,
      aux_sym_binary_literal_repeat1,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2318] = 5,
    ACTIONS(221), 1,
      anon_sym__,
    ACTIONS(224), 1,
      aux_sym_octal_literal_token1,
    STATE(40), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(219), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(217), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2358] = 5,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(231), 1,
      aux_sym_octal_literal_token1,
    STATE(36), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2398] = 5,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(237), 1,
      aux_sym_octal_literal_token1,
    STATE(31), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2438] = 5,
    ACTIONS(143), 1,
      anon_sym__,
    ACTIONS(175), 1,
      aux_sym_octal_literal_token1,
    STATE(40), 1,
      aux_sym_octal_literal_repeat1,
    ACTIONS(235), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2478] = 5,
    ACTIONS(135), 1,
      anon_sym__,
    ACTIONS(243), 1,
      aux_sym_decimal_literal_token2,
    STATE(26), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2518] = 5,
    ACTIONS(127), 1,
      anon_sym__,
    ACTIONS(245), 1,
      aux_sym_hex_literal_token1,
    STATE(34), 1,
      aux_sym_hex_literal_repeat1,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2558] = 5,
    ACTIONS(135), 1,
      anon_sym__,
    ACTIONS(247), 1,
      aux_sym_decimal_literal_token2,
    STATE(37), 1,
      aux_sym_decimal_literal_repeat1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2598] = 2,
    ACTIONS(179), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_hex_literal_token1,
      anon_sym_u,
      anon_sym_U,
  [2631] = 2,
    ACTIONS(219), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(217), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_octal_literal_token1,
      anon_sym_u,
      anon_sym_U,
  [2664] = 4,
    ACTIONS(249), 1,
      anon_sym__,
    ACTIONS(251), 1,
      aux_sym_decimal_literal_token2,
    ACTIONS(105), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2701] = 2,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_decimal_literal_token2,
      anon_sym_u,
      anon_sym_U,
  [2734] = 2,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym__,
      aux_sym_binary_literal_token1,
      anon_sym_u,
      anon_sym_U,
  [2767] = 4,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_arguments,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2802] = 2,
    ACTIONS(259), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(257), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_u,
      anon_sym_U,
  [2833] = 3,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(261), 2,
      anon_sym_u,
      anon_sym_U,
    ACTIONS(117), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2866] = 2,
    ACTIONS(265), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2895] = 2,
    ACTIONS(269), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2924] = 2,
    ACTIONS(273), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(271), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2953] = 2,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2982] = 5,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(287), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(279), 19,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3017] = 2,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3046] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
    ACTIONS(293), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [3093] = 2,
    ACTIONS(311), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(309), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3122] = 2,
    ACTIONS(315), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(313), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3151] = 2,
    ACTIONS(319), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(317), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3180] = 2,
    ACTIONS(323), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3209] = 2,
    ACTIONS(327), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(325), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3238] = 2,
    ACTIONS(331), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(329), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3267] = 2,
    ACTIONS(335), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(333), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3296] = 2,
    ACTIONS(339), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(337), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3325] = 2,
    ACTIONS(343), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(341), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3354] = 2,
    ACTIONS(347), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(345), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3383] = 2,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3412] = 2,
    ACTIONS(355), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(353), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3441] = 2,
    ACTIONS(359), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(357), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3470] = 2,
    ACTIONS(363), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(361), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3499] = 2,
    ACTIONS(367), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3528] = 2,
    ACTIONS(371), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(369), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3557] = 9,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
    ACTIONS(373), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_PIPE_PIPE,
  [3600] = 2,
    ACTIONS(377), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(375), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3629] = 8,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
    ACTIONS(373), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3670] = 2,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(379), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3699] = 7,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(373), 14,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3738] = 2,
    ACTIONS(387), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(385), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3767] = 5,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(373), 19,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3802] = 2,
    ACTIONS(391), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(389), 22,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3831] = 6,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(383), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(373), 16,
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
      anon_sym_in,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3868] = 13,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(395), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [3917] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(397), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [3961] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [4004] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [4047] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [4089] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [4131] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [4173] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [4215] = 11,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_LBRACK,
    ACTIONS(285), 1,
      anon_sym_DOT,
    ACTIONS(295), 1,
      anon_sym_QMARK,
    ACTIONS(305), 1,
      anon_sym_AMP_AMP,
    ACTIONS(307), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    ACTIONS(297), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(303), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(301), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
  [4257] = 4,
    ACTIONS(413), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(416), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(418), 1,
      aux_sym_triple_double_quote_string_literal_token1,
    STATE(96), 1,
      aux_sym_triple_double_quote_string_literal_repeat1,
  [4270] = 4,
    ACTIONS(421), 1,
      anon_sym_DQUOTE,
    ACTIONS(423), 1,
      aux_sym_double_quote_string_literal_token1,
    ACTIONS(425), 1,
      aux_sym_double_quote_string_literal_token2,
    STATE(104), 1,
      aux_sym_double_quote_string_literal_repeat1,
  [4283] = 4,
    ACTIONS(427), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(429), 1,
      anon_sym_SQUOTE,
    ACTIONS(431), 1,
      aux_sym_single_quoted_string_literal_token1,
    STATE(100), 1,
      aux_sym_single_quoted_string_literal_repeat1,
  [4296] = 4,
    ACTIONS(433), 1,
      anon_sym_DQUOTE,
    ACTIONS(435), 1,
      aux_sym_double_quote_string_literal_token1,
    ACTIONS(438), 1,
      aux_sym_double_quote_string_literal_token2,
    STATE(99), 1,
      aux_sym_double_quote_string_literal_repeat1,
  [4309] = 4,
    ACTIONS(441), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    ACTIONS(446), 1,
      aux_sym_single_quoted_string_literal_token1,
    STATE(100), 1,
      aux_sym_single_quoted_string_literal_repeat1,
  [4322] = 4,
    ACTIONS(449), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(452), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(454), 1,
      aux_sym_triple_single_quoted_string_literall_token1,
    STATE(101), 1,
      aux_sym_triple_single_quoted_string_literall_repeat1,
  [4335] = 3,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(397), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4346] = 4,
    ACTIONS(460), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(462), 1,
      anon_sym_SQUOTE,
    ACTIONS(464), 1,
      aux_sym_single_quoted_string_literal_token1,
    STATE(98), 1,
      aux_sym_single_quoted_string_literal_repeat1,
  [4359] = 4,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
    ACTIONS(468), 1,
      aux_sym_double_quote_string_literal_token1,
    ACTIONS(470), 1,
      aux_sym_double_quote_string_literal_token2,
    STATE(99), 1,
      aux_sym_double_quote_string_literal_repeat1,
  [4372] = 3,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym__expressions_repeat1,
    ACTIONS(29), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4383] = 4,
    ACTIONS(474), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(476), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(478), 1,
      aux_sym_triple_double_quote_string_literal_token1,
    STATE(110), 1,
      aux_sym_triple_double_quote_string_literal_repeat1,
  [4396] = 4,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    ACTIONS(482), 1,
      sym_identifier,
    STATE(118), 1,
      sym_field_initializer,
    STATE(135), 1,
      sym_struct_fields,
  [4409] = 4,
    ACTIONS(484), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(486), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(488), 1,
      aux_sym_triple_single_quoted_string_literall_token1,
    STATE(101), 1,
      aux_sym_triple_single_quoted_string_literall_repeat1,
  [4422] = 4,
    ACTIONS(490), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(492), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(494), 1,
      aux_sym_triple_single_quoted_string_literall_token1,
    STATE(108), 1,
      aux_sym_triple_single_quoted_string_literall_repeat1,
  [4435] = 4,
    ACTIONS(496), 1,
      aux_sym_double_quote_string_literal_token2,
    ACTIONS(498), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(500), 1,
      aux_sym_triple_double_quote_string_literal_token1,
    STATE(96), 1,
      aux_sym_triple_double_quote_string_literal_repeat1,
  [4448] = 3,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      aux_sym_map_expression_repeat1,
  [4458] = 3,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_map_expression_repeat1,
  [4468] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_map_expression_repeat1,
  [4478] = 3,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      aux_sym_struct_fields_repeat1,
  [4488] = 3,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_field_initializer,
  [4498] = 3,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_struct_fields_repeat1,
  [4508] = 3,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_field_initializer,
  [4518] = 3,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_struct_fields_repeat1,
  [4528] = 2,
    ACTIONS(528), 1,
      anon_sym__,
    ACTIONS(530), 1,
      aux_sym_hex_literal_token1,
  [4535] = 2,
    ACTIONS(482), 1,
      sym_identifier,
    STATE(123), 1,
      sym_field_initializer,
  [4542] = 2,
    ACTIONS(532), 1,
      anon_sym__,
    ACTIONS(534), 1,
      aux_sym_binary_literal_token1,
  [4549] = 2,
    ACTIONS(536), 1,
      anon_sym__,
    ACTIONS(538), 1,
      aux_sym_octal_literal_token1,
  [4556] = 1,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4561] = 1,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4566] = 1,
    ACTIONS(540), 1,
      anon_sym_COLON,
  [4570] = 1,
    ACTIONS(542), 1,
      aux_sym_binary_literal_token1,
  [4574] = 1,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
  [4578] = 1,
    ACTIONS(546), 1,
      aux_sym_decimal_literal_token2,
  [4582] = 1,
    ACTIONS(548), 1,
      aux_sym_binary_literal_token1,
  [4586] = 1,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
  [4590] = 1,
    ACTIONS(552), 1,
      aux_sym_octal_literal_token1,
  [4594] = 1,
    ACTIONS(554), 1,
      aux_sym_octal_literal_token1,
  [4598] = 1,
    ACTIONS(556), 1,
      aux_sym_hex_literal_token1,
  [4602] = 1,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [4606] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
  [4610] = 1,
    ACTIONS(562), 1,
      sym_identifier,
  [4614] = 1,
    ACTIONS(538), 1,
      aux_sym_octal_literal_token1,
  [4618] = 1,
    ACTIONS(564), 1,
      aux_sym_decimal_literal_token2,
  [4622] = 1,
    ACTIONS(566), 1,
      aux_sym_hex_literal_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 160,
  [SMALL_STATE(5)] = 241,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 484,
  [SMALL_STATE(9)] = 563,
  [SMALL_STATE(10)] = 641,
  [SMALL_STATE(11)] = 716,
  [SMALL_STATE(12)] = 791,
  [SMALL_STATE(13)] = 866,
  [SMALL_STATE(14)] = 941,
  [SMALL_STATE(15)] = 1016,
  [SMALL_STATE(16)] = 1091,
  [SMALL_STATE(17)] = 1166,
  [SMALL_STATE(18)] = 1241,
  [SMALL_STATE(19)] = 1316,
  [SMALL_STATE(20)] = 1391,
  [SMALL_STATE(21)] = 1466,
  [SMALL_STATE(22)] = 1541,
  [SMALL_STATE(23)] = 1616,
  [SMALL_STATE(24)] = 1665,
  [SMALL_STATE(25)] = 1718,
  [SMALL_STATE(26)] = 1758,
  [SMALL_STATE(27)] = 1798,
  [SMALL_STATE(28)] = 1838,
  [SMALL_STATE(29)] = 1878,
  [SMALL_STATE(30)] = 1918,
  [SMALL_STATE(31)] = 1958,
  [SMALL_STATE(32)] = 1998,
  [SMALL_STATE(33)] = 2038,
  [SMALL_STATE(34)] = 2078,
  [SMALL_STATE(35)] = 2118,
  [SMALL_STATE(36)] = 2158,
  [SMALL_STATE(37)] = 2198,
  [SMALL_STATE(38)] = 2238,
  [SMALL_STATE(39)] = 2278,
  [SMALL_STATE(40)] = 2318,
  [SMALL_STATE(41)] = 2358,
  [SMALL_STATE(42)] = 2398,
  [SMALL_STATE(43)] = 2438,
  [SMALL_STATE(44)] = 2478,
  [SMALL_STATE(45)] = 2518,
  [SMALL_STATE(46)] = 2558,
  [SMALL_STATE(47)] = 2598,
  [SMALL_STATE(48)] = 2631,
  [SMALL_STATE(49)] = 2664,
  [SMALL_STATE(50)] = 2701,
  [SMALL_STATE(51)] = 2734,
  [SMALL_STATE(52)] = 2767,
  [SMALL_STATE(53)] = 2802,
  [SMALL_STATE(54)] = 2833,
  [SMALL_STATE(55)] = 2866,
  [SMALL_STATE(56)] = 2895,
  [SMALL_STATE(57)] = 2924,
  [SMALL_STATE(58)] = 2953,
  [SMALL_STATE(59)] = 2982,
  [SMALL_STATE(60)] = 3017,
  [SMALL_STATE(61)] = 3046,
  [SMALL_STATE(62)] = 3093,
  [SMALL_STATE(63)] = 3122,
  [SMALL_STATE(64)] = 3151,
  [SMALL_STATE(65)] = 3180,
  [SMALL_STATE(66)] = 3209,
  [SMALL_STATE(67)] = 3238,
  [SMALL_STATE(68)] = 3267,
  [SMALL_STATE(69)] = 3296,
  [SMALL_STATE(70)] = 3325,
  [SMALL_STATE(71)] = 3354,
  [SMALL_STATE(72)] = 3383,
  [SMALL_STATE(73)] = 3412,
  [SMALL_STATE(74)] = 3441,
  [SMALL_STATE(75)] = 3470,
  [SMALL_STATE(76)] = 3499,
  [SMALL_STATE(77)] = 3528,
  [SMALL_STATE(78)] = 3557,
  [SMALL_STATE(79)] = 3600,
  [SMALL_STATE(80)] = 3629,
  [SMALL_STATE(81)] = 3670,
  [SMALL_STATE(82)] = 3699,
  [SMALL_STATE(83)] = 3738,
  [SMALL_STATE(84)] = 3767,
  [SMALL_STATE(85)] = 3802,
  [SMALL_STATE(86)] = 3831,
  [SMALL_STATE(87)] = 3868,
  [SMALL_STATE(88)] = 3917,
  [SMALL_STATE(89)] = 3961,
  [SMALL_STATE(90)] = 4004,
  [SMALL_STATE(91)] = 4047,
  [SMALL_STATE(92)] = 4089,
  [SMALL_STATE(93)] = 4131,
  [SMALL_STATE(94)] = 4173,
  [SMALL_STATE(95)] = 4215,
  [SMALL_STATE(96)] = 4257,
  [SMALL_STATE(97)] = 4270,
  [SMALL_STATE(98)] = 4283,
  [SMALL_STATE(99)] = 4296,
  [SMALL_STATE(100)] = 4309,
  [SMALL_STATE(101)] = 4322,
  [SMALL_STATE(102)] = 4335,
  [SMALL_STATE(103)] = 4346,
  [SMALL_STATE(104)] = 4359,
  [SMALL_STATE(105)] = 4372,
  [SMALL_STATE(106)] = 4383,
  [SMALL_STATE(107)] = 4396,
  [SMALL_STATE(108)] = 4409,
  [SMALL_STATE(109)] = 4422,
  [SMALL_STATE(110)] = 4435,
  [SMALL_STATE(111)] = 4448,
  [SMALL_STATE(112)] = 4458,
  [SMALL_STATE(113)] = 4468,
  [SMALL_STATE(114)] = 4478,
  [SMALL_STATE(115)] = 4488,
  [SMALL_STATE(116)] = 4498,
  [SMALL_STATE(117)] = 4508,
  [SMALL_STATE(118)] = 4518,
  [SMALL_STATE(119)] = 4528,
  [SMALL_STATE(120)] = 4535,
  [SMALL_STATE(121)] = 4542,
  [SMALL_STATE(122)] = 4549,
  [SMALL_STATE(123)] = 4556,
  [SMALL_STATE(124)] = 4561,
  [SMALL_STATE(125)] = 4566,
  [SMALL_STATE(126)] = 4570,
  [SMALL_STATE(127)] = 4574,
  [SMALL_STATE(128)] = 4578,
  [SMALL_STATE(129)] = 4582,
  [SMALL_STATE(130)] = 4586,
  [SMALL_STATE(131)] = 4590,
  [SMALL_STATE(132)] = 4594,
  [SMALL_STATE(133)] = 4598,
  [SMALL_STATE(134)] = 4602,
  [SMALL_STATE(135)] = 4606,
  [SMALL_STATE(136)] = 4610,
  [SMALL_STATE(137)] = 4614,
  [SMALL_STATE(138)] = 4618,
  [SMALL_STATE(139)] = 4622,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_binary_literal_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_binary_literal_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_literal_repeat1, 2), SHIFT_REPEAT(126),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_binary_literal_repeat1, 2), SHIFT_REPEAT(28),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_literal, 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_literal, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_literal_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hex_literal_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_literal_repeat1, 2), SHIFT_REPEAT(139),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_literal_repeat1, 2), SHIFT_REPEAT(32),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_literal, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_literal, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_literal, 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_literal, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decimal_literal_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decimal_literal_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_literal_repeat1, 2), SHIFT_REPEAT(128),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decimal_literal_repeat1, 2), SHIFT_REPEAT(35),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_literal, 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_literal, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_octal_literal_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_octal_literal_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_octal_literal_repeat1, 2), SHIFT_REPEAT(131),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_octal_literal_repeat1, 2), SHIFT_REPEAT(40),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal_literal, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal_literal, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal_literal, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal_literal, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_expression, 3, .production_id = 6),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_expression, 3, .production_id = 6),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 3, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 3, .production_id = 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, .production_id = 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_expression, 4, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_expression, 4, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_single_quoted_string_literall, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_single_quoted_string_literall, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional_expression, 5, .production_id = 12),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uint_literal, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uint_literal, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2, .production_id = 4),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string_literal, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string_literal, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_double_quote_string_literal, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_double_quote_string_literal, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_expression, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_expression, 2),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string_literal, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string_literal, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_call_expression, 4, .production_id = 11),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_call_expression, 4, .production_id = 11),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quote_string_literal, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quote_string_literal, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string_literal, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string_literal, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_double_quote_string_literal, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_double_quote_string_literal, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_triple_single_quoted_string_literall, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_triple_single_quoted_string_literall, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index_expression, 4, .production_id = 10),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index_expression, 4, .production_id = 10),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_expression, 5),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_expression, 5),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expressions_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_initializer, 3, .production_id = 8),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3, .production_id = 8),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(96),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_triple_double_quote_string_literal_repeat1, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(96),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quote_string_literal_repeat1, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(99),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_double_quote_string_literal_repeat1, 2), SHIFT_REPEAT(99),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_literal_repeat1, 2),
  [446] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_literal_repeat1, 2), SHIFT_REPEAT(100),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_triple_single_quoted_string_literall_repeat1, 2), SHIFT_REPEAT(101),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_triple_single_quoted_string_literall_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_triple_single_quoted_string_literall_repeat1, 2), SHIFT_REPEAT(101),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expressions_repeat1, 2), SHIFT_REPEAT(14),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_map_expression_repeat1, 2), SHIFT_REPEAT(9),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_map_expression_repeat1, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_fields_repeat1, 2), SHIFT_REPEAT(120),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_fields_repeat1, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_fields, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_fields, 3),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_fields, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [550] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
