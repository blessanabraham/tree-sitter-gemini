#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LF = 1,
  sym__word = 2,
  anon_sym_EQ_GT = 3,
  anon_sym_ = 4,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 5,
  anon_sym_POUND = 6,
  anon_sym_POUND_POUND = 7,
  anon_sym_POUND_POUND_POUND = 8,
  anon_sym_STAR = 9,
  anon_sym_GT = 10,
  sym_source_file = 11,
  sym_text = 12,
  sym_link = 13,
  sym_start_pre = 14,
  sym_end_pre = 15,
  sym_pre = 16,
  sym_heading1 = 17,
  sym_heading2 = 18,
  sym_heading3 = 19,
  sym_ulist = 20,
  sym_quote = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_source_file_repeat2 = 23,
  aux_sym_text_repeat1 = 24,
  aux_sym_link_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym__word] = "_word",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_] = " ",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_POUND_POUND_POUND] = "###",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [sym_source_file] = "source_file",
  [sym_text] = "text",
  [sym_link] = "link",
  [sym_start_pre] = "start_pre",
  [sym_end_pre] = "end_pre",
  [sym_pre] = "pre",
  [sym_heading1] = "heading1",
  [sym_heading2] = "heading2",
  [sym_heading3] = "heading3",
  [sym_ulist] = "ulist",
  [sym_quote] = "quote",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_link_repeat1] = "link_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym__word] = sym__word,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_] = anon_sym_,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_POUND_POUND_POUND] = anon_sym_POUND_POUND_POUND,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [sym_source_file] = sym_source_file,
  [sym_text] = sym_text,
  [sym_link] = sym_link,
  [sym_start_pre] = sym_start_pre,
  [sym_end_pre] = sym_end_pre,
  [sym_pre] = sym_pre,
  [sym_heading1] = sym_heading1,
  [sym_heading2] = sym_heading2,
  [sym_heading3] = sym_heading3,
  [sym_ulist] = sym_ulist,
  [sym_quote] = sym_quote,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_link_repeat1] = aux_sym_link_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_start_pre] = {
    .visible = true,
    .named = true,
  },
  [sym_end_pre] = {
    .visible = true,
    .named = true,
  },
  [sym_pre] = {
    .visible = true,
    .named = true,
  },
  [sym_heading1] = {
    .visible = true,
    .named = true,
  },
  [sym_heading2] = {
    .visible = true,
    .named = true,
  },
  [sym_heading3] = {
    .visible = true,
    .named = true,
  },
  [sym_ulist] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_link_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alt = 1,
  field_label = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alt] = "alt",
  [field_label] = "label",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_alt, 1},
  [1] =
    {field_label, 3},
  [2] =
    {field_alt, 2},
  [3] =
    {field_label, 4},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '`') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == '`') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '`') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND_POUND_POUND);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(8);
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
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND] = ACTIONS(1),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym_text] = STATE(49),
    [sym_link] = STATE(49),
    [sym_start_pre] = STATE(7),
    [sym_heading1] = STATE(49),
    [sym_heading2] = STATE(49),
    [sym_heading3] = STATE(49),
    [sym_ulist] = STATE(49),
    [sym_quote] = STATE(49),
    [aux_sym_source_file_repeat2] = STATE(2),
    [aux_sym_text_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__word] = ACTIONS(5),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_POUND_POUND] = ACTIONS(13),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
  },
  [2] = {
    [sym_text] = STATE(49),
    [sym_link] = STATE(49),
    [sym_start_pre] = STATE(7),
    [sym_heading1] = STATE(49),
    [sym_heading2] = STATE(49),
    [sym_heading3] = STATE(49),
    [sym_ulist] = STATE(49),
    [sym_quote] = STATE(49),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_text_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym__word] = ACTIONS(5),
    [anon_sym_EQ_GT] = ACTIONS(7),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
    [anon_sym_POUND_POUND] = ACTIONS(13),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_GT] = ACTIONS(19),
  },
  [3] = {
    [sym_text] = STATE(49),
    [sym_link] = STATE(49),
    [sym_start_pre] = STATE(7),
    [sym_heading1] = STATE(49),
    [sym_heading2] = STATE(49),
    [sym_heading3] = STATE(49),
    [sym_ulist] = STATE(49),
    [sym_quote] = STATE(49),
    [aux_sym_source_file_repeat2] = STATE(3),
    [aux_sym_text_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym__word] = ACTIONS(25),
    [anon_sym_EQ_GT] = ACTIONS(28),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(34),
    [anon_sym_POUND_POUND] = ACTIONS(37),
    [anon_sym_POUND_POUND_POUND] = ACTIONS(40),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(46),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 8,
      sym__word,
      anon_sym_EQ_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_STAR,
      anon_sym_GT,
  [14] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 8,
      sym__word,
      anon_sym_EQ_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_STAR,
      anon_sym_GT,
  [28] = 2,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 8,
      sym__word,
      anon_sym_EQ_GT,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_POUND_POUND_POUND,
      anon_sym_STAR,
      anon_sym_GT,
  [42] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(59), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(35), 1,
      sym_end_pre,
    STATE(37), 1,
      sym_pre,
    STATE(46), 1,
      sym_text,
  [64] = 7,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(59), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(37), 1,
      sym_pre,
    STATE(46), 1,
      sym_text,
    STATE(48), 1,
      sym_end_pre,
  [86] = 6,
    ACTIONS(61), 1,
      sym__word,
    ACTIONS(64), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(37), 1,
      sym_pre,
    STATE(46), 1,
      sym_text,
  [105] = 6,
    ACTIONS(66), 1,
      anon_sym_LF,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(70), 1,
      anon_sym_,
    STATE(18), 1,
      aux_sym_link_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(38), 1,
      sym_text,
  [124] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(72), 1,
      anon_sym_,
    STATE(22), 1,
      aux_sym_link_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(39), 1,
      sym_text,
  [140] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(74), 1,
      anon_sym_,
    STATE(19), 1,
      aux_sym_link_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(53), 1,
      sym_text,
  [156] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(54), 1,
      sym_text,
  [172] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(78), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym_link_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(52), 1,
      sym_text,
  [188] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(45), 1,
      sym_text,
  [204] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(80), 1,
      anon_sym_,
    STATE(20), 1,
      aux_sym_link_repeat1,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(36), 1,
      sym_text,
  [220] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(50), 1,
      sym_text,
  [236] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(40), 1,
      sym_text,
  [252] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(43), 1,
      sym_text,
  [268] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(41), 1,
      sym_text,
  [284] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(44), 1,
      sym_text,
  [300] = 5,
    ACTIONS(68), 1,
      sym__word,
    ACTIONS(76), 1,
      anon_sym_,
    STATE(23), 1,
      aux_sym_text_repeat1,
    STATE(29), 1,
      aux_sym_link_repeat1,
    STATE(42), 1,
      sym_text,
  [316] = 3,
    ACTIONS(82), 1,
      anon_sym_LF,
    ACTIONS(84), 1,
      sym__word,
    STATE(24), 1,
      aux_sym_text_repeat1,
  [326] = 3,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(88), 1,
      sym__word,
    STATE(24), 1,
      aux_sym_text_repeat1,
  [336] = 3,
    ACTIONS(91), 1,
      sym__word,
    ACTIONS(93), 1,
      anon_sym_,
    STATE(27), 1,
      aux_sym_link_repeat1,
  [346] = 3,
    ACTIONS(95), 1,
      anon_sym_LF,
    ACTIONS(97), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_link_repeat1,
  [356] = 3,
    ACTIONS(76), 1,
      anon_sym_,
    ACTIONS(99), 1,
      sym__word,
    STATE(29), 1,
      aux_sym_link_repeat1,
  [366] = 3,
    ACTIONS(101), 1,
      anon_sym_LF,
    ACTIONS(103), 1,
      anon_sym_,
    STATE(13), 1,
      aux_sym_link_repeat1,
  [376] = 3,
    ACTIONS(105), 1,
      sym__word,
    ACTIONS(107), 1,
      anon_sym_,
    STATE(29), 1,
      aux_sym_link_repeat1,
  [386] = 2,
    ACTIONS(110), 1,
      anon_sym_,
    STATE(21), 1,
      aux_sym_link_repeat1,
  [393] = 1,
    ACTIONS(112), 2,
      sym__word,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [398] = 1,
    ACTIONS(64), 2,
      sym__word,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [403] = 1,
    ACTIONS(114), 2,
      sym__word,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [408] = 1,
    ACTIONS(116), 2,
      sym__word,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [413] = 1,
    ACTIONS(118), 1,
      anon_sym_LF,
  [417] = 1,
    ACTIONS(120), 1,
      anon_sym_LF,
  [421] = 1,
    ACTIONS(122), 1,
      anon_sym_LF,
  [425] = 1,
    ACTIONS(124), 1,
      anon_sym_LF,
  [429] = 1,
    ACTIONS(126), 1,
      anon_sym_LF,
  [433] = 1,
    ACTIONS(128), 1,
      anon_sym_LF,
  [437] = 1,
    ACTIONS(130), 1,
      anon_sym_LF,
  [441] = 1,
    ACTIONS(132), 1,
      anon_sym_LF,
  [445] = 1,
    ACTIONS(134), 1,
      anon_sym_LF,
  [449] = 1,
    ACTIONS(136), 1,
      anon_sym_LF,
  [453] = 1,
    ACTIONS(138), 1,
      anon_sym_LF,
  [457] = 1,
    ACTIONS(140), 1,
      anon_sym_LF,
  [461] = 1,
    ACTIONS(142), 1,
      anon_sym_LF,
  [465] = 1,
    ACTIONS(144), 1,
      anon_sym_LF,
  [469] = 1,
    ACTIONS(146), 1,
      anon_sym_LF,
  [473] = 1,
    ACTIONS(148), 1,
      anon_sym_LF,
  [477] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [481] = 1,
    ACTIONS(152), 1,
      anon_sym_LF,
  [485] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
  [489] = 1,
    ACTIONS(156), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 28,
  [SMALL_STATE(7)] = 42,
  [SMALL_STATE(8)] = 64,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 105,
  [SMALL_STATE(11)] = 124,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 188,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 220,
  [SMALL_STATE(18)] = 236,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 284,
  [SMALL_STATE(22)] = 300,
  [SMALL_STATE(23)] = 316,
  [SMALL_STATE(24)] = 326,
  [SMALL_STATE(25)] = 336,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 366,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 386,
  [SMALL_STATE(31)] = 393,
  [SMALL_STATE(32)] = 398,
  [SMALL_STATE(33)] = 403,
  [SMALL_STATE(34)] = 408,
  [SMALL_STATE(35)] = 413,
  [SMALL_STATE(36)] = 417,
  [SMALL_STATE(37)] = 421,
  [SMALL_STATE(38)] = 425,
  [SMALL_STATE(39)] = 429,
  [SMALL_STATE(40)] = 433,
  [SMALL_STATE(41)] = 437,
  [SMALL_STATE(42)] = 441,
  [SMALL_STATE(43)] = 445,
  [SMALL_STATE(44)] = 449,
  [SMALL_STATE(45)] = 453,
  [SMALL_STATE(46)] = 457,
  [SMALL_STATE(47)] = 461,
  [SMALL_STATE(48)] = 465,
  [SMALL_STATE(49)] = 469,
  [SMALL_STATE(50)] = 473,
  [SMALL_STATE(51)] = 477,
  [SMALL_STATE(52)] = 481,
  [SMALL_STATE(53)] = 485,
  [SMALL_STATE(54)] = 489,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(23),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(25),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(12),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_link_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_link_repeat1, 2), SHIFT_REPEAT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_pre, 4, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_pre, 3, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start_pre, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading1, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading2, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading1, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading2, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading3, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ulist, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_pre, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 4, .production_id = 2),
  [150] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading3, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link, 5, .production_id = 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gemini(void) {
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
