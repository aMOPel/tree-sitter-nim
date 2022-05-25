#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 9
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_INT_LIT = 1,
  sym_INT8_LIT = 2,
  sym_INT16_LIT = 3,
  sym_INT32_LIT = 4,
  sym_INT64_LIT = 5,
  sym_UINT_LIT = 6,
  sym_UINT8_LIT = 7,
  sym_UINT16_LIT = 8,
  sym_UINT32_LIT = 9,
  sym_UINT64_LIT = 10,
  sym_FLOAT_LIT = 11,
  sym_FLOAT32_LIT = 12,
  sym_FLOAT64_LIT = 13,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 14,
  aux_sym_TRIPLESTR_LIT_token1 = 15,
  aux_sym_TRIPLESTR_LIT_token2 = 16,
  aux_sym_RSTR_LIT_token1 = 17,
  aux_sym_RSTR_LIT_token2 = 18,
  anon_sym_DQUOTE = 19,
  sym_CHAR_LIT = 20,
  sym_STR_LIT = 21,
  sym_module = 22,
  sym__definition = 23,
  sym_literal = 24,
  sym_TRIPLESTR_LIT = 25,
  sym_RSTR_LIT = 26,
  aux_sym_module_repeat1 = 27,
  aux_sym_TRIPLESTR_LIT_repeat1 = 28,
  aux_sym_RSTR_LIT_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_TRIPLESTR_LIT_token1] = "TRIPLESTR_LIT_token1",
  [aux_sym_TRIPLESTR_LIT_token2] = "TRIPLESTR_LIT_token2",
  [aux_sym_RSTR_LIT_token1] = "RSTR_LIT_token1",
  [aux_sym_RSTR_LIT_token2] = "RSTR_LIT_token2",
  [anon_sym_DQUOTE] = "\"",
  [sym_CHAR_LIT] = "CHAR_LIT",
  [sym_STR_LIT] = "STR_LIT",
  [sym_module] = "module",
  [sym__definition] = "_definition",
  [sym_literal] = "literal",
  [sym_TRIPLESTR_LIT] = "TRIPLESTR_LIT",
  [sym_RSTR_LIT] = "RSTR_LIT",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_TRIPLESTR_LIT_repeat1] = "TRIPLESTR_LIT_repeat1",
  [aux_sym_RSTR_LIT_repeat1] = "RSTR_LIT_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_TRIPLESTR_LIT_token1] = aux_sym_TRIPLESTR_LIT_token1,
  [aux_sym_TRIPLESTR_LIT_token2] = aux_sym_TRIPLESTR_LIT_token2,
  [aux_sym_RSTR_LIT_token1] = aux_sym_RSTR_LIT_token1,
  [aux_sym_RSTR_LIT_token2] = aux_sym_RSTR_LIT_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_CHAR_LIT] = sym_CHAR_LIT,
  [sym_STR_LIT] = sym_STR_LIT,
  [sym_module] = sym_module,
  [sym__definition] = sym__definition,
  [sym_literal] = sym_literal,
  [sym_TRIPLESTR_LIT] = sym_TRIPLESTR_LIT,
  [sym_RSTR_LIT] = sym_RSTR_LIT,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_TRIPLESTR_LIT_repeat1] = aux_sym_TRIPLESTR_LIT_repeat1,
  [aux_sym_RSTR_LIT_repeat1] = aux_sym_RSTR_LIT_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_RSTR_LIT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_RSTR_LIT_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_CHAR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_STR_LIT] = {
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
  [sym_TRIPLESTR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_RSTR_LIT] = {
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
  [aux_sym_RSTR_LIT_repeat1] = {
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
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(77);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'u') ADVANCE(5);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '{') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      if (sym_CHAR_LIT_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(82);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(53);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 23:
      if (lookahead == '4') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == '4') ADVANCE(61);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(19);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 34:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 45:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(76);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(42);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(43);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(32);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_INT8_LIT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_INT16_LIT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_INT32_LIT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_INT64_LIT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_UINT_LIT);
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_UINT8_LIT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_UINT16_LIT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_UINT32_LIT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_UINT64_LIT);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_FLOAT_LIT);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_FLOAT_LIT);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(70);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_FLOAT64_LIT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token1);
      if (lookahead == '"') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token1);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_RSTR_LIT_token1);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_RSTR_LIT_token2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_RSTR_LIT_token2);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_CHAR_LIT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_CHAR_LIT);
      if (lookahead == '\'') ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_STR_LIT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_STR_LIT);
      if (lookahead == '"') ADVANCE(72);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_STR_LIT);
      if (lookahead == '"') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [aux_sym_RSTR_LIT_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_CHAR_LIT] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(15),
    [sym__definition] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_TRIPLESTR_LIT] = STATE(4),
    [sym_RSTR_LIT] = STATE(4),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_INT_LIT] = ACTIONS(5),
    [sym_INT8_LIT] = ACTIONS(7),
    [sym_INT16_LIT] = ACTIONS(7),
    [sym_INT32_LIT] = ACTIONS(7),
    [sym_INT64_LIT] = ACTIONS(7),
    [sym_UINT_LIT] = ACTIONS(5),
    [sym_UINT8_LIT] = ACTIONS(7),
    [sym_UINT16_LIT] = ACTIONS(7),
    [sym_UINT32_LIT] = ACTIONS(7),
    [sym_UINT64_LIT] = ACTIONS(7),
    [sym_FLOAT_LIT] = ACTIONS(5),
    [sym_FLOAT32_LIT] = ACTIONS(5),
    [sym_FLOAT64_LIT] = ACTIONS(7),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(9),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(11),
    [sym_CHAR_LIT] = ACTIONS(7),
    [sym_STR_LIT] = ACTIONS(5),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_TRIPLESTR_LIT] = STATE(4),
    [sym_RSTR_LIT] = STATE(4),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_INT_LIT] = ACTIONS(5),
    [sym_INT8_LIT] = ACTIONS(7),
    [sym_INT16_LIT] = ACTIONS(7),
    [sym_INT32_LIT] = ACTIONS(7),
    [sym_INT64_LIT] = ACTIONS(7),
    [sym_UINT_LIT] = ACTIONS(5),
    [sym_UINT8_LIT] = ACTIONS(7),
    [sym_UINT16_LIT] = ACTIONS(7),
    [sym_UINT32_LIT] = ACTIONS(7),
    [sym_UINT64_LIT] = ACTIONS(7),
    [sym_FLOAT_LIT] = ACTIONS(5),
    [sym_FLOAT32_LIT] = ACTIONS(5),
    [sym_FLOAT64_LIT] = ACTIONS(7),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(9),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(11),
    [sym_CHAR_LIT] = ACTIONS(7),
    [sym_STR_LIT] = ACTIONS(5),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_TRIPLESTR_LIT] = STATE(4),
    [sym_RSTR_LIT] = STATE(4),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_INT_LIT] = ACTIONS(17),
    [sym_INT8_LIT] = ACTIONS(20),
    [sym_INT16_LIT] = ACTIONS(20),
    [sym_INT32_LIT] = ACTIONS(20),
    [sym_INT64_LIT] = ACTIONS(20),
    [sym_UINT_LIT] = ACTIONS(17),
    [sym_UINT8_LIT] = ACTIONS(20),
    [sym_UINT16_LIT] = ACTIONS(20),
    [sym_UINT32_LIT] = ACTIONS(20),
    [sym_UINT64_LIT] = ACTIONS(20),
    [sym_FLOAT_LIT] = ACTIONS(17),
    [sym_FLOAT32_LIT] = ACTIONS(17),
    [sym_FLOAT64_LIT] = ACTIONS(20),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(23),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(26),
    [sym_CHAR_LIT] = ACTIONS(20),
    [sym_STR_LIT] = ACTIONS(17),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_INT_LIT] = ACTIONS(31),
    [sym_INT8_LIT] = ACTIONS(29),
    [sym_INT16_LIT] = ACTIONS(29),
    [sym_INT32_LIT] = ACTIONS(29),
    [sym_INT64_LIT] = ACTIONS(29),
    [sym_UINT_LIT] = ACTIONS(31),
    [sym_UINT8_LIT] = ACTIONS(29),
    [sym_UINT16_LIT] = ACTIONS(29),
    [sym_UINT32_LIT] = ACTIONS(29),
    [sym_UINT64_LIT] = ACTIONS(29),
    [sym_FLOAT_LIT] = ACTIONS(31),
    [sym_FLOAT32_LIT] = ACTIONS(31),
    [sym_FLOAT64_LIT] = ACTIONS(29),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(29),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(29),
    [sym_CHAR_LIT] = ACTIONS(29),
    [sym_STR_LIT] = ACTIONS(31),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_INT_LIT] = ACTIONS(35),
    [sym_INT8_LIT] = ACTIONS(33),
    [sym_INT16_LIT] = ACTIONS(33),
    [sym_INT32_LIT] = ACTIONS(33),
    [sym_INT64_LIT] = ACTIONS(33),
    [sym_UINT_LIT] = ACTIONS(35),
    [sym_UINT8_LIT] = ACTIONS(33),
    [sym_UINT16_LIT] = ACTIONS(33),
    [sym_UINT32_LIT] = ACTIONS(33),
    [sym_UINT64_LIT] = ACTIONS(33),
    [sym_FLOAT_LIT] = ACTIONS(35),
    [sym_FLOAT32_LIT] = ACTIONS(35),
    [sym_FLOAT64_LIT] = ACTIONS(33),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(33),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(33),
    [sym_CHAR_LIT] = ACTIONS(33),
    [sym_STR_LIT] = ACTIONS(35),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_INT_LIT] = ACTIONS(39),
    [sym_INT8_LIT] = ACTIONS(37),
    [sym_INT16_LIT] = ACTIONS(37),
    [sym_INT32_LIT] = ACTIONS(37),
    [sym_INT64_LIT] = ACTIONS(37),
    [sym_UINT_LIT] = ACTIONS(39),
    [sym_UINT8_LIT] = ACTIONS(37),
    [sym_UINT16_LIT] = ACTIONS(37),
    [sym_UINT32_LIT] = ACTIONS(37),
    [sym_UINT64_LIT] = ACTIONS(37),
    [sym_FLOAT_LIT] = ACTIONS(39),
    [sym_FLOAT32_LIT] = ACTIONS(39),
    [sym_FLOAT64_LIT] = ACTIONS(37),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(37),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(37),
    [sym_CHAR_LIT] = ACTIONS(37),
    [sym_STR_LIT] = ACTIONS(39),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_INT_LIT] = ACTIONS(43),
    [sym_INT8_LIT] = ACTIONS(41),
    [sym_INT16_LIT] = ACTIONS(41),
    [sym_INT32_LIT] = ACTIONS(41),
    [sym_INT64_LIT] = ACTIONS(41),
    [sym_UINT_LIT] = ACTIONS(43),
    [sym_UINT8_LIT] = ACTIONS(41),
    [sym_UINT16_LIT] = ACTIONS(41),
    [sym_UINT32_LIT] = ACTIONS(41),
    [sym_UINT64_LIT] = ACTIONS(41),
    [sym_FLOAT_LIT] = ACTIONS(43),
    [sym_FLOAT32_LIT] = ACTIONS(43),
    [sym_FLOAT64_LIT] = ACTIONS(41),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(41),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(41),
    [sym_CHAR_LIT] = ACTIONS(41),
    [sym_STR_LIT] = ACTIONS(43),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_INT_LIT] = ACTIONS(47),
    [sym_INT8_LIT] = ACTIONS(45),
    [sym_INT16_LIT] = ACTIONS(45),
    [sym_INT32_LIT] = ACTIONS(45),
    [sym_INT64_LIT] = ACTIONS(45),
    [sym_UINT_LIT] = ACTIONS(47),
    [sym_UINT8_LIT] = ACTIONS(45),
    [sym_UINT16_LIT] = ACTIONS(45),
    [sym_UINT32_LIT] = ACTIONS(45),
    [sym_UINT64_LIT] = ACTIONS(45),
    [sym_FLOAT_LIT] = ACTIONS(47),
    [sym_FLOAT32_LIT] = ACTIONS(47),
    [sym_FLOAT64_LIT] = ACTIONS(45),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(45),
    [aux_sym_RSTR_LIT_token1] = ACTIONS(45),
    [sym_CHAR_LIT] = ACTIONS(45),
    [sym_STR_LIT] = ACTIONS(47),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(49), 1,
      aux_sym_TRIPLESTR_LIT_token1,
    ACTIONS(51), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    STATE(11), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [10] = 3,
    ACTIONS(53), 1,
      aux_sym_RSTR_LIT_token2,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      aux_sym_RSTR_LIT_repeat1,
  [20] = 3,
    ACTIONS(57), 1,
      aux_sym_TRIPLESTR_LIT_token1,
    ACTIONS(59), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    STATE(13), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [30] = 3,
    ACTIONS(61), 1,
      aux_sym_RSTR_LIT_token2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym_RSTR_LIT_repeat1,
  [40] = 3,
    ACTIONS(65), 1,
      aux_sym_TRIPLESTR_LIT_token1,
    ACTIONS(68), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    STATE(13), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [50] = 3,
    ACTIONS(70), 1,
      aux_sym_RSTR_LIT_token2,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      aux_sym_RSTR_LIT_repeat1,
  [60] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(9)] = 0,
  [SMALL_STATE(10)] = 10,
  [SMALL_STATE(11)] = 20,
  [SMALL_STATE(12)] = 30,
  [SMALL_STATE(13)] = 40,
  [SMALL_STATE(14)] = 50,
  [SMALL_STATE(15)] = 60,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIPLESTR_LIT, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRIPLESTR_LIT, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RSTR_LIT, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_RSTR_LIT, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIPLESTR_LIT, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRIPLESTR_LIT, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_RSTR_LIT, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_RSTR_LIT, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_TRIPLESTR_LIT_repeat1, 2), SHIFT_REPEAT(13),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_TRIPLESTR_LIT_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_RSTR_LIT_repeat1, 2), SHIFT_REPEAT(14),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_RSTR_LIT_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
