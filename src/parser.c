#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_DOTLIKEOP_token1 = 1,
  aux_sym_OPR_token1 = 2,
  aux_sym_OP0_token1 = 3,
  aux_sym_OP0_token2 = 4,
  aux_sym_OP1_token1 = 5,
  aux_sym_OP2_token1 = 6,
  aux_sym_OP2_token2 = 7,
  anon_sym_or = 8,
  anon_sym_xor = 9,
  anon_sym_and = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_LT = 13,
  anon_sym_GT_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_in = 17,
  anon_sym_notin = 18,
  anon_sym_is = 19,
  anon_sym_isnot = 20,
  anon_sym_not = 21,
  anon_sym_of = 22,
  anon_sym_as = 23,
  anon_sym_from = 24,
  aux_sym_OP5_token1 = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_AMP = 27,
  aux_sym_OP7_token1 = 28,
  anon_sym_PLUS = 29,
  anon_sym_DASH = 30,
  aux_sym_OP8_token1 = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_div = 35,
  anon_sym_mod = 36,
  anon_sym_shl = 37,
  anon_sym_shr = 38,
  aux_sym_OP9_token1 = 39,
  aux_sym_OP10_token1 = 40,
  aux_sym_IDENT_token1 = 41,
  sym_INT_LIT = 42,
  sym_INT8_LIT = 43,
  sym_INT16_LIT = 44,
  sym_INT32_LIT = 45,
  sym_INT64_LIT = 46,
  sym_UINT_LIT = 47,
  sym_UINT8_LIT = 48,
  sym_UINT16_LIT = 49,
  sym_UINT32_LIT = 50,
  sym_UINT64_LIT = 51,
  sym_FLOAT_LIT = 52,
  sym_FLOAT32_LIT = 53,
  sym_FLOAT64_LIT = 54,
  sym_CUSTOM_NUMERIC_LIT = 55,
  sym_CHAR_LIT = 56,
  sym_STR_LIT = 57,
  aux_sym_TRIPLESTR_LIT_token1 = 58,
  aux_sym_TRIPLESTR_LIT_token2 = 59,
  aux_sym_TRIPLESTR_LIT_token3 = 60,
  sym_RSTR_LIT = 61,
  sym_GENERALIZED_STR_LIT = 62,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 63,
  sym_NIL = 64,
  sym_module = 65,
  sym__definition = 66,
  sym_literal = 67,
  sym_generalizedLit = 68,
  sym_OP0 = 69,
  sym_OP1 = 70,
  sym_OP2 = 71,
  sym_OP3 = 72,
  sym_OP4 = 73,
  sym_OP5 = 74,
  sym_OP6 = 75,
  sym_OP7 = 76,
  sym_OP8 = 77,
  sym_OP9 = 78,
  sym_OP10 = 79,
  sym_TRIPLESTR_LIT = 80,
  sym_GENERALIZED_TRIPLESTR_LIT = 81,
  aux_sym_module_repeat1 = 82,
  aux_sym_TRIPLESTR_LIT_repeat1 = 83,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_DOTLIKEOP_token1] = "DOTLIKEOP_token1",
  [aux_sym_OPR_token1] = "OPR_token1",
  [aux_sym_OP0_token1] = "OP0_token1",
  [aux_sym_OP0_token2] = "OP0_token2",
  [aux_sym_OP1_token1] = "OP1_token1",
  [aux_sym_OP2_token1] = "OP2_token1",
  [aux_sym_OP2_token2] = "OP2_token2",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_in] = "in",
  [anon_sym_notin] = "notin",
  [anon_sym_is] = "is",
  [anon_sym_isnot] = "isnot",
  [anon_sym_not] = "not",
  [anon_sym_of] = "of",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [aux_sym_OP5_token1] = "OP5_token1",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_AMP] = "&",
  [aux_sym_OP7_token1] = "OP7_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_OP8_token1] = "OP8_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_div] = "div",
  [anon_sym_mod] = "mod",
  [anon_sym_shl] = "shl",
  [anon_sym_shr] = "shr",
  [aux_sym_OP9_token1] = "OP9_token1",
  [aux_sym_OP10_token1] = "OP10_token1",
  [aux_sym_IDENT_token1] = "IDENT_token1",
  [sym_INT_LIT] = "INT_LIT",
  [sym_INT8_LIT] = "INT8_LIT",
  [sym_INT16_LIT] = "INT16_LIT",
  [sym_INT32_LIT] = "INT32_LIT",
  [sym_INT64_LIT] = "INT64_LIT",
  [sym_UINT_LIT] = "UINT_LIT",
  [sym_UINT8_LIT] = "UINT8_LIT",
  [sym_UINT16_LIT] = "UINT16_LIT",
  [sym_UINT32_LIT] = "UINT32_LIT",
  [sym_UINT64_LIT] = "UINT64_LIT",
  [sym_FLOAT_LIT] = "FLOAT_LIT",
  [sym_FLOAT32_LIT] = "FLOAT32_LIT",
  [sym_FLOAT64_LIT] = "FLOAT64_LIT",
  [sym_CUSTOM_NUMERIC_LIT] = "CUSTOM_NUMERIC_LIT",
  [sym_CHAR_LIT] = "CHAR_LIT",
  [sym_STR_LIT] = "STR_LIT",
  [aux_sym_TRIPLESTR_LIT_token1] = "TRIPLESTR_LIT_token1",
  [aux_sym_TRIPLESTR_LIT_token2] = "TRIPLESTR_LIT_token2",
  [aux_sym_TRIPLESTR_LIT_token3] = "TRIPLESTR_LIT_token3",
  [sym_RSTR_LIT] = "RSTR_LIT",
  [sym_GENERALIZED_STR_LIT] = "GENERALIZED_STR_LIT",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_NIL] = "NIL",
  [sym_module] = "module",
  [sym__definition] = "_definition",
  [sym_literal] = "literal",
  [sym_generalizedLit] = "generalizedLit",
  [sym_OP0] = "OP0",
  [sym_OP1] = "OP1",
  [sym_OP2] = "OP2",
  [sym_OP3] = "OP3",
  [sym_OP4] = "OP4",
  [sym_OP5] = "OP5",
  [sym_OP6] = "OP6",
  [sym_OP7] = "OP7",
  [sym_OP8] = "OP8",
  [sym_OP9] = "OP9",
  [sym_OP10] = "OP10",
  [sym_TRIPLESTR_LIT] = "TRIPLESTR_LIT",
  [sym_GENERALIZED_TRIPLESTR_LIT] = "GENERALIZED_TRIPLESTR_LIT",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_TRIPLESTR_LIT_repeat1] = "TRIPLESTR_LIT_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_DOTLIKEOP_token1] = aux_sym_DOTLIKEOP_token1,
  [aux_sym_OPR_token1] = aux_sym_OPR_token1,
  [aux_sym_OP0_token1] = aux_sym_OP0_token1,
  [aux_sym_OP0_token2] = aux_sym_OP0_token2,
  [aux_sym_OP1_token1] = aux_sym_OP1_token1,
  [aux_sym_OP2_token1] = aux_sym_OP2_token1,
  [aux_sym_OP2_token2] = aux_sym_OP2_token2,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_notin] = anon_sym_notin,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_isnot] = anon_sym_isnot,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [aux_sym_OP5_token1] = aux_sym_OP5_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_AMP] = anon_sym_AMP,
  [aux_sym_OP7_token1] = aux_sym_OP7_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_OP8_token1] = aux_sym_OP8_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shr] = anon_sym_shr,
  [aux_sym_OP9_token1] = aux_sym_OP9_token1,
  [aux_sym_OP10_token1] = aux_sym_OP10_token1,
  [aux_sym_IDENT_token1] = aux_sym_IDENT_token1,
  [sym_INT_LIT] = sym_INT_LIT,
  [sym_INT8_LIT] = sym_INT8_LIT,
  [sym_INT16_LIT] = sym_INT16_LIT,
  [sym_INT32_LIT] = sym_INT32_LIT,
  [sym_INT64_LIT] = sym_INT64_LIT,
  [sym_UINT_LIT] = sym_UINT_LIT,
  [sym_UINT8_LIT] = sym_UINT8_LIT,
  [sym_UINT16_LIT] = sym_UINT16_LIT,
  [sym_UINT32_LIT] = sym_UINT32_LIT,
  [sym_UINT64_LIT] = sym_UINT64_LIT,
  [sym_FLOAT_LIT] = sym_FLOAT_LIT,
  [sym_FLOAT32_LIT] = sym_FLOAT32_LIT,
  [sym_FLOAT64_LIT] = sym_FLOAT64_LIT,
  [sym_CUSTOM_NUMERIC_LIT] = sym_CUSTOM_NUMERIC_LIT,
  [sym_CHAR_LIT] = sym_CHAR_LIT,
  [sym_STR_LIT] = sym_STR_LIT,
  [aux_sym_TRIPLESTR_LIT_token1] = aux_sym_TRIPLESTR_LIT_token1,
  [aux_sym_TRIPLESTR_LIT_token2] = aux_sym_TRIPLESTR_LIT_token2,
  [aux_sym_TRIPLESTR_LIT_token3] = aux_sym_TRIPLESTR_LIT_token3,
  [sym_RSTR_LIT] = sym_RSTR_LIT,
  [sym_GENERALIZED_STR_LIT] = sym_GENERALIZED_STR_LIT,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_NIL] = sym_NIL,
  [sym_module] = sym_module,
  [sym__definition] = sym__definition,
  [sym_literal] = sym_literal,
  [sym_generalizedLit] = sym_generalizedLit,
  [sym_OP0] = sym_OP0,
  [sym_OP1] = sym_OP1,
  [sym_OP2] = sym_OP2,
  [sym_OP3] = sym_OP3,
  [sym_OP4] = sym_OP4,
  [sym_OP5] = sym_OP5,
  [sym_OP6] = sym_OP6,
  [sym_OP7] = sym_OP7,
  [sym_OP8] = sym_OP8,
  [sym_OP9] = sym_OP9,
  [sym_OP10] = sym_OP10,
  [sym_TRIPLESTR_LIT] = sym_TRIPLESTR_LIT,
  [sym_GENERALIZED_TRIPLESTR_LIT] = sym_GENERALIZED_TRIPLESTR_LIT,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_TRIPLESTR_LIT_repeat1] = aux_sym_TRIPLESTR_LIT_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_DOTLIKEOP_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OPR_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OP0_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OP0_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OP1_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OP2_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OP2_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_OP5_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_OP7_token1] = {
    .visible = false,
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
  [aux_sym_OP8_token1] = {
    .visible = false,
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
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_OP9_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_OP10_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IDENT_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_INT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT8_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT16_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT32_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT64_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT8_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT16_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT32_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT64_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT32_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT64_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_CUSTOM_NUMERIC_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_CHAR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_STR_LIT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_TRIPLESTR_LIT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_RSTR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_GENERALIZED_STR_LIT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_NIL] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_generalizedLit] = {
    .visible = true,
    .named = true,
  },
  [sym_OP0] = {
    .visible = true,
    .named = true,
  },
  [sym_OP1] = {
    .visible = true,
    .named = true,
  },
  [sym_OP2] = {
    .visible = true,
    .named = true,
  },
  [sym_OP3] = {
    .visible = true,
    .named = true,
  },
  [sym_OP4] = {
    .visible = true,
    .named = true,
  },
  [sym_OP5] = {
    .visible = true,
    .named = true,
  },
  [sym_OP6] = {
    .visible = true,
    .named = true,
  },
  [sym_OP7] = {
    .visible = true,
    .named = true,
  },
  [sym_OP8] = {
    .visible = true,
    .named = true,
  },
  [sym_OP9] = {
    .visible = true,
    .named = true,
  },
  [sym_OP10] = {
    .visible = true,
    .named = true,
  },
  [sym_TRIPLESTR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_GENERALIZED_TRIPLESTR_LIT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_DOTLIKEOP_token1_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '-' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool aux_sym_OP5_token1_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '.' && c <= '/')))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '@')
        : c <= '\\')
      : (c <= '^' || c == '|'))));
}

static inline bool sym_CHAR_LIT_character_set_1(int32_t c) {
  return (c < 'l'
    ? (c < 'a'
      ? (c < '\\'
        ? c == '"'
        : c <= '\\')
      : (c <= 'c' || (c >= 'e' && c <= 'f')))
    : (c <= 'l' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(64);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '&') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '@') ADVANCE(62);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(147);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '{') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(203);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(57);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == 'x') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (sym_CHAR_LIT_character_set_1(lookahead)) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '\'') ADVANCE(191);
      END_STATE();
    case 21:
      if (lookahead == '\'') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '\'') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(112);
      if (aux_sym_DOTLIKEOP_token1_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(177);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(180);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(85);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(87);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(89);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(131);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(120);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 35:
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(179);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(159);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 42:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(91);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(160);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 55:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(200);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == '!') ADVANCE(28);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(124);
      if (lookahead == '&') ADVANCE(113);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '+') ADVANCE(116);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '?') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(148);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(147);
      if (lookahead == '|') ADVANCE(31);
      if (lookahead == '~') ADVANCE(34);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(33);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_DOTLIKEOP_token1);
      if (aux_sym_DOTLIKEOP_token1_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_OPR_token1);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(85);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(86);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_OPR_token1);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(87);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(88);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_OPR_token1);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_OPR_token1);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_OPR_token1);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_OPR_token1);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(131);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_OPR_token1);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(120);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_OP0_token1);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_OP0_token1);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_OP0_token1);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(120);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(114);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(89);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(131);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(120);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_OP0_token2);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(91);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_OP1_token1);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_OP1_token1);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(114);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_OP1_token1);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_OP1_token1);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(89);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_OP1_token1);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(131);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_OP2_token1);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(89);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_OP2_token1);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(89);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_OP2_token1);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(91);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_OP2_token1);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(91);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_OP2_token2);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(89);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_OP2_token2);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(89);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_OP2_token2);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(91);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_OP2_token2);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(91);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_notin);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_isnot);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_OP5_token1);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_OP5_token1);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(110);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (aux_sym_DOTLIKEOP_token1_character_set_1(lookahead)) ADVANCE(61);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(114);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_OP7_token1);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(114);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_OP7_token1);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(114);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(161);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_OP8_token1);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(74);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_OP8_token1);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(118);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_OP8_token1);
      if (lookahead == '>') ADVANCE(78);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(120);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_OP8_token1);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(120);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_OP9_token1);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_OP9_token1);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(129);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_OP10_token1);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '>') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(131);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_OP10_token1);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(131);
      if (aux_sym_OP5_token1_character_set_1(lookahead)) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 's') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 't') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'v') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(50);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(37);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(51);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(39);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_INT8_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_INT16_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_INT32_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_INT64_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_UINT_LIT);
      if (lookahead == '1') ADVANCE(189);
      if (lookahead == '3') ADVANCE(184);
      if (lookahead == '6') ADVANCE(187);
      if (lookahead == '8') ADVANCE(171);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_UINT8_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_UINT16_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_UINT32_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_UINT64_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_FLOAT_LIT);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(36);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_FLOAT_LIT);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(180);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(25);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      if (lookahead == '3') ADVANCE(182);
      if (lookahead == '6') ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_FLOAT64_LIT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '1') ADVANCE(188);
      if (lookahead == '3') ADVANCE(183);
      if (lookahead == '6') ADVANCE(186);
      if (lookahead == '8') ADVANCE(166);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '2') ADVANCE(177);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '2') ADVANCE(168);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '2') ADVANCE(173);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '4') ADVANCE(180);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '4') ADVANCE(169);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '4') ADVANCE(174);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '6') ADVANCE(167);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '6') ADVANCE(172);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_CHAR_LIT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_CHAR_LIT);
      if (lookahead == '\'') ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_STR_LIT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_STR_LIT);
      if (lookahead == '"') ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_STR_LIT);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(11);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      if (lookahead == '"') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      if (lookahead == '"') ADVANCE(16);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token3);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_RSTR_LIT);
      if (lookahead == '"') ADVANCE(13);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_GENERALIZED_STR_LIT);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_NIL);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 59},
  [5] = {.lex_state = 59},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 59},
  [13] = {.lex_state = 59},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 59},
  [16] = {.lex_state = 59},
  [17] = {.lex_state = 59},
  [18] = {.lex_state = 59},
  [19] = {.lex_state = 59},
  [20] = {.lex_state = 59},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(1),
    [aux_sym_OPR_token1] = ACTIONS(1),
    [aux_sym_OP0_token1] = ACTIONS(1),
    [aux_sym_OP0_token2] = ACTIONS(1),
    [aux_sym_OP1_token1] = ACTIONS(1),
    [aux_sym_OP2_token1] = ACTIONS(1),
    [aux_sym_OP2_token2] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_notin] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_isnot] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [aux_sym_OP5_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [aux_sym_OP7_token1] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_OP8_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_shr] = ACTIONS(1),
    [aux_sym_OP9_token1] = ACTIONS(1),
    [aux_sym_OP10_token1] = ACTIONS(1),
    [aux_sym_IDENT_token1] = ACTIONS(1),
    [sym_INT_LIT] = ACTIONS(1),
    [sym_INT8_LIT] = ACTIONS(1),
    [sym_INT16_LIT] = ACTIONS(1),
    [sym_INT32_LIT] = ACTIONS(1),
    [sym_INT64_LIT] = ACTIONS(1),
    [sym_UINT_LIT] = ACTIONS(1),
    [sym_UINT8_LIT] = ACTIONS(1),
    [sym_UINT16_LIT] = ACTIONS(1),
    [sym_UINT32_LIT] = ACTIONS(1),
    [sym_UINT64_LIT] = ACTIONS(1),
    [sym_FLOAT_LIT] = ACTIONS(1),
    [sym_FLOAT32_LIT] = ACTIONS(1),
    [sym_FLOAT64_LIT] = ACTIONS(1),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(1),
    [sym_CHAR_LIT] = ACTIONS(1),
    [sym_STR_LIT] = ACTIONS(1),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(1),
    [sym_RSTR_LIT] = ACTIONS(1),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(1),
    [sym_NIL] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(26),
    [sym__definition] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_generalizedLit] = STATE(3),
    [sym_OP0] = STATE(3),
    [sym_OP1] = STATE(3),
    [sym_OP2] = STATE(3),
    [sym_OP3] = STATE(3),
    [sym_OP4] = STATE(3),
    [sym_OP5] = STATE(3),
    [sym_OP6] = STATE(3),
    [sym_OP7] = STATE(3),
    [sym_OP8] = STATE(3),
    [sym_OP9] = STATE(3),
    [sym_OP10] = STATE(3),
    [sym_TRIPLESTR_LIT] = STATE(4),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(16),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(5),
    [aux_sym_OP0_token1] = ACTIONS(7),
    [aux_sym_OP0_token2] = ACTIONS(9),
    [aux_sym_OP1_token1] = ACTIONS(11),
    [aux_sym_OP2_token1] = ACTIONS(13),
    [aux_sym_OP2_token2] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_notin] = ACTIONS(19),
    [anon_sym_is] = ACTIONS(19),
    [anon_sym_isnot] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_of] = ACTIONS(19),
    [anon_sym_as] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [aux_sym_OP5_token1] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [aux_sym_OP7_token1] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [aux_sym_OP8_token1] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_mod] = ACTIONS(27),
    [anon_sym_shl] = ACTIONS(27),
    [anon_sym_shr] = ACTIONS(27),
    [aux_sym_OP9_token1] = ACTIONS(27),
    [aux_sym_OP10_token1] = ACTIONS(29),
    [aux_sym_IDENT_token1] = ACTIONS(31),
    [sym_INT_LIT] = ACTIONS(33),
    [sym_INT8_LIT] = ACTIONS(33),
    [sym_INT16_LIT] = ACTIONS(33),
    [sym_INT32_LIT] = ACTIONS(33),
    [sym_INT64_LIT] = ACTIONS(33),
    [sym_UINT_LIT] = ACTIONS(33),
    [sym_UINT8_LIT] = ACTIONS(33),
    [sym_UINT16_LIT] = ACTIONS(33),
    [sym_UINT32_LIT] = ACTIONS(33),
    [sym_UINT64_LIT] = ACTIONS(33),
    [sym_FLOAT_LIT] = ACTIONS(33),
    [sym_FLOAT32_LIT] = ACTIONS(33),
    [sym_FLOAT64_LIT] = ACTIONS(35),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(33),
    [sym_CHAR_LIT] = ACTIONS(35),
    [sym_STR_LIT] = ACTIONS(33),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(37),
    [sym_RSTR_LIT] = ACTIONS(35),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(39),
    [sym_NIL] = ACTIONS(33),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_generalizedLit] = STATE(2),
    [sym_OP0] = STATE(2),
    [sym_OP1] = STATE(2),
    [sym_OP2] = STATE(2),
    [sym_OP3] = STATE(2),
    [sym_OP4] = STATE(2),
    [sym_OP5] = STATE(2),
    [sym_OP6] = STATE(2),
    [sym_OP7] = STATE(2),
    [sym_OP8] = STATE(2),
    [sym_OP9] = STATE(2),
    [sym_OP10] = STATE(2),
    [sym_TRIPLESTR_LIT] = STATE(4),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(16),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(41),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(43),
    [aux_sym_OP0_token1] = ACTIONS(46),
    [aux_sym_OP0_token2] = ACTIONS(49),
    [aux_sym_OP1_token1] = ACTIONS(52),
    [aux_sym_OP2_token1] = ACTIONS(55),
    [aux_sym_OP2_token2] = ACTIONS(55),
    [anon_sym_or] = ACTIONS(58),
    [anon_sym_xor] = ACTIONS(58),
    [anon_sym_and] = ACTIONS(61),
    [anon_sym_EQ_EQ] = ACTIONS(64),
    [anon_sym_LT_EQ] = ACTIONS(64),
    [anon_sym_LT] = ACTIONS(64),
    [anon_sym_GT_EQ] = ACTIONS(64),
    [anon_sym_GT] = ACTIONS(64),
    [anon_sym_BANG_EQ] = ACTIONS(64),
    [anon_sym_in] = ACTIONS(64),
    [anon_sym_notin] = ACTIONS(64),
    [anon_sym_is] = ACTIONS(64),
    [anon_sym_isnot] = ACTIONS(64),
    [anon_sym_not] = ACTIONS(64),
    [anon_sym_of] = ACTIONS(64),
    [anon_sym_as] = ACTIONS(64),
    [anon_sym_from] = ACTIONS(64),
    [aux_sym_OP5_token1] = ACTIONS(64),
    [anon_sym_DOT_DOT] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(70),
    [aux_sym_OP7_token1] = ACTIONS(70),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [aux_sym_OP8_token1] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_PERCENT] = ACTIONS(76),
    [anon_sym_div] = ACTIONS(76),
    [anon_sym_mod] = ACTIONS(76),
    [anon_sym_shl] = ACTIONS(76),
    [anon_sym_shr] = ACTIONS(76),
    [aux_sym_OP9_token1] = ACTIONS(76),
    [aux_sym_OP10_token1] = ACTIONS(79),
    [aux_sym_IDENT_token1] = ACTIONS(82),
    [sym_INT_LIT] = ACTIONS(85),
    [sym_INT8_LIT] = ACTIONS(85),
    [sym_INT16_LIT] = ACTIONS(85),
    [sym_INT32_LIT] = ACTIONS(85),
    [sym_INT64_LIT] = ACTIONS(85),
    [sym_UINT_LIT] = ACTIONS(85),
    [sym_UINT8_LIT] = ACTIONS(85),
    [sym_UINT16_LIT] = ACTIONS(85),
    [sym_UINT32_LIT] = ACTIONS(85),
    [sym_UINT64_LIT] = ACTIONS(85),
    [sym_FLOAT_LIT] = ACTIONS(85),
    [sym_FLOAT32_LIT] = ACTIONS(85),
    [sym_FLOAT64_LIT] = ACTIONS(88),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(85),
    [sym_CHAR_LIT] = ACTIONS(88),
    [sym_STR_LIT] = ACTIONS(85),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(91),
    [sym_RSTR_LIT] = ACTIONS(88),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(94),
    [sym_NIL] = ACTIONS(85),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_generalizedLit] = STATE(2),
    [sym_OP0] = STATE(2),
    [sym_OP1] = STATE(2),
    [sym_OP2] = STATE(2),
    [sym_OP3] = STATE(2),
    [sym_OP4] = STATE(2),
    [sym_OP5] = STATE(2),
    [sym_OP6] = STATE(2),
    [sym_OP7] = STATE(2),
    [sym_OP8] = STATE(2),
    [sym_OP9] = STATE(2),
    [sym_OP10] = STATE(2),
    [sym_TRIPLESTR_LIT] = STATE(4),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(16),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(97),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(5),
    [aux_sym_OP0_token1] = ACTIONS(7),
    [aux_sym_OP0_token2] = ACTIONS(9),
    [aux_sym_OP1_token1] = ACTIONS(11),
    [aux_sym_OP2_token1] = ACTIONS(13),
    [aux_sym_OP2_token2] = ACTIONS(13),
    [anon_sym_or] = ACTIONS(15),
    [anon_sym_xor] = ACTIONS(15),
    [anon_sym_and] = ACTIONS(17),
    [anon_sym_EQ_EQ] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT_EQ] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_BANG_EQ] = ACTIONS(19),
    [anon_sym_in] = ACTIONS(19),
    [anon_sym_notin] = ACTIONS(19),
    [anon_sym_is] = ACTIONS(19),
    [anon_sym_isnot] = ACTIONS(19),
    [anon_sym_not] = ACTIONS(19),
    [anon_sym_of] = ACTIONS(19),
    [anon_sym_as] = ACTIONS(19),
    [anon_sym_from] = ACTIONS(19),
    [aux_sym_OP5_token1] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(21),
    [anon_sym_AMP] = ACTIONS(23),
    [aux_sym_OP7_token1] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(25),
    [aux_sym_OP8_token1] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_PERCENT] = ACTIONS(27),
    [anon_sym_div] = ACTIONS(27),
    [anon_sym_mod] = ACTIONS(27),
    [anon_sym_shl] = ACTIONS(27),
    [anon_sym_shr] = ACTIONS(27),
    [aux_sym_OP9_token1] = ACTIONS(27),
    [aux_sym_OP10_token1] = ACTIONS(29),
    [aux_sym_IDENT_token1] = ACTIONS(31),
    [sym_INT_LIT] = ACTIONS(33),
    [sym_INT8_LIT] = ACTIONS(33),
    [sym_INT16_LIT] = ACTIONS(33),
    [sym_INT32_LIT] = ACTIONS(33),
    [sym_INT64_LIT] = ACTIONS(33),
    [sym_UINT_LIT] = ACTIONS(33),
    [sym_UINT8_LIT] = ACTIONS(33),
    [sym_UINT16_LIT] = ACTIONS(33),
    [sym_UINT32_LIT] = ACTIONS(33),
    [sym_UINT64_LIT] = ACTIONS(33),
    [sym_FLOAT_LIT] = ACTIONS(33),
    [sym_FLOAT32_LIT] = ACTIONS(33),
    [sym_FLOAT64_LIT] = ACTIONS(35),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(33),
    [sym_CHAR_LIT] = ACTIONS(35),
    [sym_STR_LIT] = ACTIONS(33),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(37),
    [sym_RSTR_LIT] = ACTIONS(35),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(39),
    [sym_NIL] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(99),
    [aux_sym_OP0_token1] = ACTIONS(101),
    [aux_sym_OP0_token2] = ACTIONS(99),
    [aux_sym_OP1_token1] = ACTIONS(99),
    [aux_sym_OP2_token1] = ACTIONS(101),
    [aux_sym_OP2_token2] = ACTIONS(101),
    [anon_sym_or] = ACTIONS(101),
    [anon_sym_xor] = ACTIONS(101),
    [anon_sym_and] = ACTIONS(101),
    [anon_sym_EQ_EQ] = ACTIONS(101),
    [anon_sym_LT_EQ] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_BANG_EQ] = ACTIONS(101),
    [anon_sym_in] = ACTIONS(101),
    [anon_sym_notin] = ACTIONS(101),
    [anon_sym_is] = ACTIONS(101),
    [anon_sym_isnot] = ACTIONS(101),
    [anon_sym_not] = ACTIONS(101),
    [anon_sym_of] = ACTIONS(101),
    [anon_sym_as] = ACTIONS(101),
    [anon_sym_from] = ACTIONS(101),
    [aux_sym_OP5_token1] = ACTIONS(101),
    [anon_sym_DOT_DOT] = ACTIONS(101),
    [anon_sym_AMP] = ACTIONS(101),
    [aux_sym_OP7_token1] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [aux_sym_OP8_token1] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_PERCENT] = ACTIONS(101),
    [anon_sym_div] = ACTIONS(101),
    [anon_sym_mod] = ACTIONS(101),
    [anon_sym_shl] = ACTIONS(101),
    [anon_sym_shr] = ACTIONS(101),
    [aux_sym_OP9_token1] = ACTIONS(101),
    [aux_sym_OP10_token1] = ACTIONS(101),
    [aux_sym_IDENT_token1] = ACTIONS(101),
    [sym_INT_LIT] = ACTIONS(101),
    [sym_INT8_LIT] = ACTIONS(101),
    [sym_INT16_LIT] = ACTIONS(101),
    [sym_INT32_LIT] = ACTIONS(101),
    [sym_INT64_LIT] = ACTIONS(101),
    [sym_UINT_LIT] = ACTIONS(101),
    [sym_UINT8_LIT] = ACTIONS(101),
    [sym_UINT16_LIT] = ACTIONS(101),
    [sym_UINT32_LIT] = ACTIONS(101),
    [sym_UINT64_LIT] = ACTIONS(101),
    [sym_FLOAT_LIT] = ACTIONS(101),
    [sym_FLOAT32_LIT] = ACTIONS(101),
    [sym_FLOAT64_LIT] = ACTIONS(99),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(101),
    [sym_CHAR_LIT] = ACTIONS(99),
    [sym_STR_LIT] = ACTIONS(101),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(99),
    [sym_RSTR_LIT] = ACTIONS(99),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(101),
    [sym_NIL] = ACTIONS(101),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(103),
    [aux_sym_OP0_token1] = ACTIONS(105),
    [aux_sym_OP0_token2] = ACTIONS(103),
    [aux_sym_OP1_token1] = ACTIONS(103),
    [aux_sym_OP2_token1] = ACTIONS(105),
    [aux_sym_OP2_token2] = ACTIONS(105),
    [anon_sym_or] = ACTIONS(105),
    [anon_sym_xor] = ACTIONS(105),
    [anon_sym_and] = ACTIONS(105),
    [anon_sym_EQ_EQ] = ACTIONS(105),
    [anon_sym_LT_EQ] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_BANG_EQ] = ACTIONS(105),
    [anon_sym_in] = ACTIONS(105),
    [anon_sym_notin] = ACTIONS(105),
    [anon_sym_is] = ACTIONS(105),
    [anon_sym_isnot] = ACTIONS(105),
    [anon_sym_not] = ACTIONS(105),
    [anon_sym_of] = ACTIONS(105),
    [anon_sym_as] = ACTIONS(105),
    [anon_sym_from] = ACTIONS(105),
    [aux_sym_OP5_token1] = ACTIONS(105),
    [anon_sym_DOT_DOT] = ACTIONS(105),
    [anon_sym_AMP] = ACTIONS(105),
    [aux_sym_OP7_token1] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [aux_sym_OP8_token1] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_PERCENT] = ACTIONS(105),
    [anon_sym_div] = ACTIONS(105),
    [anon_sym_mod] = ACTIONS(105),
    [anon_sym_shl] = ACTIONS(105),
    [anon_sym_shr] = ACTIONS(105),
    [aux_sym_OP9_token1] = ACTIONS(105),
    [aux_sym_OP10_token1] = ACTIONS(105),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(105),
    [sym_INT8_LIT] = ACTIONS(105),
    [sym_INT16_LIT] = ACTIONS(105),
    [sym_INT32_LIT] = ACTIONS(105),
    [sym_INT64_LIT] = ACTIONS(105),
    [sym_UINT_LIT] = ACTIONS(105),
    [sym_UINT8_LIT] = ACTIONS(105),
    [sym_UINT16_LIT] = ACTIONS(105),
    [sym_UINT32_LIT] = ACTIONS(105),
    [sym_UINT64_LIT] = ACTIONS(105),
    [sym_FLOAT_LIT] = ACTIONS(105),
    [sym_FLOAT32_LIT] = ACTIONS(105),
    [sym_FLOAT64_LIT] = ACTIONS(103),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(105),
    [sym_CHAR_LIT] = ACTIONS(103),
    [sym_STR_LIT] = ACTIONS(105),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(103),
    [sym_RSTR_LIT] = ACTIONS(103),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(105),
    [sym_NIL] = ACTIONS(105),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(107),
    [aux_sym_OP0_token1] = ACTIONS(109),
    [aux_sym_OP0_token2] = ACTIONS(107),
    [aux_sym_OP1_token1] = ACTIONS(107),
    [aux_sym_OP2_token1] = ACTIONS(109),
    [aux_sym_OP2_token2] = ACTIONS(109),
    [anon_sym_or] = ACTIONS(109),
    [anon_sym_xor] = ACTIONS(109),
    [anon_sym_and] = ACTIONS(109),
    [anon_sym_EQ_EQ] = ACTIONS(109),
    [anon_sym_LT_EQ] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_BANG_EQ] = ACTIONS(109),
    [anon_sym_in] = ACTIONS(109),
    [anon_sym_notin] = ACTIONS(109),
    [anon_sym_is] = ACTIONS(109),
    [anon_sym_isnot] = ACTIONS(109),
    [anon_sym_not] = ACTIONS(109),
    [anon_sym_of] = ACTIONS(109),
    [anon_sym_as] = ACTIONS(109),
    [anon_sym_from] = ACTIONS(109),
    [aux_sym_OP5_token1] = ACTIONS(109),
    [anon_sym_DOT_DOT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [aux_sym_OP7_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [aux_sym_OP8_token1] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_div] = ACTIONS(109),
    [anon_sym_mod] = ACTIONS(109),
    [anon_sym_shl] = ACTIONS(109),
    [anon_sym_shr] = ACTIONS(109),
    [aux_sym_OP9_token1] = ACTIONS(109),
    [aux_sym_OP10_token1] = ACTIONS(109),
    [aux_sym_IDENT_token1] = ACTIONS(109),
    [sym_INT_LIT] = ACTIONS(109),
    [sym_INT8_LIT] = ACTIONS(109),
    [sym_INT16_LIT] = ACTIONS(109),
    [sym_INT32_LIT] = ACTIONS(109),
    [sym_INT64_LIT] = ACTIONS(109),
    [sym_UINT_LIT] = ACTIONS(109),
    [sym_UINT8_LIT] = ACTIONS(109),
    [sym_UINT16_LIT] = ACTIONS(109),
    [sym_UINT32_LIT] = ACTIONS(109),
    [sym_UINT64_LIT] = ACTIONS(109),
    [sym_FLOAT_LIT] = ACTIONS(109),
    [sym_FLOAT32_LIT] = ACTIONS(109),
    [sym_FLOAT64_LIT] = ACTIONS(107),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(109),
    [sym_CHAR_LIT] = ACTIONS(107),
    [sym_STR_LIT] = ACTIONS(109),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(107),
    [sym_RSTR_LIT] = ACTIONS(107),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(109),
    [sym_NIL] = ACTIONS(109),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(111),
    [aux_sym_OP0_token1] = ACTIONS(113),
    [aux_sym_OP0_token2] = ACTIONS(111),
    [aux_sym_OP1_token1] = ACTIONS(111),
    [aux_sym_OP2_token1] = ACTIONS(113),
    [aux_sym_OP2_token2] = ACTIONS(113),
    [anon_sym_or] = ACTIONS(113),
    [anon_sym_xor] = ACTIONS(113),
    [anon_sym_and] = ACTIONS(113),
    [anon_sym_EQ_EQ] = ACTIONS(113),
    [anon_sym_LT_EQ] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_BANG_EQ] = ACTIONS(113),
    [anon_sym_in] = ACTIONS(113),
    [anon_sym_notin] = ACTIONS(113),
    [anon_sym_is] = ACTIONS(113),
    [anon_sym_isnot] = ACTIONS(113),
    [anon_sym_not] = ACTIONS(113),
    [anon_sym_of] = ACTIONS(113),
    [anon_sym_as] = ACTIONS(113),
    [anon_sym_from] = ACTIONS(113),
    [aux_sym_OP5_token1] = ACTIONS(113),
    [anon_sym_DOT_DOT] = ACTIONS(113),
    [anon_sym_AMP] = ACTIONS(113),
    [aux_sym_OP7_token1] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [aux_sym_OP8_token1] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_PERCENT] = ACTIONS(113),
    [anon_sym_div] = ACTIONS(113),
    [anon_sym_mod] = ACTIONS(113),
    [anon_sym_shl] = ACTIONS(113),
    [anon_sym_shr] = ACTIONS(113),
    [aux_sym_OP9_token1] = ACTIONS(113),
    [aux_sym_OP10_token1] = ACTIONS(113),
    [aux_sym_IDENT_token1] = ACTIONS(113),
    [sym_INT_LIT] = ACTIONS(113),
    [sym_INT8_LIT] = ACTIONS(113),
    [sym_INT16_LIT] = ACTIONS(113),
    [sym_INT32_LIT] = ACTIONS(113),
    [sym_INT64_LIT] = ACTIONS(113),
    [sym_UINT_LIT] = ACTIONS(113),
    [sym_UINT8_LIT] = ACTIONS(113),
    [sym_UINT16_LIT] = ACTIONS(113),
    [sym_UINT32_LIT] = ACTIONS(113),
    [sym_UINT64_LIT] = ACTIONS(113),
    [sym_FLOAT_LIT] = ACTIONS(113),
    [sym_FLOAT32_LIT] = ACTIONS(113),
    [sym_FLOAT64_LIT] = ACTIONS(111),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(113),
    [sym_CHAR_LIT] = ACTIONS(111),
    [sym_STR_LIT] = ACTIONS(113),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(111),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [sym_NIL] = ACTIONS(113),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(115),
    [aux_sym_OP0_token1] = ACTIONS(117),
    [aux_sym_OP0_token2] = ACTIONS(115),
    [aux_sym_OP1_token1] = ACTIONS(115),
    [aux_sym_OP2_token1] = ACTIONS(117),
    [aux_sym_OP2_token2] = ACTIONS(117),
    [anon_sym_or] = ACTIONS(117),
    [anon_sym_xor] = ACTIONS(117),
    [anon_sym_and] = ACTIONS(117),
    [anon_sym_EQ_EQ] = ACTIONS(117),
    [anon_sym_LT_EQ] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [anon_sym_GT_EQ] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_BANG_EQ] = ACTIONS(117),
    [anon_sym_in] = ACTIONS(117),
    [anon_sym_notin] = ACTIONS(117),
    [anon_sym_is] = ACTIONS(117),
    [anon_sym_isnot] = ACTIONS(117),
    [anon_sym_not] = ACTIONS(117),
    [anon_sym_of] = ACTIONS(117),
    [anon_sym_as] = ACTIONS(117),
    [anon_sym_from] = ACTIONS(117),
    [aux_sym_OP5_token1] = ACTIONS(117),
    [anon_sym_DOT_DOT] = ACTIONS(117),
    [anon_sym_AMP] = ACTIONS(117),
    [aux_sym_OP7_token1] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [aux_sym_OP8_token1] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_PERCENT] = ACTIONS(117),
    [anon_sym_div] = ACTIONS(117),
    [anon_sym_mod] = ACTIONS(117),
    [anon_sym_shl] = ACTIONS(117),
    [anon_sym_shr] = ACTIONS(117),
    [aux_sym_OP9_token1] = ACTIONS(117),
    [aux_sym_OP10_token1] = ACTIONS(117),
    [aux_sym_IDENT_token1] = ACTIONS(117),
    [sym_INT_LIT] = ACTIONS(117),
    [sym_INT8_LIT] = ACTIONS(117),
    [sym_INT16_LIT] = ACTIONS(117),
    [sym_INT32_LIT] = ACTIONS(117),
    [sym_INT64_LIT] = ACTIONS(117),
    [sym_UINT_LIT] = ACTIONS(117),
    [sym_UINT8_LIT] = ACTIONS(117),
    [sym_UINT16_LIT] = ACTIONS(117),
    [sym_UINT32_LIT] = ACTIONS(117),
    [sym_UINT64_LIT] = ACTIONS(117),
    [sym_FLOAT_LIT] = ACTIONS(117),
    [sym_FLOAT32_LIT] = ACTIONS(117),
    [sym_FLOAT64_LIT] = ACTIONS(115),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(117),
    [sym_CHAR_LIT] = ACTIONS(115),
    [sym_STR_LIT] = ACTIONS(117),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(115),
    [sym_RSTR_LIT] = ACTIONS(115),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(117),
    [sym_NIL] = ACTIONS(117),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(119),
    [aux_sym_OP0_token1] = ACTIONS(121),
    [aux_sym_OP0_token2] = ACTIONS(119),
    [aux_sym_OP1_token1] = ACTIONS(119),
    [aux_sym_OP2_token1] = ACTIONS(121),
    [aux_sym_OP2_token2] = ACTIONS(121),
    [anon_sym_or] = ACTIONS(121),
    [anon_sym_xor] = ACTIONS(121),
    [anon_sym_and] = ACTIONS(121),
    [anon_sym_EQ_EQ] = ACTIONS(121),
    [anon_sym_LT_EQ] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [anon_sym_GT_EQ] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_BANG_EQ] = ACTIONS(121),
    [anon_sym_in] = ACTIONS(121),
    [anon_sym_notin] = ACTIONS(121),
    [anon_sym_is] = ACTIONS(121),
    [anon_sym_isnot] = ACTIONS(121),
    [anon_sym_not] = ACTIONS(121),
    [anon_sym_of] = ACTIONS(121),
    [anon_sym_as] = ACTIONS(121),
    [anon_sym_from] = ACTIONS(121),
    [aux_sym_OP5_token1] = ACTIONS(121),
    [anon_sym_DOT_DOT] = ACTIONS(121),
    [anon_sym_AMP] = ACTIONS(121),
    [aux_sym_OP7_token1] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [aux_sym_OP8_token1] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_PERCENT] = ACTIONS(121),
    [anon_sym_div] = ACTIONS(121),
    [anon_sym_mod] = ACTIONS(121),
    [anon_sym_shl] = ACTIONS(121),
    [anon_sym_shr] = ACTIONS(121),
    [aux_sym_OP9_token1] = ACTIONS(121),
    [aux_sym_OP10_token1] = ACTIONS(121),
    [aux_sym_IDENT_token1] = ACTIONS(121),
    [sym_INT_LIT] = ACTIONS(121),
    [sym_INT8_LIT] = ACTIONS(121),
    [sym_INT16_LIT] = ACTIONS(121),
    [sym_INT32_LIT] = ACTIONS(121),
    [sym_INT64_LIT] = ACTIONS(121),
    [sym_UINT_LIT] = ACTIONS(121),
    [sym_UINT8_LIT] = ACTIONS(121),
    [sym_UINT16_LIT] = ACTIONS(121),
    [sym_UINT32_LIT] = ACTIONS(121),
    [sym_UINT64_LIT] = ACTIONS(121),
    [sym_FLOAT_LIT] = ACTIONS(121),
    [sym_FLOAT32_LIT] = ACTIONS(121),
    [sym_FLOAT64_LIT] = ACTIONS(119),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(121),
    [sym_CHAR_LIT] = ACTIONS(119),
    [sym_STR_LIT] = ACTIONS(121),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(119),
    [sym_RSTR_LIT] = ACTIONS(119),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(121),
    [sym_NIL] = ACTIONS(121),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(123),
    [aux_sym_OP0_token1] = ACTIONS(125),
    [aux_sym_OP0_token2] = ACTIONS(123),
    [aux_sym_OP1_token1] = ACTIONS(123),
    [aux_sym_OP2_token1] = ACTIONS(125),
    [aux_sym_OP2_token2] = ACTIONS(125),
    [anon_sym_or] = ACTIONS(125),
    [anon_sym_xor] = ACTIONS(125),
    [anon_sym_and] = ACTIONS(125),
    [anon_sym_EQ_EQ] = ACTIONS(125),
    [anon_sym_LT_EQ] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT_EQ] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_BANG_EQ] = ACTIONS(125),
    [anon_sym_in] = ACTIONS(125),
    [anon_sym_notin] = ACTIONS(125),
    [anon_sym_is] = ACTIONS(125),
    [anon_sym_isnot] = ACTIONS(125),
    [anon_sym_not] = ACTIONS(125),
    [anon_sym_of] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(125),
    [anon_sym_from] = ACTIONS(125),
    [aux_sym_OP5_token1] = ACTIONS(125),
    [anon_sym_DOT_DOT] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [aux_sym_OP7_token1] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [aux_sym_OP8_token1] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_div] = ACTIONS(125),
    [anon_sym_mod] = ACTIONS(125),
    [anon_sym_shl] = ACTIONS(125),
    [anon_sym_shr] = ACTIONS(125),
    [aux_sym_OP9_token1] = ACTIONS(125),
    [aux_sym_OP10_token1] = ACTIONS(125),
    [aux_sym_IDENT_token1] = ACTIONS(125),
    [sym_INT_LIT] = ACTIONS(125),
    [sym_INT8_LIT] = ACTIONS(125),
    [sym_INT16_LIT] = ACTIONS(125),
    [sym_INT32_LIT] = ACTIONS(125),
    [sym_INT64_LIT] = ACTIONS(125),
    [sym_UINT_LIT] = ACTIONS(125),
    [sym_UINT8_LIT] = ACTIONS(125),
    [sym_UINT16_LIT] = ACTIONS(125),
    [sym_UINT32_LIT] = ACTIONS(125),
    [sym_UINT64_LIT] = ACTIONS(125),
    [sym_FLOAT_LIT] = ACTIONS(125),
    [sym_FLOAT32_LIT] = ACTIONS(125),
    [sym_FLOAT64_LIT] = ACTIONS(123),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(125),
    [sym_CHAR_LIT] = ACTIONS(123),
    [sym_STR_LIT] = ACTIONS(125),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(123),
    [sym_RSTR_LIT] = ACTIONS(123),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(125),
    [sym_NIL] = ACTIONS(125),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(127),
    [aux_sym_OP0_token1] = ACTIONS(129),
    [aux_sym_OP0_token2] = ACTIONS(127),
    [aux_sym_OP1_token1] = ACTIONS(127),
    [aux_sym_OP2_token1] = ACTIONS(129),
    [aux_sym_OP2_token2] = ACTIONS(129),
    [anon_sym_or] = ACTIONS(129),
    [anon_sym_xor] = ACTIONS(129),
    [anon_sym_and] = ACTIONS(129),
    [anon_sym_EQ_EQ] = ACTIONS(129),
    [anon_sym_LT_EQ] = ACTIONS(129),
    [anon_sym_LT] = ACTIONS(129),
    [anon_sym_GT_EQ] = ACTIONS(129),
    [anon_sym_GT] = ACTIONS(129),
    [anon_sym_BANG_EQ] = ACTIONS(129),
    [anon_sym_in] = ACTIONS(129),
    [anon_sym_notin] = ACTIONS(129),
    [anon_sym_is] = ACTIONS(129),
    [anon_sym_isnot] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_of] = ACTIONS(129),
    [anon_sym_as] = ACTIONS(129),
    [anon_sym_from] = ACTIONS(129),
    [aux_sym_OP5_token1] = ACTIONS(129),
    [anon_sym_DOT_DOT] = ACTIONS(129),
    [anon_sym_AMP] = ACTIONS(129),
    [aux_sym_OP7_token1] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_DASH] = ACTIONS(129),
    [aux_sym_OP8_token1] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [anon_sym_PERCENT] = ACTIONS(129),
    [anon_sym_div] = ACTIONS(129),
    [anon_sym_mod] = ACTIONS(129),
    [anon_sym_shl] = ACTIONS(129),
    [anon_sym_shr] = ACTIONS(129),
    [aux_sym_OP9_token1] = ACTIONS(129),
    [aux_sym_OP10_token1] = ACTIONS(129),
    [aux_sym_IDENT_token1] = ACTIONS(129),
    [sym_INT_LIT] = ACTIONS(129),
    [sym_INT8_LIT] = ACTIONS(129),
    [sym_INT16_LIT] = ACTIONS(129),
    [sym_INT32_LIT] = ACTIONS(129),
    [sym_INT64_LIT] = ACTIONS(129),
    [sym_UINT_LIT] = ACTIONS(129),
    [sym_UINT8_LIT] = ACTIONS(129),
    [sym_UINT16_LIT] = ACTIONS(129),
    [sym_UINT32_LIT] = ACTIONS(129),
    [sym_UINT64_LIT] = ACTIONS(129),
    [sym_FLOAT_LIT] = ACTIONS(129),
    [sym_FLOAT32_LIT] = ACTIONS(129),
    [sym_FLOAT64_LIT] = ACTIONS(127),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(129),
    [sym_CHAR_LIT] = ACTIONS(127),
    [sym_STR_LIT] = ACTIONS(129),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(127),
    [sym_RSTR_LIT] = ACTIONS(127),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(129),
    [sym_NIL] = ACTIONS(129),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(131),
    [aux_sym_OP0_token1] = ACTIONS(133),
    [aux_sym_OP0_token2] = ACTIONS(131),
    [aux_sym_OP1_token1] = ACTIONS(131),
    [aux_sym_OP2_token1] = ACTIONS(133),
    [aux_sym_OP2_token2] = ACTIONS(133),
    [anon_sym_or] = ACTIONS(133),
    [anon_sym_xor] = ACTIONS(133),
    [anon_sym_and] = ACTIONS(133),
    [anon_sym_EQ_EQ] = ACTIONS(133),
    [anon_sym_LT_EQ] = ACTIONS(133),
    [anon_sym_LT] = ACTIONS(133),
    [anon_sym_GT_EQ] = ACTIONS(133),
    [anon_sym_GT] = ACTIONS(133),
    [anon_sym_BANG_EQ] = ACTIONS(133),
    [anon_sym_in] = ACTIONS(133),
    [anon_sym_notin] = ACTIONS(133),
    [anon_sym_is] = ACTIONS(133),
    [anon_sym_isnot] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(133),
    [anon_sym_of] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(133),
    [anon_sym_from] = ACTIONS(133),
    [aux_sym_OP5_token1] = ACTIONS(133),
    [anon_sym_DOT_DOT] = ACTIONS(133),
    [anon_sym_AMP] = ACTIONS(133),
    [aux_sym_OP7_token1] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(133),
    [aux_sym_OP8_token1] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(133),
    [anon_sym_PERCENT] = ACTIONS(133),
    [anon_sym_div] = ACTIONS(133),
    [anon_sym_mod] = ACTIONS(133),
    [anon_sym_shl] = ACTIONS(133),
    [anon_sym_shr] = ACTIONS(133),
    [aux_sym_OP9_token1] = ACTIONS(133),
    [aux_sym_OP10_token1] = ACTIONS(133),
    [aux_sym_IDENT_token1] = ACTIONS(133),
    [sym_INT_LIT] = ACTIONS(133),
    [sym_INT8_LIT] = ACTIONS(133),
    [sym_INT16_LIT] = ACTIONS(133),
    [sym_INT32_LIT] = ACTIONS(133),
    [sym_INT64_LIT] = ACTIONS(133),
    [sym_UINT_LIT] = ACTIONS(133),
    [sym_UINT8_LIT] = ACTIONS(133),
    [sym_UINT16_LIT] = ACTIONS(133),
    [sym_UINT32_LIT] = ACTIONS(133),
    [sym_UINT64_LIT] = ACTIONS(133),
    [sym_FLOAT_LIT] = ACTIONS(133),
    [sym_FLOAT32_LIT] = ACTIONS(133),
    [sym_FLOAT64_LIT] = ACTIONS(131),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(133),
    [sym_CHAR_LIT] = ACTIONS(131),
    [sym_STR_LIT] = ACTIONS(133),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(131),
    [sym_RSTR_LIT] = ACTIONS(131),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(133),
    [sym_NIL] = ACTIONS(133),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(135),
    [aux_sym_OP0_token1] = ACTIONS(137),
    [aux_sym_OP0_token2] = ACTIONS(135),
    [aux_sym_OP1_token1] = ACTIONS(135),
    [aux_sym_OP2_token1] = ACTIONS(137),
    [aux_sym_OP2_token2] = ACTIONS(137),
    [anon_sym_or] = ACTIONS(137),
    [anon_sym_xor] = ACTIONS(137),
    [anon_sym_and] = ACTIONS(137),
    [anon_sym_EQ_EQ] = ACTIONS(137),
    [anon_sym_LT_EQ] = ACTIONS(137),
    [anon_sym_LT] = ACTIONS(137),
    [anon_sym_GT_EQ] = ACTIONS(137),
    [anon_sym_GT] = ACTIONS(137),
    [anon_sym_BANG_EQ] = ACTIONS(137),
    [anon_sym_in] = ACTIONS(137),
    [anon_sym_notin] = ACTIONS(137),
    [anon_sym_is] = ACTIONS(137),
    [anon_sym_isnot] = ACTIONS(137),
    [anon_sym_not] = ACTIONS(137),
    [anon_sym_of] = ACTIONS(137),
    [anon_sym_as] = ACTIONS(137),
    [anon_sym_from] = ACTIONS(137),
    [aux_sym_OP5_token1] = ACTIONS(137),
    [anon_sym_DOT_DOT] = ACTIONS(137),
    [anon_sym_AMP] = ACTIONS(137),
    [aux_sym_OP7_token1] = ACTIONS(137),
    [anon_sym_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [aux_sym_OP8_token1] = ACTIONS(137),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym_PERCENT] = ACTIONS(137),
    [anon_sym_div] = ACTIONS(137),
    [anon_sym_mod] = ACTIONS(137),
    [anon_sym_shl] = ACTIONS(137),
    [anon_sym_shr] = ACTIONS(137),
    [aux_sym_OP9_token1] = ACTIONS(137),
    [aux_sym_OP10_token1] = ACTIONS(137),
    [aux_sym_IDENT_token1] = ACTIONS(137),
    [sym_INT_LIT] = ACTIONS(137),
    [sym_INT8_LIT] = ACTIONS(137),
    [sym_INT16_LIT] = ACTIONS(137),
    [sym_INT32_LIT] = ACTIONS(137),
    [sym_INT64_LIT] = ACTIONS(137),
    [sym_UINT_LIT] = ACTIONS(137),
    [sym_UINT8_LIT] = ACTIONS(137),
    [sym_UINT16_LIT] = ACTIONS(137),
    [sym_UINT32_LIT] = ACTIONS(137),
    [sym_UINT64_LIT] = ACTIONS(137),
    [sym_FLOAT_LIT] = ACTIONS(137),
    [sym_FLOAT32_LIT] = ACTIONS(137),
    [sym_FLOAT64_LIT] = ACTIONS(135),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(137),
    [sym_CHAR_LIT] = ACTIONS(135),
    [sym_STR_LIT] = ACTIONS(137),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(135),
    [sym_RSTR_LIT] = ACTIONS(135),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(137),
    [sym_NIL] = ACTIONS(137),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(139),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(139),
    [aux_sym_OP0_token1] = ACTIONS(141),
    [aux_sym_OP0_token2] = ACTIONS(139),
    [aux_sym_OP1_token1] = ACTIONS(139),
    [aux_sym_OP2_token1] = ACTIONS(141),
    [aux_sym_OP2_token2] = ACTIONS(141),
    [anon_sym_or] = ACTIONS(141),
    [anon_sym_xor] = ACTIONS(141),
    [anon_sym_and] = ACTIONS(141),
    [anon_sym_EQ_EQ] = ACTIONS(141),
    [anon_sym_LT_EQ] = ACTIONS(141),
    [anon_sym_LT] = ACTIONS(141),
    [anon_sym_GT_EQ] = ACTIONS(141),
    [anon_sym_GT] = ACTIONS(141),
    [anon_sym_BANG_EQ] = ACTIONS(141),
    [anon_sym_in] = ACTIONS(141),
    [anon_sym_notin] = ACTIONS(141),
    [anon_sym_is] = ACTIONS(141),
    [anon_sym_isnot] = ACTIONS(141),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_of] = ACTIONS(141),
    [anon_sym_as] = ACTIONS(141),
    [anon_sym_from] = ACTIONS(141),
    [aux_sym_OP5_token1] = ACTIONS(141),
    [anon_sym_DOT_DOT] = ACTIONS(141),
    [anon_sym_AMP] = ACTIONS(141),
    [aux_sym_OP7_token1] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [aux_sym_OP8_token1] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(141),
    [anon_sym_PERCENT] = ACTIONS(141),
    [anon_sym_div] = ACTIONS(141),
    [anon_sym_mod] = ACTIONS(141),
    [anon_sym_shl] = ACTIONS(141),
    [anon_sym_shr] = ACTIONS(141),
    [aux_sym_OP9_token1] = ACTIONS(141),
    [aux_sym_OP10_token1] = ACTIONS(141),
    [aux_sym_IDENT_token1] = ACTIONS(141),
    [sym_INT_LIT] = ACTIONS(141),
    [sym_INT8_LIT] = ACTIONS(141),
    [sym_INT16_LIT] = ACTIONS(141),
    [sym_INT32_LIT] = ACTIONS(141),
    [sym_INT64_LIT] = ACTIONS(141),
    [sym_UINT_LIT] = ACTIONS(141),
    [sym_UINT8_LIT] = ACTIONS(141),
    [sym_UINT16_LIT] = ACTIONS(141),
    [sym_UINT32_LIT] = ACTIONS(141),
    [sym_UINT64_LIT] = ACTIONS(141),
    [sym_FLOAT_LIT] = ACTIONS(141),
    [sym_FLOAT32_LIT] = ACTIONS(141),
    [sym_FLOAT64_LIT] = ACTIONS(139),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(141),
    [sym_CHAR_LIT] = ACTIONS(139),
    [sym_STR_LIT] = ACTIONS(141),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(139),
    [sym_RSTR_LIT] = ACTIONS(139),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(141),
    [sym_NIL] = ACTIONS(141),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(143),
    [aux_sym_OP0_token1] = ACTIONS(145),
    [aux_sym_OP0_token2] = ACTIONS(143),
    [aux_sym_OP1_token1] = ACTIONS(143),
    [aux_sym_OP2_token1] = ACTIONS(145),
    [aux_sym_OP2_token2] = ACTIONS(145),
    [anon_sym_or] = ACTIONS(145),
    [anon_sym_xor] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(145),
    [anon_sym_EQ_EQ] = ACTIONS(145),
    [anon_sym_LT_EQ] = ACTIONS(145),
    [anon_sym_LT] = ACTIONS(145),
    [anon_sym_GT_EQ] = ACTIONS(145),
    [anon_sym_GT] = ACTIONS(145),
    [anon_sym_BANG_EQ] = ACTIONS(145),
    [anon_sym_in] = ACTIONS(145),
    [anon_sym_notin] = ACTIONS(145),
    [anon_sym_is] = ACTIONS(145),
    [anon_sym_isnot] = ACTIONS(145),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_of] = ACTIONS(145),
    [anon_sym_as] = ACTIONS(145),
    [anon_sym_from] = ACTIONS(145),
    [aux_sym_OP5_token1] = ACTIONS(145),
    [anon_sym_DOT_DOT] = ACTIONS(145),
    [anon_sym_AMP] = ACTIONS(145),
    [aux_sym_OP7_token1] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(145),
    [aux_sym_OP8_token1] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_SLASH] = ACTIONS(145),
    [anon_sym_PERCENT] = ACTIONS(145),
    [anon_sym_div] = ACTIONS(145),
    [anon_sym_mod] = ACTIONS(145),
    [anon_sym_shl] = ACTIONS(145),
    [anon_sym_shr] = ACTIONS(145),
    [aux_sym_OP9_token1] = ACTIONS(145),
    [aux_sym_OP10_token1] = ACTIONS(145),
    [aux_sym_IDENT_token1] = ACTIONS(145),
    [sym_INT_LIT] = ACTIONS(145),
    [sym_INT8_LIT] = ACTIONS(145),
    [sym_INT16_LIT] = ACTIONS(145),
    [sym_INT32_LIT] = ACTIONS(145),
    [sym_INT64_LIT] = ACTIONS(145),
    [sym_UINT_LIT] = ACTIONS(145),
    [sym_UINT8_LIT] = ACTIONS(145),
    [sym_UINT16_LIT] = ACTIONS(145),
    [sym_UINT32_LIT] = ACTIONS(145),
    [sym_UINT64_LIT] = ACTIONS(145),
    [sym_FLOAT_LIT] = ACTIONS(145),
    [sym_FLOAT32_LIT] = ACTIONS(145),
    [sym_FLOAT64_LIT] = ACTIONS(143),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(145),
    [sym_CHAR_LIT] = ACTIONS(143),
    [sym_STR_LIT] = ACTIONS(145),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(143),
    [sym_RSTR_LIT] = ACTIONS(143),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(145),
    [sym_NIL] = ACTIONS(145),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(147),
    [aux_sym_OP0_token1] = ACTIONS(149),
    [aux_sym_OP0_token2] = ACTIONS(147),
    [aux_sym_OP1_token1] = ACTIONS(147),
    [aux_sym_OP2_token1] = ACTIONS(149),
    [aux_sym_OP2_token2] = ACTIONS(149),
    [anon_sym_or] = ACTIONS(149),
    [anon_sym_xor] = ACTIONS(149),
    [anon_sym_and] = ACTIONS(149),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(149),
    [anon_sym_notin] = ACTIONS(149),
    [anon_sym_is] = ACTIONS(149),
    [anon_sym_isnot] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_of] = ACTIONS(149),
    [anon_sym_as] = ACTIONS(149),
    [anon_sym_from] = ACTIONS(149),
    [aux_sym_OP5_token1] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(149),
    [anon_sym_AMP] = ACTIONS(149),
    [aux_sym_OP7_token1] = ACTIONS(149),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [aux_sym_OP8_token1] = ACTIONS(149),
    [anon_sym_STAR] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [anon_sym_PERCENT] = ACTIONS(149),
    [anon_sym_div] = ACTIONS(149),
    [anon_sym_mod] = ACTIONS(149),
    [anon_sym_shl] = ACTIONS(149),
    [anon_sym_shr] = ACTIONS(149),
    [aux_sym_OP9_token1] = ACTIONS(149),
    [aux_sym_OP10_token1] = ACTIONS(149),
    [aux_sym_IDENT_token1] = ACTIONS(149),
    [sym_INT_LIT] = ACTIONS(149),
    [sym_INT8_LIT] = ACTIONS(149),
    [sym_INT16_LIT] = ACTIONS(149),
    [sym_INT32_LIT] = ACTIONS(149),
    [sym_INT64_LIT] = ACTIONS(149),
    [sym_UINT_LIT] = ACTIONS(149),
    [sym_UINT8_LIT] = ACTIONS(149),
    [sym_UINT16_LIT] = ACTIONS(149),
    [sym_UINT32_LIT] = ACTIONS(149),
    [sym_UINT64_LIT] = ACTIONS(149),
    [sym_FLOAT_LIT] = ACTIONS(149),
    [sym_FLOAT32_LIT] = ACTIONS(149),
    [sym_FLOAT64_LIT] = ACTIONS(147),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(149),
    [sym_CHAR_LIT] = ACTIONS(147),
    [sym_STR_LIT] = ACTIONS(149),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(147),
    [sym_RSTR_LIT] = ACTIONS(147),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(149),
    [sym_NIL] = ACTIONS(149),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(151),
    [aux_sym_OP0_token1] = ACTIONS(153),
    [aux_sym_OP0_token2] = ACTIONS(151),
    [aux_sym_OP1_token1] = ACTIONS(151),
    [aux_sym_OP2_token1] = ACTIONS(153),
    [aux_sym_OP2_token2] = ACTIONS(153),
    [anon_sym_or] = ACTIONS(153),
    [anon_sym_xor] = ACTIONS(153),
    [anon_sym_and] = ACTIONS(153),
    [anon_sym_EQ_EQ] = ACTIONS(153),
    [anon_sym_LT_EQ] = ACTIONS(153),
    [anon_sym_LT] = ACTIONS(153),
    [anon_sym_GT_EQ] = ACTIONS(153),
    [anon_sym_GT] = ACTIONS(153),
    [anon_sym_BANG_EQ] = ACTIONS(153),
    [anon_sym_in] = ACTIONS(153),
    [anon_sym_notin] = ACTIONS(153),
    [anon_sym_is] = ACTIONS(153),
    [anon_sym_isnot] = ACTIONS(153),
    [anon_sym_not] = ACTIONS(153),
    [anon_sym_of] = ACTIONS(153),
    [anon_sym_as] = ACTIONS(153),
    [anon_sym_from] = ACTIONS(153),
    [aux_sym_OP5_token1] = ACTIONS(153),
    [anon_sym_DOT_DOT] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(153),
    [aux_sym_OP7_token1] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [aux_sym_OP8_token1] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_SLASH] = ACTIONS(153),
    [anon_sym_PERCENT] = ACTIONS(153),
    [anon_sym_div] = ACTIONS(153),
    [anon_sym_mod] = ACTIONS(153),
    [anon_sym_shl] = ACTIONS(153),
    [anon_sym_shr] = ACTIONS(153),
    [aux_sym_OP9_token1] = ACTIONS(153),
    [aux_sym_OP10_token1] = ACTIONS(153),
    [aux_sym_IDENT_token1] = ACTIONS(153),
    [sym_INT_LIT] = ACTIONS(153),
    [sym_INT8_LIT] = ACTIONS(153),
    [sym_INT16_LIT] = ACTIONS(153),
    [sym_INT32_LIT] = ACTIONS(153),
    [sym_INT64_LIT] = ACTIONS(153),
    [sym_UINT_LIT] = ACTIONS(153),
    [sym_UINT8_LIT] = ACTIONS(153),
    [sym_UINT16_LIT] = ACTIONS(153),
    [sym_UINT32_LIT] = ACTIONS(153),
    [sym_UINT64_LIT] = ACTIONS(153),
    [sym_FLOAT_LIT] = ACTIONS(153),
    [sym_FLOAT32_LIT] = ACTIONS(153),
    [sym_FLOAT64_LIT] = ACTIONS(151),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(153),
    [sym_CHAR_LIT] = ACTIONS(151),
    [sym_STR_LIT] = ACTIONS(153),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(151),
    [sym_RSTR_LIT] = ACTIONS(151),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(153),
    [sym_NIL] = ACTIONS(153),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(155),
    [aux_sym_OP0_token1] = ACTIONS(157),
    [aux_sym_OP0_token2] = ACTIONS(155),
    [aux_sym_OP1_token1] = ACTIONS(155),
    [aux_sym_OP2_token1] = ACTIONS(157),
    [aux_sym_OP2_token2] = ACTIONS(157),
    [anon_sym_or] = ACTIONS(157),
    [anon_sym_xor] = ACTIONS(157),
    [anon_sym_and] = ACTIONS(157),
    [anon_sym_EQ_EQ] = ACTIONS(157),
    [anon_sym_LT_EQ] = ACTIONS(157),
    [anon_sym_LT] = ACTIONS(157),
    [anon_sym_GT_EQ] = ACTIONS(157),
    [anon_sym_GT] = ACTIONS(157),
    [anon_sym_BANG_EQ] = ACTIONS(157),
    [anon_sym_in] = ACTIONS(157),
    [anon_sym_notin] = ACTIONS(157),
    [anon_sym_is] = ACTIONS(157),
    [anon_sym_isnot] = ACTIONS(157),
    [anon_sym_not] = ACTIONS(157),
    [anon_sym_of] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(157),
    [anon_sym_from] = ACTIONS(157),
    [aux_sym_OP5_token1] = ACTIONS(157),
    [anon_sym_DOT_DOT] = ACTIONS(157),
    [anon_sym_AMP] = ACTIONS(157),
    [aux_sym_OP7_token1] = ACTIONS(157),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [aux_sym_OP8_token1] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [anon_sym_PERCENT] = ACTIONS(157),
    [anon_sym_div] = ACTIONS(157),
    [anon_sym_mod] = ACTIONS(157),
    [anon_sym_shl] = ACTIONS(157),
    [anon_sym_shr] = ACTIONS(157),
    [aux_sym_OP9_token1] = ACTIONS(157),
    [aux_sym_OP10_token1] = ACTIONS(157),
    [aux_sym_IDENT_token1] = ACTIONS(157),
    [sym_INT_LIT] = ACTIONS(157),
    [sym_INT8_LIT] = ACTIONS(157),
    [sym_INT16_LIT] = ACTIONS(157),
    [sym_INT32_LIT] = ACTIONS(157),
    [sym_INT64_LIT] = ACTIONS(157),
    [sym_UINT_LIT] = ACTIONS(157),
    [sym_UINT8_LIT] = ACTIONS(157),
    [sym_UINT16_LIT] = ACTIONS(157),
    [sym_UINT32_LIT] = ACTIONS(157),
    [sym_UINT64_LIT] = ACTIONS(157),
    [sym_FLOAT_LIT] = ACTIONS(157),
    [sym_FLOAT32_LIT] = ACTIONS(157),
    [sym_FLOAT64_LIT] = ACTIONS(155),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(157),
    [sym_CHAR_LIT] = ACTIONS(155),
    [sym_STR_LIT] = ACTIONS(157),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(155),
    [sym_RSTR_LIT] = ACTIONS(155),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(157),
    [sym_NIL] = ACTIONS(157),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(159),
    [aux_sym_OP0_token1] = ACTIONS(161),
    [aux_sym_OP0_token2] = ACTIONS(159),
    [aux_sym_OP1_token1] = ACTIONS(159),
    [aux_sym_OP2_token1] = ACTIONS(161),
    [aux_sym_OP2_token2] = ACTIONS(161),
    [anon_sym_or] = ACTIONS(161),
    [anon_sym_xor] = ACTIONS(161),
    [anon_sym_and] = ACTIONS(161),
    [anon_sym_EQ_EQ] = ACTIONS(161),
    [anon_sym_LT_EQ] = ACTIONS(161),
    [anon_sym_LT] = ACTIONS(161),
    [anon_sym_GT_EQ] = ACTIONS(161),
    [anon_sym_GT] = ACTIONS(161),
    [anon_sym_BANG_EQ] = ACTIONS(161),
    [anon_sym_in] = ACTIONS(161),
    [anon_sym_notin] = ACTIONS(161),
    [anon_sym_is] = ACTIONS(161),
    [anon_sym_isnot] = ACTIONS(161),
    [anon_sym_not] = ACTIONS(161),
    [anon_sym_of] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(161),
    [anon_sym_from] = ACTIONS(161),
    [aux_sym_OP5_token1] = ACTIONS(161),
    [anon_sym_DOT_DOT] = ACTIONS(161),
    [anon_sym_AMP] = ACTIONS(161),
    [aux_sym_OP7_token1] = ACTIONS(161),
    [anon_sym_PLUS] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(161),
    [aux_sym_OP8_token1] = ACTIONS(161),
    [anon_sym_STAR] = ACTIONS(161),
    [anon_sym_SLASH] = ACTIONS(161),
    [anon_sym_PERCENT] = ACTIONS(161),
    [anon_sym_div] = ACTIONS(161),
    [anon_sym_mod] = ACTIONS(161),
    [anon_sym_shl] = ACTIONS(161),
    [anon_sym_shr] = ACTIONS(161),
    [aux_sym_OP9_token1] = ACTIONS(161),
    [aux_sym_OP10_token1] = ACTIONS(161),
    [aux_sym_IDENT_token1] = ACTIONS(161),
    [sym_INT_LIT] = ACTIONS(161),
    [sym_INT8_LIT] = ACTIONS(161),
    [sym_INT16_LIT] = ACTIONS(161),
    [sym_INT32_LIT] = ACTIONS(161),
    [sym_INT64_LIT] = ACTIONS(161),
    [sym_UINT_LIT] = ACTIONS(161),
    [sym_UINT8_LIT] = ACTIONS(161),
    [sym_UINT16_LIT] = ACTIONS(161),
    [sym_UINT32_LIT] = ACTIONS(161),
    [sym_UINT64_LIT] = ACTIONS(161),
    [sym_FLOAT_LIT] = ACTIONS(161),
    [sym_FLOAT32_LIT] = ACTIONS(161),
    [sym_FLOAT64_LIT] = ACTIONS(159),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(161),
    [sym_CHAR_LIT] = ACTIONS(159),
    [sym_STR_LIT] = ACTIONS(161),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(159),
    [sym_RSTR_LIT] = ACTIONS(159),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(161),
    [sym_NIL] = ACTIONS(161),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [aux_sym_DOTLIKEOP_token1] = ACTIONS(163),
    [aux_sym_OP0_token1] = ACTIONS(165),
    [aux_sym_OP0_token2] = ACTIONS(163),
    [aux_sym_OP1_token1] = ACTIONS(163),
    [aux_sym_OP2_token1] = ACTIONS(165),
    [aux_sym_OP2_token2] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [anon_sym_xor] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_EQ_EQ] = ACTIONS(165),
    [anon_sym_LT_EQ] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(165),
    [anon_sym_GT_EQ] = ACTIONS(165),
    [anon_sym_GT] = ACTIONS(165),
    [anon_sym_BANG_EQ] = ACTIONS(165),
    [anon_sym_in] = ACTIONS(165),
    [anon_sym_notin] = ACTIONS(165),
    [anon_sym_is] = ACTIONS(165),
    [anon_sym_isnot] = ACTIONS(165),
    [anon_sym_not] = ACTIONS(165),
    [anon_sym_of] = ACTIONS(165),
    [anon_sym_as] = ACTIONS(165),
    [anon_sym_from] = ACTIONS(165),
    [aux_sym_OP5_token1] = ACTIONS(165),
    [anon_sym_DOT_DOT] = ACTIONS(165),
    [anon_sym_AMP] = ACTIONS(165),
    [aux_sym_OP7_token1] = ACTIONS(165),
    [anon_sym_PLUS] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(165),
    [aux_sym_OP8_token1] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(165),
    [anon_sym_SLASH] = ACTIONS(165),
    [anon_sym_PERCENT] = ACTIONS(165),
    [anon_sym_div] = ACTIONS(165),
    [anon_sym_mod] = ACTIONS(165),
    [anon_sym_shl] = ACTIONS(165),
    [anon_sym_shr] = ACTIONS(165),
    [aux_sym_OP9_token1] = ACTIONS(165),
    [aux_sym_OP10_token1] = ACTIONS(165),
    [aux_sym_IDENT_token1] = ACTIONS(165),
    [sym_INT_LIT] = ACTIONS(165),
    [sym_INT8_LIT] = ACTIONS(165),
    [sym_INT16_LIT] = ACTIONS(165),
    [sym_INT32_LIT] = ACTIONS(165),
    [sym_INT64_LIT] = ACTIONS(165),
    [sym_UINT_LIT] = ACTIONS(165),
    [sym_UINT8_LIT] = ACTIONS(165),
    [sym_UINT16_LIT] = ACTIONS(165),
    [sym_UINT32_LIT] = ACTIONS(165),
    [sym_UINT64_LIT] = ACTIONS(165),
    [sym_FLOAT_LIT] = ACTIONS(165),
    [sym_FLOAT32_LIT] = ACTIONS(165),
    [sym_FLOAT64_LIT] = ACTIONS(163),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(165),
    [sym_CHAR_LIT] = ACTIONS(163),
    [sym_STR_LIT] = ACTIONS(165),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(163),
    [sym_RSTR_LIT] = ACTIONS(163),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(165),
    [sym_NIL] = ACTIONS(165),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(167), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(169), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(25), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [10] = 3,
    ACTIONS(171), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(173), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(23), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [20] = 3,
    ACTIONS(167), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(175), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(25), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [30] = 3,
    ACTIONS(177), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(179), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(21), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [40] = 3,
    ACTIONS(181), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(184), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(25), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [50] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [54] = 1,
    ACTIONS(188), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 10,
  [SMALL_STATE(23)] = 20,
  [SMALL_STATE(24)] = 30,
  [SMALL_STATE(25)] = 40,
  [SMALL_STATE(26)] = 50,
  [SMALL_STATE(27)] = 54,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(14),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(19),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(19),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(20),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(8),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(14),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(9),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(11),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(27),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(24),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIPLESTR_LIT, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRIPLESTR_LIT, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP3, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP3, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP4, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP4, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP5, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP5, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP7, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP7, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP8, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP8, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP9, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP9, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP10, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP10, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP6, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP6, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIPLESTR_LIT, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRIPLESTR_LIT, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalizedLit, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalizedLit, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP1, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP1, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP0, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP0, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OP2, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_OP2, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_TRIPLESTR_LIT_repeat1, 2), SHIFT_REPEAT(25),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_TRIPLESTR_LIT_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Nim(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
