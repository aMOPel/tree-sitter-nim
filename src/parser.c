#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym_identifier = 1,
  aux_sym_module_token1 = 2,
  anon_sym_BQUOTE = 3,
  aux_sym_ticked_identifier_token1 = 4,
  anon_sym_BQUOTE2 = 5,
  aux_sym_int_lit_token1 = 6,
  aux_sym_int_lit_token2 = 7,
  aux_sym_int_lit_token3 = 8,
  aux_sym_int_lit_token4 = 9,
  aux_sym_float_lit_token1 = 10,
  sym_int_suffix = 11,
  sym_float_suffix = 12,
  sym_custom_numeric_lit_suffix = 13,
  sym_exponent = 14,
  anon_sym_SQUOTE = 15,
  aux_sym_char_lit_token1 = 16,
  anon_sym_SQUOTE2 = 17,
  sym_char_esc_seq = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_string_lit_token1 = 20,
  anon_sym_DQUOTE2 = 21,
  sym_str_esc_seq = 22,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 23,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 24,
  aux_sym_raw_string_lit_token1 = 25,
  anon_sym_r = 26,
  anon_sym_R = 27,
  sym_regex_string_prefix = 28,
  anon_sym_AMP = 29,
  anon_sym_fmt = 30,
  aux_sym_interpolated_string_lit_token1 = 31,
  aux_sym_interpolated_string_lit_token2 = 32,
  anon_sym_LBRACE = 33,
  anon_sym_ = 34,
  anon_sym_RBRACE = 35,
  sym_nil_lit = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  sym__newline = 39,
  sym__indent = 40,
  sym__samedent = 41,
  sym__dedent = 42,
  sym__multi_string_content = 43,
  sym__interpolation_start = 44,
  sym__multi_string_end = 45,
  sym_module = 46,
  sym_expr = 47,
  sym_symbol = 48,
  sym_ticked_identifier = 49,
  sym_literal = 50,
  sym_int_lit = 51,
  sym_float_lit = 52,
  sym_char_lit = 53,
  sym_string_lit = 54,
  sym_multi_string_lit = 55,
  sym_raw_string_lit = 56,
  sym_raw_string_prefix = 57,
  sym_generalized_string_prefix = 58,
  sym_interpolated_string_lit = 59,
  sym_string_interpolation = 60,
  sym_interpolated_multi_string_lit = 61,
  sym_multi_string_interpolation = 62,
  sym_bool_lit = 63,
  aux_sym_module_repeat1 = 64,
  aux_sym_string_lit_repeat1 = 65,
  aux_sym_multi_string_lit_repeat1 = 66,
  aux_sym_interpolated_string_lit_repeat1 = 67,
  aux_sym_interpolated_string_lit_repeat2 = 68,
  aux_sym_string_interpolation_repeat1 = 69,
  aux_sym_interpolated_multi_string_lit_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_module_token1] = "module_token1",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_ticked_identifier_token1] = "ticked_identifier_token1",
  [anon_sym_BQUOTE2] = "`",
  [aux_sym_int_lit_token1] = "int_lit_token1",
  [aux_sym_int_lit_token2] = "int_lit_token2",
  [aux_sym_int_lit_token3] = "int_lit_token3",
  [aux_sym_int_lit_token4] = "int_lit_token4",
  [aux_sym_float_lit_token1] = "float_lit_token1",
  [sym_int_suffix] = "int_suffix",
  [sym_float_suffix] = "float_suffix",
  [sym_custom_numeric_lit_suffix] = "custom_numeric_lit_suffix",
  [sym_exponent] = "exponent",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_lit_token1] = "char_lit_token1",
  [anon_sym_SQUOTE2] = "'",
  [sym_char_esc_seq] = "char_esc_seq",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_lit_token1] = "string_lit_token1",
  [anon_sym_DQUOTE2] = "\"",
  [sym_str_esc_seq] = "str_esc_seq",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = "\"\"\"",
  [aux_sym_raw_string_lit_token1] = "raw_string_lit_token1",
  [anon_sym_r] = "r",
  [anon_sym_R] = "R",
  [sym_regex_string_prefix] = "regex_string_prefix",
  [anon_sym_AMP] = "interpolated_string_prefix",
  [anon_sym_fmt] = "interpolated_string_prefix",
  [aux_sym_interpolated_string_lit_token1] = "interpolated_string_lit_token1",
  [aux_sym_interpolated_string_lit_token2] = "interpolated_string_lit_token2",
  [anon_sym_LBRACE] = "{",
  [anon_sym_] = " ",
  [anon_sym_RBRACE] = "}",
  [sym_nil_lit] = "nil_lit",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__samedent] = "_samedent",
  [sym__dedent] = "_dedent",
  [sym__multi_string_content] = "_multi_string_content",
  [sym__interpolation_start] = "{",
  [sym__multi_string_end] = "\"\"\"",
  [sym_module] = "module",
  [sym_expr] = "expr",
  [sym_symbol] = "symbol",
  [sym_ticked_identifier] = "ticked_identifier",
  [sym_literal] = "literal",
  [sym_int_lit] = "int_lit",
  [sym_float_lit] = "float_lit",
  [sym_char_lit] = "char_lit",
  [sym_string_lit] = "string_lit",
  [sym_multi_string_lit] = "multi_string_lit",
  [sym_raw_string_lit] = "raw_string_lit",
  [sym_raw_string_prefix] = "raw_string_prefix",
  [sym_generalized_string_prefix] = "generalized_string_prefix",
  [sym_interpolated_string_lit] = "interpolated_string_lit",
  [sym_string_interpolation] = "string_interpolation",
  [sym_interpolated_multi_string_lit] = "interpolated_multi_string_lit",
  [sym_multi_string_interpolation] = "multi_string_interpolation",
  [sym_bool_lit] = "bool_lit",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_string_lit_repeat1] = "string_lit_repeat1",
  [aux_sym_multi_string_lit_repeat1] = "multi_string_lit_repeat1",
  [aux_sym_interpolated_string_lit_repeat1] = "interpolated_string_lit_repeat1",
  [aux_sym_interpolated_string_lit_repeat2] = "interpolated_string_lit_repeat2",
  [aux_sym_string_interpolation_repeat1] = "string_interpolation_repeat1",
  [aux_sym_interpolated_multi_string_lit_repeat1] = "interpolated_multi_string_lit_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_module_token1] = aux_sym_module_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_ticked_identifier_token1] = aux_sym_ticked_identifier_token1,
  [anon_sym_BQUOTE2] = anon_sym_BQUOTE,
  [aux_sym_int_lit_token1] = aux_sym_int_lit_token1,
  [aux_sym_int_lit_token2] = aux_sym_int_lit_token2,
  [aux_sym_int_lit_token3] = aux_sym_int_lit_token3,
  [aux_sym_int_lit_token4] = aux_sym_int_lit_token4,
  [aux_sym_float_lit_token1] = aux_sym_float_lit_token1,
  [sym_int_suffix] = sym_int_suffix,
  [sym_float_suffix] = sym_float_suffix,
  [sym_custom_numeric_lit_suffix] = sym_custom_numeric_lit_suffix,
  [sym_exponent] = sym_exponent,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_lit_token1] = aux_sym_char_lit_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym_char_esc_seq] = sym_char_esc_seq,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_lit_token1] = aux_sym_string_lit_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_str_esc_seq] = sym_str_esc_seq,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_raw_string_lit_token1] = aux_sym_raw_string_lit_token1,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_R] = anon_sym_R,
  [sym_regex_string_prefix] = sym_regex_string_prefix,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_fmt] = anon_sym_AMP,
  [aux_sym_interpolated_string_lit_token1] = aux_sym_interpolated_string_lit_token1,
  [aux_sym_interpolated_string_lit_token2] = aux_sym_interpolated_string_lit_token2,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_] = anon_sym_,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_nil_lit] = sym_nil_lit,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__samedent] = sym__samedent,
  [sym__dedent] = sym__dedent,
  [sym__multi_string_content] = sym__multi_string_content,
  [sym__interpolation_start] = anon_sym_LBRACE,
  [sym__multi_string_end] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_module] = sym_module,
  [sym_expr] = sym_expr,
  [sym_symbol] = sym_symbol,
  [sym_ticked_identifier] = sym_ticked_identifier,
  [sym_literal] = sym_literal,
  [sym_int_lit] = sym_int_lit,
  [sym_float_lit] = sym_float_lit,
  [sym_char_lit] = sym_char_lit,
  [sym_string_lit] = sym_string_lit,
  [sym_multi_string_lit] = sym_multi_string_lit,
  [sym_raw_string_lit] = sym_raw_string_lit,
  [sym_raw_string_prefix] = sym_raw_string_prefix,
  [sym_generalized_string_prefix] = sym_generalized_string_prefix,
  [sym_interpolated_string_lit] = sym_interpolated_string_lit,
  [sym_string_interpolation] = sym_string_interpolation,
  [sym_interpolated_multi_string_lit] = sym_interpolated_multi_string_lit,
  [sym_multi_string_interpolation] = sym_multi_string_interpolation,
  [sym_bool_lit] = sym_bool_lit,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_string_lit_repeat1] = aux_sym_string_lit_repeat1,
  [aux_sym_multi_string_lit_repeat1] = aux_sym_multi_string_lit_repeat1,
  [aux_sym_interpolated_string_lit_repeat1] = aux_sym_interpolated_string_lit_repeat1,
  [aux_sym_interpolated_string_lit_repeat2] = aux_sym_interpolated_string_lit_repeat2,
  [aux_sym_string_interpolation_repeat1] = aux_sym_string_interpolation_repeat1,
  [aux_sym_interpolated_multi_string_lit_repeat1] = aux_sym_interpolated_multi_string_lit_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ticked_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_lit_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_lit_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_int_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_float_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_numeric_lit_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_exponent] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_char_esc_seq] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_str_esc_seq] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R] = {
    .visible = true,
    .named = false,
  },
  [sym_regex_string_prefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_fmt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_interpolated_string_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_lit_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_nil_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__samedent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__interpolation_start] = {
    .visible = true,
    .named = false,
  },
  [sym__multi_string_end] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_ticked_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_char_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_generalized_string_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolated_multi_string_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_string_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_lit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multi_string_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_string_lit_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_interpolation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpolated_multi_string_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_close = 1,
  field_open = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_open] = "open",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close, 1},
    {field_open, 0},
  [2] =
    {field_close, 2},
    {field_open, 0},
  [4] =
    {field_close, 2},
    {field_open, 1},
  [6] =
    {field_close, 3},
    {field_open, 1},
  [8] =
    {field_close, 4},
    {field_open, 1},
  [10] =
    {field_close, 3},
    {field_open, 0},
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 16,
  [25] = 15,
  [26] = 18,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 19,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 34,
  [39] = 20,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 37,
  [48] = 44,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 31,
  [53] = 29,
  [54] = 49,
  [55] = 46,
  [56] = 56,
  [57] = 50,
  [58] = 36,
  [59] = 43,
  [60] = 60,
  [61] = 45,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 65,
  [71] = 71,
  [72] = 72,
  [73] = 68,
  [74] = 67,
  [75] = 66,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
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
  [98] = 77,
  [99] = 99,
  [100] = 100,
  [101] = 78,
  [102] = 89,
  [103] = 103,
  [104] = 79,
  [105] = 88,
  [106] = 106,
  [107] = 87,
  [108] = 108,
  [109] = 100,
  [110] = 90,
  [111] = 92,
  [112] = 86,
  [113] = 103,
  [114] = 82,
  [115] = 85,
  [116] = 84,
  [117] = 63,
  [118] = 94,
  [119] = 96,
  [120] = 95,
  [121] = 64,
  [122] = 93,
  [123] = 91,
};

static inline bool sym_char_esc_seq_character_set_1(int32_t c) {
  return (c < 'e'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'c')))
    : (c <= 'f' || (c < 'r'
      ? (c < 'n'
        ? c == 'l'
        : c <= 'n')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static inline bool sym_char_esc_seq_character_set_2(int32_t c) {
  return (c < 'l'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c < 'e'
        ? (c >= 'a' && c <= 'c')
        : c <= 'f')))
    : (c <= 'l' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static inline bool sym_str_esc_seq_character_set_1(int32_t c) {
  return (c < 'l'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c < 'e'
        ? (c >= 'a' && c <= 'c')
        : c <= 'f')))
    : (c <= 'l' || (c < 'r'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'p')
      : (c <= 'r' || (c >= 't' && c <= 'v')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '`') ADVANCE(47);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(82);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(91);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(60);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == '6') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (sym_char_esc_seq_character_set_1(lookahead)) ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == '{') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == '}') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '&') ADVANCE(93);
      if (lookahead == '\'') ADVANCE(73);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '`') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_module_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_ticked_identifier_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BQUOTE2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_int_lit_token2);
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_int_lit_token2);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_int_lit_token3);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_int_lit_token4);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_float_lit_token1);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_int_suffix);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_int_suffix);
      if (lookahead == '1') ADVANCE(19);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_int_suffix);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '3') ADVANCE(66);
      if (lookahead == '6') ADVANCE(68);
      if (lookahead == '8') ADVANCE(59);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_int_suffix);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float_suffix);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float_suffix);
      if (lookahead == '3') ADVANCE(15);
      if (lookahead == '6') ADVANCE(17);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_float_suffix);
      if (lookahead == '3') ADVANCE(65);
      if (lookahead == '6') ADVANCE(67);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_float_suffix);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_custom_numeric_lit_suffix);
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '3') ADVANCE(66);
      if (lookahead == '6') ADVANCE(68);
      if (lookahead == '8') ADVANCE(59);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_custom_numeric_lit_suffix);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_custom_numeric_lit_suffix);
      if (lookahead == '2') ADVANCE(59);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_custom_numeric_lit_suffix);
      if (lookahead == '4') ADVANCE(63);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_custom_numeric_lit_suffix);
      if (lookahead == '4') ADVANCE(59);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_custom_numeric_lit_suffix);
      if (lookahead == '6') ADVANCE(59);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_custom_numeric_lit_suffix);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_exponent);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(49);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_exponent);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_char_lit_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_char_lit_token1);
      if (lookahead == 'x') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (sym_char_esc_seq_character_set_2(lookahead)) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_char_esc_seq);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_char_esc_seq);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_char_esc_seq);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_lit_token1);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (sym_str_esc_seq_character_set_1(lookahead)) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_str_esc_seq);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_str_esc_seq);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_str_esc_seq);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_raw_string_lit_token1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_interpolated_string_lit_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_interpolated_string_lit_token2);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'R') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_R);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_regex_string_prefix);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_regex_string_prefix);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_fmt);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_nil_lit);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 3},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0, .external_lex_state = 3},
  [51] = {.lex_state = 0, .external_lex_state = 3},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0, .external_lex_state = 3},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 3},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 46},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__samedent = 2,
  ts_external_token__dedent = 3,
  ts_external_token__multi_string_content = 4,
  ts_external_token__interpolation_start = 5,
  ts_external_token__multi_string_end = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__samedent] = sym__samedent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__multi_string_content] = sym__multi_string_content,
  [ts_external_token__interpolation_start] = sym__interpolation_start,
  [ts_external_token__multi_string_end] = sym__multi_string_end,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__samedent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__multi_string_content] = true,
    [ts_external_token__interpolation_start] = true,
    [ts_external_token__multi_string_end] = true,
  },
  [2] = {
    [ts_external_token__multi_string_content] = true,
    [ts_external_token__interpolation_start] = true,
    [ts_external_token__multi_string_end] = true,
  },
  [3] = {
    [ts_external_token__multi_string_content] = true,
    [ts_external_token__multi_string_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [aux_sym_int_lit_token1] = ACTIONS(1),
    [aux_sym_int_lit_token2] = ACTIONS(1),
    [aux_sym_int_lit_token3] = ACTIONS(1),
    [aux_sym_int_lit_token4] = ACTIONS(1),
    [aux_sym_float_lit_token1] = ACTIONS(1),
    [sym_exponent] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym_char_esc_seq] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_str_esc_seq] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_R] = ACTIONS(1),
    [sym_regex_string_prefix] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_fmt] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_nil_lit] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__samedent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__multi_string_content] = ACTIONS(1),
    [sym__interpolation_start] = ACTIONS(1),
    [sym__multi_string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(99),
    [sym_symbol] = STATE(80),
    [sym_ticked_identifier] = STATE(27),
    [sym_literal] = STATE(106),
    [sym_int_lit] = STATE(98),
    [sym_float_lit] = STATE(98),
    [sym_char_lit] = STATE(98),
    [sym_string_lit] = STATE(98),
    [sym_multi_string_lit] = STATE(98),
    [sym_raw_string_lit] = STATE(98),
    [sym_raw_string_prefix] = STATE(73),
    [sym_generalized_string_prefix] = STATE(73),
    [sym_interpolated_string_lit] = STATE(98),
    [sym_interpolated_multi_string_lit] = STATE(98),
    [sym_bool_lit] = STATE(98),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_BQUOTE] = ACTIONS(7),
    [aux_sym_int_lit_token1] = ACTIONS(9),
    [aux_sym_int_lit_token2] = ACTIONS(11),
    [aux_sym_int_lit_token3] = ACTIONS(9),
    [aux_sym_int_lit_token4] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(17),
    [anon_sym_r] = ACTIONS(19),
    [anon_sym_R] = ACTIONS(19),
    [sym_regex_string_prefix] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [anon_sym_fmt] = ACTIONS(25),
    [sym_nil_lit] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_BQUOTE,
    ACTIONS(11), 1,
      aux_sym_int_lit_token2,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    ACTIONS(21), 1,
      sym_regex_string_prefix,
    ACTIONS(23), 1,
      anon_sym_AMP,
    ACTIONS(25), 1,
      anon_sym_fmt,
    ACTIONS(27), 1,
      sym_nil_lit,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_module_repeat1,
    STATE(27), 1,
      sym_ticked_identifier,
    STATE(80), 1,
      sym_symbol,
    STATE(106), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_r,
      anon_sym_R,
    ACTIONS(29), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym_raw_string_prefix,
      sym_generalized_string_prefix,
    ACTIONS(9), 3,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
    STATE(98), 9,
      sym_int_lit,
      sym_float_lit,
      sym_char_lit,
      sym_string_lit,
      sym_multi_string_lit,
      sym_raw_string_lit,
      sym_interpolated_string_lit,
      sym_interpolated_multi_string_lit,
      sym_bool_lit,
  [74] = 20,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_BQUOTE,
    ACTIONS(44), 1,
      aux_sym_int_lit_token2,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    ACTIONS(59), 1,
      sym_regex_string_prefix,
    ACTIONS(62), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_fmt,
    ACTIONS(68), 1,
      sym_nil_lit,
    STATE(3), 1,
      aux_sym_module_repeat1,
    STATE(27), 1,
      sym_ticked_identifier,
    STATE(80), 1,
      sym_symbol,
    STATE(106), 1,
      sym_literal,
    ACTIONS(56), 2,
      anon_sym_r,
      anon_sym_R,
    ACTIONS(71), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 2,
      sym_raw_string_prefix,
      sym_generalized_string_prefix,
    ACTIONS(41), 3,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
    STATE(98), 9,
      sym_int_lit,
      sym_float_lit,
      sym_char_lit,
      sym_string_lit,
      sym_multi_string_lit,
      sym_raw_string_lit,
      sym_interpolated_string_lit,
      sym_interpolated_multi_string_lit,
      sym_bool_lit,
  [148] = 19,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_BQUOTE,
    ACTIONS(76), 1,
      aux_sym_int_lit_token2,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    ACTIONS(84), 1,
      sym_regex_string_prefix,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_fmt,
    ACTIONS(90), 1,
      sym_nil_lit,
    STATE(27), 1,
      sym_ticked_identifier,
    STATE(32), 1,
      sym_symbol,
    STATE(61), 1,
      sym_expr,
    STATE(69), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_r,
      anon_sym_R,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_raw_string_prefix,
      sym_generalized_string_prefix,
    ACTIONS(74), 3,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
    STATE(77), 9,
      sym_int_lit,
      sym_float_lit,
      sym_char_lit,
      sym_string_lit,
      sym_multi_string_lit,
      sym_raw_string_lit,
      sym_interpolated_string_lit,
      sym_interpolated_multi_string_lit,
      sym_bool_lit,
  [219] = 19,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_BQUOTE,
    ACTIONS(76), 1,
      aux_sym_int_lit_token2,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    ACTIONS(84), 1,
      sym_regex_string_prefix,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_fmt,
    ACTIONS(90), 1,
      sym_nil_lit,
    STATE(27), 1,
      sym_ticked_identifier,
    STATE(32), 1,
      sym_symbol,
    STATE(45), 1,
      sym_expr,
    STATE(69), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_r,
      anon_sym_R,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_raw_string_prefix,
      sym_generalized_string_prefix,
    ACTIONS(74), 3,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
    STATE(77), 9,
      sym_int_lit,
      sym_float_lit,
      sym_char_lit,
      sym_string_lit,
      sym_multi_string_lit,
      sym_raw_string_lit,
      sym_interpolated_string_lit,
      sym_interpolated_multi_string_lit,
      sym_bool_lit,
  [290] = 19,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_BQUOTE,
    ACTIONS(76), 1,
      aux_sym_int_lit_token2,
    ACTIONS(78), 1,
      anon_sym_SQUOTE,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    ACTIONS(84), 1,
      sym_regex_string_prefix,
    ACTIONS(86), 1,
      anon_sym_AMP,
    ACTIONS(88), 1,
      anon_sym_fmt,
    ACTIONS(90), 1,
      sym_nil_lit,
    STATE(27), 1,
      sym_ticked_identifier,
    STATE(32), 1,
      sym_symbol,
    STATE(41), 1,
      sym_expr,
    STATE(69), 1,
      sym_literal,
    ACTIONS(19), 2,
      anon_sym_r,
      anon_sym_R,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(68), 2,
      sym_raw_string_prefix,
      sym_generalized_string_prefix,
    ACTIONS(74), 3,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
    STATE(77), 9,
      sym_int_lit,
      sym_float_lit,
      sym_char_lit,
      sym_string_lit,
      sym_multi_string_lit,
      sym_raw_string_lit,
      sym_interpolated_string_lit,
      sym_interpolated_multi_string_lit,
      sym_bool_lit,
  [361] = 2,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
      sym_regex_string_prefix,
      anon_sym_AMP,
    ACTIONS(94), 9,
      sym_identifier,
      aux_sym_int_lit_token2,
      anon_sym_DQUOTE,
      anon_sym_r,
      anon_sym_R,
      anon_sym_fmt,
      sym_nil_lit,
      anon_sym_true,
      anon_sym_false,
  [384] = 4,
    ACTIONS(96), 1,
      aux_sym_float_lit_token1,
    ACTIONS(100), 1,
      sym_exponent,
    ACTIONS(102), 2,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(98), 3,
      sym_int_suffix,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
  [400] = 4,
    ACTIONS(102), 1,
      aux_sym_module_token1,
    ACTIONS(104), 1,
      aux_sym_float_lit_token1,
    ACTIONS(108), 1,
      sym_exponent,
    ACTIONS(106), 3,
      sym_int_suffix,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
  [415] = 5,
    ACTIONS(110), 1,
      aux_sym_string_lit_token1,
    ACTIONS(112), 1,
      anon_sym_DQUOTE2,
    ACTIONS(114), 1,
      sym_str_esc_seq,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    STATE(14), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat1,
  [432] = 5,
    ACTIONS(110), 1,
      aux_sym_string_lit_token1,
    ACTIONS(114), 1,
      sym_str_esc_seq,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(118), 1,
      anon_sym_DQUOTE2,
    STATE(14), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat1,
  [449] = 5,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      aux_sym_string_lit_token1,
    ACTIONS(122), 1,
      anon_sym_DQUOTE2,
    ACTIONS(124), 1,
      sym_str_esc_seq,
    STATE(10), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat1,
  [466] = 5,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
    ACTIONS(126), 1,
      aux_sym_string_lit_token1,
    ACTIONS(128), 1,
      anon_sym_DQUOTE2,
    ACTIONS(130), 1,
      sym_str_esc_seq,
    STATE(11), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat1,
  [483] = 5,
    ACTIONS(132), 1,
      aux_sym_string_lit_token1,
    ACTIONS(135), 1,
      anon_sym_DQUOTE2,
    ACTIONS(137), 1,
      sym_str_esc_seq,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(14), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat1,
  [500] = 4,
    ACTIONS(143), 1,
      sym__multi_string_content,
    ACTIONS(145), 1,
      sym__interpolation_start,
    ACTIONS(147), 1,
      sym__multi_string_end,
    STATE(17), 2,
      sym_multi_string_interpolation,
      aux_sym_interpolated_multi_string_lit_repeat1,
  [514] = 4,
    ACTIONS(149), 1,
      anon_sym_DQUOTE2,
    ACTIONS(151), 1,
      aux_sym_interpolated_string_lit_token2,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    STATE(18), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat2,
  [528] = 4,
    ACTIONS(155), 1,
      sym__multi_string_content,
    ACTIONS(158), 1,
      sym__interpolation_start,
    ACTIONS(161), 1,
      sym__multi_string_end,
    STATE(17), 2,
      sym_multi_string_interpolation,
      aux_sym_interpolated_multi_string_lit_repeat1,
  [542] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_DQUOTE2,
    ACTIONS(165), 1,
      aux_sym_interpolated_string_lit_token2,
    STATE(23), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat2,
  [556] = 3,
    ACTIONS(169), 1,
      sym_exponent,
    ACTIONS(167), 2,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
    ACTIONS(171), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [568] = 2,
    ACTIONS(102), 2,
      anon_sym_,
      anon_sym_RBRACE,
    ACTIONS(98), 3,
      sym_int_suffix,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
  [578] = 4,
    ACTIONS(145), 1,
      sym__interpolation_start,
    ACTIONS(173), 1,
      sym__multi_string_content,
    ACTIONS(175), 1,
      sym__multi_string_end,
    STATE(15), 2,
      sym_multi_string_interpolation,
      aux_sym_interpolated_multi_string_lit_repeat1,
  [592] = 4,
    ACTIONS(145), 1,
      sym__interpolation_start,
    ACTIONS(177), 1,
      sym__multi_string_content,
    ACTIONS(179), 1,
      sym__multi_string_end,
    STATE(25), 2,
      sym_multi_string_interpolation,
      aux_sym_interpolated_multi_string_lit_repeat1,
  [606] = 4,
    ACTIONS(181), 1,
      anon_sym_DQUOTE2,
    ACTIONS(183), 1,
      aux_sym_interpolated_string_lit_token2,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(23), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat2,
  [620] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_DQUOTE2,
    ACTIONS(191), 1,
      aux_sym_interpolated_string_lit_token2,
    STATE(26), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat2,
  [634] = 4,
    ACTIONS(143), 1,
      sym__multi_string_content,
    ACTIONS(145), 1,
      sym__interpolation_start,
    ACTIONS(193), 1,
      sym__multi_string_end,
    STATE(17), 2,
      sym_multi_string_interpolation,
      aux_sym_interpolated_multi_string_lit_repeat1,
  [648] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      aux_sym_interpolated_string_lit_token2,
    ACTIONS(195), 1,
      anon_sym_DQUOTE2,
    STATE(23), 2,
      sym_string_interpolation,
      aux_sym_interpolated_string_lit_repeat2,
  [662] = 2,
    ACTIONS(197), 1,
      anon_sym_DQUOTE2,
    ACTIONS(199), 3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_,
      anon_sym_RBRACE,
  [671] = 4,
    ACTIONS(201), 1,
      aux_sym_string_lit_token1,
    ACTIONS(203), 1,
      anon_sym_DQUOTE2,
    ACTIONS(205), 1,
      sym_str_esc_seq,
    STATE(40), 1,
      aux_sym_string_lit_repeat1,
  [684] = 2,
    ACTIONS(207), 1,
      aux_sym_string_lit_token1,
    ACTIONS(209), 3,
      anon_sym_DQUOTE2,
      sym_str_esc_seq,
      anon_sym_LBRACE,
  [693] = 4,
    ACTIONS(201), 1,
      aux_sym_string_lit_token1,
    ACTIONS(205), 1,
      sym_str_esc_seq,
    ACTIONS(211), 1,
      anon_sym_DQUOTE2,
    STATE(40), 1,
      aux_sym_string_lit_repeat1,
  [706] = 2,
    ACTIONS(213), 1,
      aux_sym_string_lit_token1,
    ACTIONS(215), 3,
      anon_sym_DQUOTE2,
      sym_str_esc_seq,
      anon_sym_LBRACE,
  [715] = 3,
    ACTIONS(217), 1,
      anon_sym_DQUOTE2,
    ACTIONS(219), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(221), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [726] = 3,
    ACTIONS(171), 1,
      aux_sym_module_token1,
    ACTIONS(225), 1,
      sym_exponent,
    ACTIONS(223), 2,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
  [737] = 4,
    ACTIONS(227), 1,
      aux_sym_string_lit_token1,
    ACTIONS(229), 1,
      anon_sym_DQUOTE2,
    ACTIONS(231), 1,
      sym_str_esc_seq,
    STATE(30), 1,
      aux_sym_string_lit_repeat1,
  [750] = 2,
    ACTIONS(233), 1,
      anon_sym_DQUOTE2,
    ACTIONS(235), 3,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_,
      anon_sym_RBRACE,
  [759] = 2,
    ACTIONS(167), 2,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
    ACTIONS(171), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [768] = 2,
    ACTIONS(237), 2,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
    ACTIONS(239), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [777] = 4,
    ACTIONS(241), 1,
      aux_sym_string_lit_token1,
    ACTIONS(243), 1,
      anon_sym_DQUOTE2,
    ACTIONS(245), 1,
      sym_str_esc_seq,
    STATE(28), 1,
      aux_sym_string_lit_repeat1,
  [790] = 2,
    ACTIONS(102), 1,
      aux_sym_module_token1,
    ACTIONS(106), 3,
      sym_int_suffix,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
  [799] = 4,
    ACTIONS(247), 1,
      aux_sym_string_lit_token1,
    ACTIONS(250), 1,
      anon_sym_DQUOTE2,
    ACTIONS(252), 1,
      sym_str_esc_seq,
    STATE(40), 1,
      aux_sym_string_lit_repeat1,
  [812] = 3,
    ACTIONS(255), 1,
      anon_sym_,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_string_interpolation_repeat1,
  [822] = 3,
    ACTIONS(259), 1,
      anon_sym_,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_string_interpolation_repeat1,
  [832] = 3,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_string_interpolation_repeat1,
  [842] = 3,
    ACTIONS(268), 1,
      sym__multi_string_content,
    ACTIONS(270), 1,
      sym__multi_string_end,
    STATE(55), 1,
      aux_sym_multi_string_lit_repeat1,
  [852] = 3,
    ACTIONS(272), 1,
      anon_sym_,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      aux_sym_string_interpolation_repeat1,
  [862] = 3,
    ACTIONS(276), 1,
      sym__multi_string_content,
    ACTIONS(278), 1,
      sym__multi_string_end,
    STATE(51), 1,
      aux_sym_multi_string_lit_repeat1,
  [872] = 2,
    ACTIONS(239), 1,
      aux_sym_module_token1,
    ACTIONS(280), 2,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
  [880] = 3,
    ACTIONS(282), 1,
      sym__multi_string_content,
    ACTIONS(284), 1,
      sym__multi_string_end,
    STATE(46), 1,
      aux_sym_multi_string_lit_repeat1,
  [890] = 3,
    ACTIONS(276), 1,
      sym__multi_string_content,
    ACTIONS(286), 1,
      sym__multi_string_end,
    STATE(51), 1,
      aux_sym_multi_string_lit_repeat1,
  [900] = 3,
    ACTIONS(288), 1,
      sym__multi_string_content,
    ACTIONS(290), 1,
      sym__multi_string_end,
    STATE(49), 1,
      aux_sym_multi_string_lit_repeat1,
  [910] = 3,
    ACTIONS(292), 1,
      sym__multi_string_content,
    ACTIONS(295), 1,
      sym__multi_string_end,
    STATE(51), 1,
      aux_sym_multi_string_lit_repeat1,
  [920] = 2,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 2,
      anon_sym_DQUOTE2,
      aux_sym_interpolated_string_lit_token2,
  [928] = 2,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 2,
      anon_sym_DQUOTE2,
      aux_sym_interpolated_string_lit_token2,
  [936] = 3,
    ACTIONS(276), 1,
      sym__multi_string_content,
    ACTIONS(297), 1,
      sym__multi_string_end,
    STATE(51), 1,
      aux_sym_multi_string_lit_repeat1,
  [946] = 3,
    ACTIONS(276), 1,
      sym__multi_string_content,
    ACTIONS(299), 1,
      sym__multi_string_end,
    STATE(51), 1,
      aux_sym_multi_string_lit_repeat1,
  [956] = 1,
    ACTIONS(301), 3,
      sym__multi_string_content,
      sym__interpolation_start,
      sym__multi_string_end,
  [962] = 3,
    ACTIONS(303), 1,
      sym__multi_string_content,
    ACTIONS(305), 1,
      sym__multi_string_end,
    STATE(54), 1,
      aux_sym_multi_string_lit_repeat1,
  [972] = 2,
    ACTIONS(171), 1,
      aux_sym_module_token1,
    ACTIONS(223), 2,
      sym_float_suffix,
      sym_custom_numeric_lit_suffix,
  [980] = 3,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_string_interpolation_repeat1,
  [990] = 1,
    ACTIONS(309), 3,
      sym__multi_string_content,
      sym__interpolation_start,
      sym__multi_string_end,
  [996] = 3,
    ACTIONS(311), 1,
      anon_sym_,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_string_interpolation_repeat1,
  [1006] = 3,
    ACTIONS(264), 1,
      anon_sym_,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(42), 1,
      aux_sym_string_interpolation_repeat1,
  [1016] = 1,
    ACTIONS(317), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1021] = 1,
    ACTIONS(319), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1026] = 2,
    ACTIONS(321), 1,
      aux_sym_char_lit_token1,
    ACTIONS(323), 1,
      sym_char_esc_seq,
  [1033] = 2,
    ACTIONS(325), 1,
      anon_sym_DQUOTE2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1040] = 2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
  [1047] = 2,
    ACTIONS(331), 1,
      anon_sym_DQUOTE2,
    ACTIONS(333), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1054] = 1,
    ACTIONS(221), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1059] = 2,
    ACTIONS(335), 1,
      aux_sym_char_lit_token1,
    ACTIONS(337), 1,
      sym_char_esc_seq,
  [1066] = 2,
    ACTIONS(122), 1,
      anon_sym_DQUOTE2,
    ACTIONS(339), 1,
      aux_sym_interpolated_string_lit_token1,
  [1073] = 2,
    ACTIONS(341), 1,
      anon_sym_DQUOTE2,
    ACTIONS(343), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1080] = 2,
    ACTIONS(345), 1,
      anon_sym_DQUOTE2,
    ACTIONS(347), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1087] = 2,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
  [1094] = 2,
    ACTIONS(351), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(353), 1,
      anon_sym_DQUOTE2,
  [1101] = 2,
    ACTIONS(128), 1,
      anon_sym_DQUOTE2,
    ACTIONS(355), 1,
      aux_sym_interpolated_string_lit_token1,
  [1108] = 1,
    ACTIONS(357), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1113] = 1,
    ACTIONS(359), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1118] = 1,
    ACTIONS(361), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1123] = 2,
    ACTIONS(217), 1,
      anon_sym_DQUOTE2,
    ACTIONS(219), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [1130] = 2,
    ACTIONS(363), 1,
      anon_sym_DQUOTE2,
    ACTIONS(365), 1,
      aux_sym_raw_string_lit_token1,
  [1137] = 1,
    ACTIONS(367), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1142] = 2,
    ACTIONS(369), 1,
      anon_sym_DQUOTE2,
    ACTIONS(371), 1,
      aux_sym_raw_string_lit_token1,
  [1149] = 1,
    ACTIONS(239), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1154] = 1,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1159] = 1,
    ACTIONS(375), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1164] = 1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1169] = 1,
    ACTIONS(379), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1174] = 1,
    ACTIONS(381), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1179] = 1,
    ACTIONS(383), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1184] = 1,
    ACTIONS(385), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1189] = 1,
    ACTIONS(387), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1194] = 1,
    ACTIONS(389), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1199] = 1,
    ACTIONS(391), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1204] = 1,
    ACTIONS(393), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1209] = 1,
    ACTIONS(395), 2,
      anon_sym_,
      anon_sym_RBRACE,
  [1214] = 1,
    ACTIONS(397), 1,
      anon_sym_BQUOTE2,
  [1218] = 1,
    ACTIONS(357), 1,
      aux_sym_module_token1,
  [1222] = 1,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
  [1226] = 1,
    ACTIONS(401), 1,
      anon_sym_DQUOTE2,
  [1230] = 1,
    ACTIONS(359), 1,
      aux_sym_module_token1,
  [1234] = 1,
    ACTIONS(381), 1,
      aux_sym_module_token1,
  [1238] = 1,
    ACTIONS(403), 1,
      anon_sym_SQUOTE2,
  [1242] = 1,
    ACTIONS(361), 1,
      aux_sym_module_token1,
  [1246] = 1,
    ACTIONS(379), 1,
      aux_sym_module_token1,
  [1250] = 1,
    ACTIONS(405), 1,
      aux_sym_module_token1,
  [1254] = 1,
    ACTIONS(377), 1,
      aux_sym_module_token1,
  [1258] = 1,
    ACTIONS(407), 1,
      aux_sym_ticked_identifier_token1,
  [1262] = 1,
    ACTIONS(409), 1,
      anon_sym_DQUOTE2,
  [1266] = 1,
    ACTIONS(383), 1,
      aux_sym_module_token1,
  [1270] = 1,
    ACTIONS(387), 1,
      aux_sym_module_token1,
  [1274] = 1,
    ACTIONS(375), 1,
      aux_sym_module_token1,
  [1278] = 1,
    ACTIONS(411), 1,
      anon_sym_SQUOTE2,
  [1282] = 1,
    ACTIONS(367), 1,
      aux_sym_module_token1,
  [1286] = 1,
    ACTIONS(373), 1,
      aux_sym_module_token1,
  [1290] = 1,
    ACTIONS(239), 1,
      aux_sym_module_token1,
  [1294] = 1,
    ACTIONS(317), 1,
      aux_sym_module_token1,
  [1298] = 1,
    ACTIONS(391), 1,
      aux_sym_module_token1,
  [1302] = 1,
    ACTIONS(395), 1,
      aux_sym_module_token1,
  [1306] = 1,
    ACTIONS(393), 1,
      aux_sym_module_token1,
  [1310] = 1,
    ACTIONS(319), 1,
      aux_sym_module_token1,
  [1314] = 1,
    ACTIONS(389), 1,
      aux_sym_module_token1,
  [1318] = 1,
    ACTIONS(385), 1,
      aux_sym_module_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 219,
  [SMALL_STATE(6)] = 290,
  [SMALL_STATE(7)] = 361,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 400,
  [SMALL_STATE(10)] = 415,
  [SMALL_STATE(11)] = 432,
  [SMALL_STATE(12)] = 449,
  [SMALL_STATE(13)] = 466,
  [SMALL_STATE(14)] = 483,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 528,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 556,
  [SMALL_STATE(20)] = 568,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 592,
  [SMALL_STATE(23)] = 606,
  [SMALL_STATE(24)] = 620,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 648,
  [SMALL_STATE(27)] = 662,
  [SMALL_STATE(28)] = 671,
  [SMALL_STATE(29)] = 684,
  [SMALL_STATE(30)] = 693,
  [SMALL_STATE(31)] = 706,
  [SMALL_STATE(32)] = 715,
  [SMALL_STATE(33)] = 726,
  [SMALL_STATE(34)] = 737,
  [SMALL_STATE(35)] = 750,
  [SMALL_STATE(36)] = 759,
  [SMALL_STATE(37)] = 768,
  [SMALL_STATE(38)] = 777,
  [SMALL_STATE(39)] = 790,
  [SMALL_STATE(40)] = 799,
  [SMALL_STATE(41)] = 812,
  [SMALL_STATE(42)] = 822,
  [SMALL_STATE(43)] = 832,
  [SMALL_STATE(44)] = 842,
  [SMALL_STATE(45)] = 852,
  [SMALL_STATE(46)] = 862,
  [SMALL_STATE(47)] = 872,
  [SMALL_STATE(48)] = 880,
  [SMALL_STATE(49)] = 890,
  [SMALL_STATE(50)] = 900,
  [SMALL_STATE(51)] = 910,
  [SMALL_STATE(52)] = 920,
  [SMALL_STATE(53)] = 928,
  [SMALL_STATE(54)] = 936,
  [SMALL_STATE(55)] = 946,
  [SMALL_STATE(56)] = 956,
  [SMALL_STATE(57)] = 962,
  [SMALL_STATE(58)] = 972,
  [SMALL_STATE(59)] = 980,
  [SMALL_STATE(60)] = 990,
  [SMALL_STATE(61)] = 996,
  [SMALL_STATE(62)] = 1006,
  [SMALL_STATE(63)] = 1016,
  [SMALL_STATE(64)] = 1021,
  [SMALL_STATE(65)] = 1026,
  [SMALL_STATE(66)] = 1033,
  [SMALL_STATE(67)] = 1040,
  [SMALL_STATE(68)] = 1047,
  [SMALL_STATE(69)] = 1054,
  [SMALL_STATE(70)] = 1059,
  [SMALL_STATE(71)] = 1066,
  [SMALL_STATE(72)] = 1073,
  [SMALL_STATE(73)] = 1080,
  [SMALL_STATE(74)] = 1087,
  [SMALL_STATE(75)] = 1094,
  [SMALL_STATE(76)] = 1101,
  [SMALL_STATE(77)] = 1108,
  [SMALL_STATE(78)] = 1113,
  [SMALL_STATE(79)] = 1118,
  [SMALL_STATE(80)] = 1123,
  [SMALL_STATE(81)] = 1130,
  [SMALL_STATE(82)] = 1137,
  [SMALL_STATE(83)] = 1142,
  [SMALL_STATE(84)] = 1149,
  [SMALL_STATE(85)] = 1154,
  [SMALL_STATE(86)] = 1159,
  [SMALL_STATE(87)] = 1164,
  [SMALL_STATE(88)] = 1169,
  [SMALL_STATE(89)] = 1174,
  [SMALL_STATE(90)] = 1179,
  [SMALL_STATE(91)] = 1184,
  [SMALL_STATE(92)] = 1189,
  [SMALL_STATE(93)] = 1194,
  [SMALL_STATE(94)] = 1199,
  [SMALL_STATE(95)] = 1204,
  [SMALL_STATE(96)] = 1209,
  [SMALL_STATE(97)] = 1214,
  [SMALL_STATE(98)] = 1218,
  [SMALL_STATE(99)] = 1222,
  [SMALL_STATE(100)] = 1226,
  [SMALL_STATE(101)] = 1230,
  [SMALL_STATE(102)] = 1234,
  [SMALL_STATE(103)] = 1238,
  [SMALL_STATE(104)] = 1242,
  [SMALL_STATE(105)] = 1246,
  [SMALL_STATE(106)] = 1250,
  [SMALL_STATE(107)] = 1254,
  [SMALL_STATE(108)] = 1258,
  [SMALL_STATE(109)] = 1262,
  [SMALL_STATE(110)] = 1266,
  [SMALL_STATE(111)] = 1270,
  [SMALL_STATE(112)] = 1274,
  [SMALL_STATE(113)] = 1278,
  [SMALL_STATE(114)] = 1282,
  [SMALL_STATE(115)] = 1286,
  [SMALL_STATE(116)] = 1290,
  [SMALL_STATE(117)] = 1294,
  [SMALL_STATE(118)] = 1298,
  [SMALL_STATE(119)] = 1302,
  [SMALL_STATE(120)] = 1306,
  [SMALL_STATE(121)] = 1310,
  [SMALL_STATE(122)] = 1314,
  [SMALL_STATE(123)] = 1318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(27),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(108),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(39),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(9),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(65),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(38),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(57),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(72),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(74),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(75),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(98),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(101),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_lit_repeat1, 2), SHIFT_REPEAT(14),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_string_lit_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_lit_repeat1, 2), SHIFT_REPEAT(14),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_lit_repeat1, 2), SHIFT_REPEAT(4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_multi_string_lit_repeat1, 2), SHIFT_REPEAT(17),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_multi_string_lit_repeat1, 2), SHIFT_REPEAT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpolated_multi_string_lit_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpolated_string_lit_repeat2, 2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interpolated_string_lit_repeat2, 2), SHIFT_REPEAT(23),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpolated_string_lit_repeat2, 2), SHIFT_REPEAT(5),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 3, .production_id = 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 3, .production_id = 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_interpolation, 4, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_interpolation, 4, .production_id = 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalized_string_prefix, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalized_string_prefix, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ticked_identifier, 3, .production_id = 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ticked_identifier, 3, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_lit_repeat1, 2), SHIFT_REPEAT(40),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_lit_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_lit_repeat1, 2), SHIFT_REPEAT(40),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2), SHIFT_REPEAT(42),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_interpolation_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_multi_string_lit_repeat1, 2), SHIFT_REPEAT(51),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_multi_string_lit_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_string_interpolation, 4, .production_id = 6),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_string_interpolation, 3, .production_id = 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_string_lit, 2, .production_id = 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string_lit, 4, .production_id = 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_string_prefix, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string_prefix, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool_lit, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 2, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_lit, 5, .production_id = 5),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_lit, 3, .production_id = 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_lit, 3, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_string_lit, 3, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_string_lit, 3, .production_id = 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_string_lit, 3, .production_id = 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_lit, 3, .production_id = 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_multi_string_lit, 3, .production_id = 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_multi_string_lit, 4, .production_id = 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_string_lit, 4, .production_id = 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolated_string_lit, 4, .production_id = 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [399] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nim_external_scanner_create(void);
void tree_sitter_nim_external_scanner_destroy(void *);
bool tree_sitter_nim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nim_external_scanner_serialize(void *, char *);
void tree_sitter_nim_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nim(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nim_external_scanner_create,
      tree_sitter_nim_external_scanner_destroy,
      tree_sitter_nim_external_scanner_scan,
      tree_sitter_nim_external_scanner_serialize,
      tree_sitter_nim_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
