#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_int_lit_token1 = 1,
  aux_sym_int_lit_token2 = 2,
  aux_sym_int_lit_token3 = 3,
  aux_sym_int_lit_token4 = 4,
  sym_int_suffix = 5,
  aux_sym_float_lit_token1 = 6,
  sym_float_suffix = 7,
  sym_module = 8,
  sym_literal = 9,
  sym_int_lit = 10,
  sym_float_lit = 11,
  aux_sym_module_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_int_lit_token1] = "int_lit_token1",
  [aux_sym_int_lit_token2] = "int_lit_token2",
  [aux_sym_int_lit_token3] = "int_lit_token3",
  [aux_sym_int_lit_token4] = "int_lit_token4",
  [sym_int_suffix] = "int_suffix",
  [aux_sym_float_lit_token1] = "float_lit_token1",
  [sym_float_suffix] = "float_suffix",
  [sym_module] = "module",
  [sym_literal] = "literal",
  [sym_int_lit] = "int_lit",
  [sym_float_lit] = "float_lit",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_int_lit_token1] = aux_sym_int_lit_token1,
  [aux_sym_int_lit_token2] = aux_sym_int_lit_token2,
  [aux_sym_int_lit_token3] = aux_sym_int_lit_token3,
  [aux_sym_int_lit_token4] = aux_sym_int_lit_token4,
  [sym_int_suffix] = sym_int_suffix,
  [aux_sym_float_lit_token1] = aux_sym_float_lit_token1,
  [sym_float_suffix] = sym_float_suffix,
  [sym_module] = sym_module,
  [sym_literal] = sym_literal,
  [sym_int_lit] = sym_int_lit,
  [sym_float_lit] = sym_float_lit,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_int_suffix] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_lit_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_float_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
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
  [aux_sym_module_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '4') ADVANCE(26);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '6') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(26);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_int_lit_token1);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_int_lit_token2);
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(10);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_int_lit_token2);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_int_lit_token3);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_int_lit_token4);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_int_suffix);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_int_suffix);
      if (lookahead == '1') ADVANCE(6);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(5);
      if (lookahead == '8') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_float_lit_token1);
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_float_lit_token1);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_float_suffix);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_float_suffix);
      if (lookahead == '3') ADVANCE(2);
      if (lookahead == '6') ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_int_lit_token1] = ACTIONS(1),
    [aux_sym_int_lit_token2] = ACTIONS(1),
    [aux_sym_int_lit_token3] = ACTIONS(1),
    [aux_sym_int_lit_token4] = ACTIONS(1),
    [sym_int_suffix] = ACTIONS(1),
    [aux_sym_float_lit_token1] = ACTIONS(1),
    [sym_float_suffix] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(10),
    [sym_literal] = STATE(2),
    [sym_int_lit] = STATE(6),
    [sym_float_lit] = STATE(7),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_int_lit_token1] = ACTIONS(5),
    [aux_sym_int_lit_token2] = ACTIONS(7),
    [aux_sym_int_lit_token3] = ACTIONS(5),
    [aux_sym_int_lit_token4] = ACTIONS(5),
  },
  [2] = {
    [sym_literal] = STATE(3),
    [sym_int_lit] = STATE(6),
    [sym_float_lit] = STATE(7),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [aux_sym_int_lit_token1] = ACTIONS(5),
    [aux_sym_int_lit_token2] = ACTIONS(7),
    [aux_sym_int_lit_token3] = ACTIONS(5),
    [aux_sym_int_lit_token4] = ACTIONS(5),
  },
  [3] = {
    [sym_literal] = STATE(3),
    [sym_int_lit] = STATE(6),
    [sym_float_lit] = STATE(7),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [aux_sym_int_lit_token1] = ACTIONS(13),
    [aux_sym_int_lit_token2] = ACTIONS(16),
    [aux_sym_int_lit_token3] = ACTIONS(13),
    [aux_sym_int_lit_token4] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_int_lit_token1] = ACTIONS(19),
    [aux_sym_int_lit_token2] = ACTIONS(21),
    [aux_sym_int_lit_token3] = ACTIONS(19),
    [aux_sym_int_lit_token4] = ACTIONS(19),
    [sym_int_suffix] = ACTIONS(19),
    [aux_sym_float_lit_token1] = ACTIONS(23),
    [sym_float_suffix] = ACTIONS(19),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_int_lit_token1] = ACTIONS(19),
    [aux_sym_int_lit_token2] = ACTIONS(21),
    [aux_sym_int_lit_token3] = ACTIONS(19),
    [aux_sym_int_lit_token4] = ACTIONS(19),
    [sym_int_suffix] = ACTIONS(19),
    [sym_float_suffix] = ACTIONS(19),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_int_lit_token1] = ACTIONS(25),
    [aux_sym_int_lit_token2] = ACTIONS(27),
    [aux_sym_int_lit_token3] = ACTIONS(25),
    [aux_sym_int_lit_token4] = ACTIONS(25),
    [sym_int_suffix] = ACTIONS(29),
    [sym_float_suffix] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(27), 1,
      aux_sym_int_lit_token2,
    ACTIONS(29), 1,
      sym_float_suffix,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
  [13] = 2,
    ACTIONS(33), 1,
      aux_sym_int_lit_token2,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
      sym_float_suffix,
  [24] = 2,
    ACTIONS(37), 1,
      aux_sym_int_lit_token2,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      aux_sym_int_lit_token1,
      aux_sym_int_lit_token3,
      aux_sym_int_lit_token4,
  [34] = 1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 13,
  [SMALL_STATE(9)] = 24,
  [SMALL_STATE(10)] = 34,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(5),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_lit, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_lit, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 2),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
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
