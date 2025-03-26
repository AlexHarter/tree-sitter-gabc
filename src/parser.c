#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_PERCENT_PERCENT = 1,
  anon_sym_COLON = 2,
  anon_sym_SEMI = 3,
  sym_key = 4,
  sym_value = 5,
  sym_comment = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_lyric = 9,
  aux_sym_note_token1 = 10,
  anon_sym__ = 11,
  anon_sym_DOT = 12,
  anon_sym_x = 13,
  anon_sym_y = 14,
  anon_sym_POUND = 15,
  anon_sym_SLASH = 16,
  anon_sym_BANG = 17,
  anon_sym_AT = 18,
  anon_sym_TILDE = 19,
  anon_sym_LT = 20,
  anon_sym_GT = 21,
  anon_sym_w = 22,
  anon_sym_o = 23,
  anon_sym_s = 24,
  anon_sym_SQUOTE = 25,
  anon_sym_BQUOTE = 26,
  anon_sym_COLON_QMARK = 27,
  anon_sym_COLON_COLON = 28,
  sym_source_file = 29,
  sym_header = 30,
  sym_field = 31,
  sym_score = 32,
  sym_neume = 33,
  sym_note = 34,
  sym_modifier = 35,
  sym_bar = 36,
  aux_sym_header_repeat1 = 37,
  aux_sym_score_repeat1 = 38,
  aux_sym_neume_repeat1 = 39,
  aux_sym_note_repeat1 = 40,
  aux_sym_note_repeat2 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_lyric] = "lyric",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym__] = "_",
  [anon_sym_DOT] = ".",
  [anon_sym_x] = "x",
  [anon_sym_y] = "y",
  [anon_sym_POUND] = "#",
  [anon_sym_SLASH] = "/",
  [anon_sym_BANG] = "!",
  [anon_sym_AT] = "@",
  [anon_sym_TILDE] = "~",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_w] = "w",
  [anon_sym_o] = "o",
  [anon_sym_s] = "s",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COLON_QMARK] = ":\?",
  [anon_sym_COLON_COLON] = "::",
  [sym_source_file] = "source_file",
  [sym_header] = "header",
  [sym_field] = "field",
  [sym_score] = "score",
  [sym_neume] = "neume",
  [sym_note] = "note",
  [sym_modifier] = "modifier",
  [sym_bar] = "bar",
  [aux_sym_header_repeat1] = "header_repeat1",
  [aux_sym_score_repeat1] = "score_repeat1",
  [aux_sym_neume_repeat1] = "neume_repeat1",
  [aux_sym_note_repeat1] = "note_repeat1",
  [aux_sym_note_repeat2] = "note_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_lyric] = sym_lyric,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_y] = anon_sym_y,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COLON_QMARK] = anon_sym_COLON_QMARK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym_source_file] = sym_source_file,
  [sym_header] = sym_header,
  [sym_field] = sym_field,
  [sym_score] = sym_score,
  [sym_neume] = sym_neume,
  [sym_note] = sym_note,
  [sym_modifier] = sym_modifier,
  [sym_bar] = sym_bar,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
  [aux_sym_score_repeat1] = aux_sym_score_repeat1,
  [aux_sym_neume_repeat1] = aux_sym_neume_repeat1,
  [aux_sym_note_repeat1] = aux_sym_note_repeat1,
  [aux_sym_note_repeat2] = aux_sym_note_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_lyric] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_score] = {
    .visible = true,
    .named = true,
  },
  [sym_neume] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_bar] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_score_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_neume_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_repeat2] = {
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
  [27] = 27,
  [28] = 28,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      ADVANCE_MAP(
        '!', 26,
        '#', 24,
        '%', 14,
        '\'', 34,
        '(', 16,
        ')', 17,
        '.', 21,
        '/', 25,
        ':', 8,
        ';', 9,
        '<', 29,
        '>', 30,
        '@', 27,
        '_', 20,
        '`', 35,
        'o', 32,
        's', 33,
        'w', 31,
        'x', 22,
        'y', 23,
        '~', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'M') ||
          ('a' <= lookahead && lookahead <= 'm')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(15);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '_') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 3:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '?') ADVANCE(36);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_value);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_value);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_lyric);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_note_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_y);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_note_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_y] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COLON_QMARK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(22),
    [sym_header] = STATE(14),
    [sym_field] = STATE(10),
    [sym_score] = STATE(25),
    [sym_neume] = STATE(12),
    [aux_sym_header_repeat1] = STATE(10),
    [aux_sym_score_repeat1] = STATE(12),
    [sym_key] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_lyric] = ACTIONS(7),
  },
  [2] = {
    [sym_modifier] = STATE(4),
    [sym_bar] = STATE(7),
    [aux_sym_note_repeat1] = STATE(4),
    [aux_sym_note_repeat2] = STATE(7),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(13),
    [aux_sym_note_token1] = ACTIONS(13),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(15),
    [anon_sym_y] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_w] = ACTIONS(15),
    [anon_sym_o] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_COLON_QMARK] = ACTIONS(11),
    [anon_sym_COLON_COLON] = ACTIONS(11),
  },
  [3] = {
    [sym_modifier] = STATE(2),
    [sym_bar] = STATE(6),
    [aux_sym_note_repeat1] = STATE(2),
    [aux_sym_note_repeat2] = STATE(6),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(17),
    [aux_sym_note_token1] = ACTIONS(17),
    [anon_sym__] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_x] = ACTIONS(15),
    [anon_sym_y] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_w] = ACTIONS(15),
    [anon_sym_o] = ACTIONS(15),
    [anon_sym_s] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(11),
    [anon_sym_COLON_QMARK] = ACTIONS(11),
    [anon_sym_COLON_COLON] = ACTIONS(11),
  },
  [4] = {
    [sym_modifier] = STATE(4),
    [aux_sym_note_repeat1] = STATE(4),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [aux_sym_note_token1] = ACTIONS(21),
    [anon_sym__] = ACTIONS(23),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_x] = ACTIONS(23),
    [anon_sym_y] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_AT] = ACTIONS(23),
    [anon_sym_TILDE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_GT] = ACTIONS(23),
    [anon_sym_w] = ACTIONS(23),
    [anon_sym_o] = ACTIONS(23),
    [anon_sym_s] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(21),
    [anon_sym_BQUOTE] = ACTIONS(21),
    [anon_sym_COLON_QMARK] = ACTIONS(21),
    [anon_sym_COLON_COLON] = ACTIONS(21),
  },
  [5] = {
    [anon_sym_COLON] = ACTIONS(26),
    [anon_sym_SEMI] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(28),
    [aux_sym_note_token1] = ACTIONS(28),
    [anon_sym__] = ACTIONS(28),
    [anon_sym_DOT] = ACTIONS(28),
    [anon_sym_x] = ACTIONS(28),
    [anon_sym_y] = ACTIONS(28),
    [anon_sym_POUND] = ACTIONS(28),
    [anon_sym_SLASH] = ACTIONS(28),
    [anon_sym_BANG] = ACTIONS(28),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_TILDE] = ACTIONS(28),
    [anon_sym_LT] = ACTIONS(28),
    [anon_sym_GT] = ACTIONS(28),
    [anon_sym_w] = ACTIONS(28),
    [anon_sym_o] = ACTIONS(28),
    [anon_sym_s] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(28),
    [anon_sym_BQUOTE] = ACTIONS(28),
    [anon_sym_COLON_QMARK] = ACTIONS(28),
    [anon_sym_COLON_COLON] = ACTIONS(28),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(13), 2,
      anon_sym_RPAREN,
      aux_sym_note_token1,
    STATE(8), 2,
      sym_bar,
      aux_sym_note_repeat2,
    ACTIONS(11), 5,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COLON_QMARK,
      anon_sym_COLON_COLON,
  [19] = 4,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(30), 2,
      anon_sym_RPAREN,
      aux_sym_note_token1,
    STATE(8), 2,
      sym_bar,
      aux_sym_note_repeat2,
    ACTIONS(11), 5,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COLON_QMARK,
      anon_sym_COLON_COLON,
  [38] = 4,
    ACTIONS(32), 1,
      anon_sym_COLON,
    ACTIONS(38), 2,
      anon_sym_RPAREN,
      aux_sym_note_token1,
    STATE(8), 2,
      sym_bar,
      aux_sym_note_repeat2,
    ACTIONS(35), 5,
      anon_sym_SEMI,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COLON_QMARK,
      anon_sym_COLON_COLON,
  [57] = 2,
    ACTIONS(40), 1,
      anon_sym_COLON,
    ACTIONS(42), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      aux_sym_note_token1,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COLON_QMARK,
      anon_sym_COLON_COLON,
  [70] = 4,
    ACTIONS(3), 1,
      sym_key,
    ACTIONS(44), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(46), 1,
      sym_comment,
    STATE(11), 2,
      sym_field,
      aux_sym_header_repeat1,
  [84] = 4,
    ACTIONS(48), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(50), 1,
      sym_key,
    ACTIONS(53), 1,
      sym_comment,
    STATE(11), 2,
      sym_field,
      aux_sym_header_repeat1,
  [98] = 3,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym_lyric,
    STATE(15), 2,
      sym_neume,
      aux_sym_score_repeat1,
  [109] = 3,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      aux_sym_note_token1,
    STATE(17), 2,
      sym_note,
      aux_sym_neume_repeat1,
  [120] = 3,
    ACTIONS(58), 1,
      sym_lyric,
    STATE(26), 1,
      sym_score,
    STATE(12), 2,
      sym_neume,
      aux_sym_score_repeat1,
  [131] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym_lyric,
    STATE(15), 2,
      sym_neume,
      aux_sym_score_repeat1,
  [142] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      aux_sym_note_token1,
    STATE(16), 2,
      sym_note,
      aux_sym_neume_repeat1,
  [153] = 3,
    ACTIONS(62), 1,
      aux_sym_note_token1,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(16), 2,
      sym_note,
      aux_sym_neume_repeat1,
  [164] = 2,
    ACTIONS(78), 1,
      sym_key,
    ACTIONS(76), 2,
      anon_sym_PERCENT_PERCENT,
      sym_comment,
  [172] = 1,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      sym_lyric,
  [177] = 1,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      sym_lyric,
  [182] = 1,
    ACTIONS(84), 1,
      anon_sym_COLON,
  [186] = 1,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
  [190] = 1,
    ACTIONS(88), 1,
      anon_sym_LPAREN,
  [194] = 1,
    ACTIONS(90), 1,
      sym_value,
  [198] = 1,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
  [202] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [206] = 1,
    ACTIONS(96), 1,
      sym_lyric,
  [210] = 1,
    ACTIONS(98), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 19,
  [SMALL_STATE(8)] = 38,
  [SMALL_STATE(9)] = 57,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 98,
  [SMALL_STATE(13)] = 109,
  [SMALL_STATE(14)] = 120,
  [SMALL_STATE(15)] = 131,
  [SMALL_STATE(16)] = 142,
  [SMALL_STATE(17)] = 153,
  [SMALL_STATE(18)] = 164,
  [SMALL_STATE(19)] = 172,
  [SMALL_STATE(20)] = 177,
  [SMALL_STATE(21)] = 182,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 190,
  [SMALL_STATE(24)] = 194,
  [SMALL_STATE(25)] = 198,
  [SMALL_STATE(26)] = 202,
  [SMALL_STATE(27)] = 206,
  [SMALL_STATE(28)] = 210,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modifier, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(9),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_repeat2, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_score, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_score_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_score_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_neume_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_neume_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neume, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neume, 4, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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

TS_PUBLIC const TSLanguage *tree_sitter_gabc(void) {
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
