#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LT_PERCENT_AT = 1,
  anon_sym_PERCENT_GT = 2,
  anon_sym_EQ = 3,
  anon_sym_LT_PERCENT = 4,
  anon_sym_LT_PERCENT_EQ = 5,
  sym_ident = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  sym__lang = 9,
  sym_source_file = 10,
  sym_directive = 11,
  sym_attribute = 12,
  sym_scriptlet = 13,
  sym_expression = 14,
  sym_java = 15,
  sym_template = 16,
  sym_string = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_directive_repeat1 = 19,
  aux_sym_string_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT_PERCENT_AT] = "<%@",
  [anon_sym_PERCENT_GT] = "%>",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_PERCENT] = "<%",
  [anon_sym_LT_PERCENT_EQ] = "<%=",
  [sym_ident] = "ident",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym__lang] = "_lang",
  [sym_source_file] = "source_file",
  [sym_directive] = "directive",
  [sym_attribute] = "attribute",
  [sym_scriptlet] = "scriptlet",
  [sym_expression] = "expression",
  [sym_java] = "java",
  [sym_template] = "template",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT_PERCENT_AT] = anon_sym_LT_PERCENT_AT,
  [anon_sym_PERCENT_GT] = anon_sym_PERCENT_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_PERCENT] = anon_sym_LT_PERCENT,
  [anon_sym_LT_PERCENT_EQ] = anon_sym_LT_PERCENT_EQ,
  [sym_ident] = sym_ident,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__lang] = sym__lang,
  [sym_source_file] = sym_source_file,
  [sym_directive] = sym_directive,
  [sym_attribute] = sym_attribute,
  [sym_scriptlet] = sym_scriptlet,
  [sym_expression] = sym_expression,
  [sym_java] = sym_java,
  [sym_template] = sym_template,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LT_PERCENT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__lang] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_scriptlet] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_java] = {
    .visible = true,
    .named = true,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_AT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT_GT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '@') ADVANCE(5);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LT_PERCENT_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 0, .external_lex_state = 1},
  [3] = {.lex_state = 0, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0, .external_lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(1),
    [anon_sym_PERCENT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__lang] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym_directive] = STATE(2),
    [sym_scriptlet] = STATE(2),
    [sym_expression] = STATE(2),
    [sym_template] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LT_PERCENT_AT] = ACTIONS(5),
    [anon_sym_LT_PERCENT] = ACTIONS(7),
    [anon_sym_LT_PERCENT_EQ] = ACTIONS(9),
    [sym__lang] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(7), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(11), 1,
      sym__lang,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 5,
      sym_directive,
      sym_scriptlet,
      sym_expression,
      sym_template,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_LT_PERCENT_AT,
    ACTIONS(20), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(23), 1,
      anon_sym_LT_PERCENT_EQ,
    ACTIONS(26), 1,
      sym__lang,
    STATE(3), 5,
      sym_directive,
      sym_scriptlet,
      sym_expression,
      sym_template,
      aux_sym_source_file_repeat1,
  [46] = 2,
    ACTIONS(31), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(29), 4,
      sym__lang,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
  [56] = 2,
    ACTIONS(35), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(33), 4,
      sym__lang,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
  [66] = 2,
    ACTIONS(39), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(37), 4,
      sym__lang,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
  [76] = 2,
    ACTIONS(43), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(41), 4,
      sym__lang,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
  [86] = 2,
    ACTIONS(47), 1,
      anon_sym_LT_PERCENT,
    ACTIONS(45), 4,
      sym__lang,
      ts_builtin_sym_end,
      anon_sym_LT_PERCENT_AT,
      anon_sym_LT_PERCENT_EQ,
  [96] = 3,
    ACTIONS(49), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(51), 1,
      sym_ident,
    STATE(10), 2,
      sym_attribute,
      aux_sym_directive_repeat1,
  [107] = 3,
    ACTIONS(53), 1,
      anon_sym_PERCENT_GT,
    ACTIONS(55), 1,
      sym_ident,
    STATE(10), 2,
      sym_attribute,
      aux_sym_directive_repeat1,
  [118] = 3,
    ACTIONS(51), 1,
      sym_ident,
    ACTIONS(58), 1,
      anon_sym_PERCENT_GT,
    STATE(9), 2,
      sym_attribute,
      aux_sym_directive_repeat1,
  [129] = 3,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [139] = 3,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym_string_token1,
    STATE(12), 1,
      aux_sym_string_repeat1,
  [149] = 3,
    ACTIONS(69), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      aux_sym_string_token1,
    STATE(13), 1,
      aux_sym_string_repeat1,
  [159] = 2,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_string,
  [166] = 1,
    ACTIONS(75), 2,
      anon_sym_PERCENT_GT,
      sym_ident,
  [171] = 1,
    ACTIONS(77), 2,
      anon_sym_PERCENT_GT,
      sym_ident,
  [176] = 2,
    ACTIONS(79), 1,
      sym__lang,
    STATE(23), 1,
      sym_java,
  [183] = 1,
    ACTIONS(81), 2,
      anon_sym_PERCENT_GT,
      sym_ident,
  [188] = 2,
    ACTIONS(79), 1,
      sym__lang,
    STATE(24), 1,
      sym_java,
  [195] = 1,
    ACTIONS(83), 1,
      sym_ident,
  [199] = 1,
    ACTIONS(85), 1,
      anon_sym_EQ,
  [203] = 1,
    ACTIONS(87), 1,
      anon_sym_PERCENT_GT,
  [207] = 1,
    ACTIONS(89), 1,
      anon_sym_PERCENT_GT,
  [211] = 1,
    ACTIONS(91), 1,
      anon_sym_PERCENT_GT,
  [215] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 107,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 159,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 171,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 183,
  [SMALL_STATE(20)] = 188,
  [SMALL_STATE(21)] = 195,
  [SMALL_STATE(22)] = 199,
  [SMALL_STATE(23)] = 203,
  [SMALL_STATE(24)] = 207,
  [SMALL_STATE(25)] = 211,
  [SMALL_STATE(26)] = 215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scriptlet, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scriptlet, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(22),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_java, 1),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__lang = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__lang] = sym__lang,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__lang] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jet_external_scanner_create(void);
void tree_sitter_jet_external_scanner_destroy(void *);
bool tree_sitter_jet_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jet_external_scanner_serialize(void *, char *);
void tree_sitter_jet_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jet() {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jet_external_scanner_create,
      tree_sitter_jet_external_scanner_destroy,
      tree_sitter_jet_external_scanner_scan,
      tree_sitter_jet_external_scanner_serialize,
      tree_sitter_jet_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
