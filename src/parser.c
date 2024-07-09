#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_command = 1,
  sym_command_prefix = 2,
  sym_continuation_prefix = 3,
  aux_sym_output_content_token1 = 4,
  aux_sym_language_specifier_token1 = 5,
  sym_language_name = 6,
  sym_comment = 7,
  anon_sym_LF = 8,
  anon_sym_CR_LF = 9,
  sym_file = 10,
  sym_command_line = 11,
  sym_continuation_line = 12,
  sym_output = 13,
  sym_output_content = 14,
  sym_language_specifier = 15,
  sym__empty = 16,
  aux_sym_file_repeat1 = 17,
  aux_sym_output_content_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_command] = "command",
  [sym_command_prefix] = "command_prefix",
  [sym_continuation_prefix] = "continuation_prefix",
  [aux_sym_output_content_token1] = "output_content_token1",
  [aux_sym_language_specifier_token1] = "language_specifier_token1",
  [sym_language_name] = "language_name",
  [sym_comment] = "comment",
  [anon_sym_LF] = "\n",
  [anon_sym_CR_LF] = "\r\n",
  [sym_file] = "file",
  [sym_command_line] = "command_line",
  [sym_continuation_line] = "continuation_line",
  [sym_output] = "output",
  [sym_output_content] = "output_content",
  [sym_language_specifier] = "language_specifier",
  [sym__empty] = "_empty",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_output_content_repeat1] = "output_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_command] = sym_command,
  [sym_command_prefix] = sym_command_prefix,
  [sym_continuation_prefix] = sym_continuation_prefix,
  [aux_sym_output_content_token1] = aux_sym_output_content_token1,
  [aux_sym_language_specifier_token1] = aux_sym_language_specifier_token1,
  [sym_language_name] = sym_language_name,
  [sym_comment] = sym_comment,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_file] = sym_file,
  [sym_command_line] = sym_command_line,
  [sym_continuation_line] = sym_continuation_line,
  [sym_output] = sym_output,
  [sym_output_content] = sym_output_content,
  [sym_language_specifier] = sym_language_specifier,
  [sym__empty] = sym__empty,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_output_content_repeat1] = aux_sym_output_content_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_command_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation_prefix] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_output_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_language_specifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_language_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_command_line] = {
    .visible = true,
    .named = true,
  },
  [sym_continuation_line] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym_output_content] = {
    .visible = true,
    .named = true,
  },
  [sym_language_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym__empty] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_output_content_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '<') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '>') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == ' ') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(17);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'g') ADVANCE(23);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(30)
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '<') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '<') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '>') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '<') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '\r') ADVANCE(37);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '<') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(40);
      if (lookahead == '<') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '<') ADVANCE(41);
      if (lookahead == '>') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead == '<') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(38)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 52:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 53:
      if (eof) ADVANCE(54);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '<') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(34);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_command);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_command);
      if (lookahead == '\n') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_command_prefix);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_continuation_prefix);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_output_content_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_output_content_token1);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_output_content_token1);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_language_specifier_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_language_specifier_token1);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_language_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(30);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == ' ') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_command_prefix] = ACTIONS(1),
    [sym_continuation_prefix] = ACTIONS(1),
    [aux_sym_language_specifier_token1] = ACTIONS(1),
    [sym_language_name] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(14),
    [sym_command_line] = STATE(2),
    [sym_continuation_line] = STATE(2),
    [sym_output] = STATE(2),
    [sym_output_content] = STATE(4),
    [sym__empty] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [aux_sym_output_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_command_prefix] = ACTIONS(5),
    [sym_continuation_prefix] = ACTIONS(7),
    [aux_sym_output_content_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(11),
    [anon_sym_CR_LF] = ACTIONS(11),
  },
  [2] = {
    [sym_command_line] = STATE(3),
    [sym_continuation_line] = STATE(3),
    [sym_output] = STATE(3),
    [sym_output_content] = STATE(4),
    [sym__empty] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym_output_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_command_prefix] = ACTIONS(5),
    [sym_continuation_prefix] = ACTIONS(7),
    [aux_sym_output_content_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
    [anon_sym_CR_LF] = ACTIONS(15),
  },
  [3] = {
    [sym_command_line] = STATE(3),
    [sym_continuation_line] = STATE(3),
    [sym_output] = STATE(3),
    [sym_output_content] = STATE(4),
    [sym__empty] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym_output_content_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_command_prefix] = ACTIONS(19),
    [sym_continuation_prefix] = ACTIONS(22),
    [aux_sym_output_content_token1] = ACTIONS(25),
    [sym_comment] = ACTIONS(28),
    [anon_sym_LF] = ACTIONS(28),
    [anon_sym_CR_LF] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_language_specifier_token1,
    STATE(9), 1,
      sym_language_specifier,
    ACTIONS(33), 6,
      sym_command_prefix,
      sym_continuation_prefix,
      aux_sym_output_content_token1,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [18] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_output_content_token1,
    STATE(6), 1,
      aux_sym_output_content_repeat1,
    ACTIONS(39), 6,
      sym_command_prefix,
      sym_continuation_prefix,
      aux_sym_language_specifier_token1,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [36] = 4,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_output_content_token1,
    STATE(6), 1,
      aux_sym_output_content_repeat1,
    ACTIONS(45), 6,
      sym_command_prefix,
      sym_continuation_prefix,
      aux_sym_language_specifier_token1,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [54] = 2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 6,
      sym_command_prefix,
      sym_continuation_prefix,
      aux_sym_output_content_token1,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [66] = 2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 6,
      sym_command_prefix,
      sym_continuation_prefix,
      aux_sym_output_content_token1,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [78] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 6,
      sym_command_prefix,
      sym_continuation_prefix,
      aux_sym_output_content_token1,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [90] = 2,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 6,
      sym_command_prefix,
      sym_continuation_prefix,
      aux_sym_output_content_token1,
      sym_comment,
      anon_sym_LF,
      anon_sym_CR_LF,
  [102] = 2,
    STATE(10), 1,
      sym__empty,
    ACTIONS(66), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [110] = 1,
    ACTIONS(68), 1,
      sym_command,
  [114] = 1,
    ACTIONS(70), 1,
      sym_command,
  [118] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [122] = 1,
    ACTIONS(74), 1,
      sym_language_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 78,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 102,
  [SMALL_STATE(12)] = 110,
  [SMALL_STATE(13)] = 114,
  [SMALL_STATE(14)] = 118,
  [SMALL_STATE(15)] = 122,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(12),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(13),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output_content, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output_content, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_output_content_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_output_content_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_output_content_repeat1, 2), SHIFT_REPEAT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_line, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_line, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continuation_line, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continuation_line, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_language_specifier, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_language_specifier, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cram() {
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
