#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_if = 1,
  anon_sym_then = 2,
  anon_sym_else = 3,
  anon_sym_BANG = 4,
  anon_sym_TILDE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_COMMA = 10,
  anon_sym_PIPE_PIPE = 11,
  sym_symbols = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_PERCENT = 14,
  anon_sym_AMP = 15,
  anon_sym_STAR = 16,
  anon_sym_PLUS = 17,
  anon_sym_CARET = 18,
  anon_sym_POUND = 19,
  anon_sym_EQ = 20,
  anon_sym_DOT = 21,
  anon_sym_COLON = 22,
  anon_sym_DASH = 23,
  anon_sym_QMARK = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_PIPE = 27,
  sym_lowerid = 28,
  sym_source_file = 29,
  sym__expression = 30,
  sym_basic_expr = 31,
  sym_if_expr = 32,
  sym_blockexpr = 33,
  sym_opexpr = 34,
  sym_prefixexpr = 35,
  sym_appexpr = 36,
  sym_arguments = 37,
  sym_argument = 38,
  sym_qoperator = 39,
  sym_op = 40,
  sym_varid = 41,
  sym_identifier = 42,
  sym_qidentifier = 43,
  sym_atom = 44,
  aux_sym_opexpr_repeat1 = 45,
  aux_sym_prefixexpr_repeat1 = 46,
  aux_sym_arguments_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE_PIPE] = "||",
  [sym_symbols] = "symbols",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_CARET] = "^",
  [anon_sym_POUND] = "#",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PIPE] = "|",
  [sym_lowerid] = "lowerid",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_basic_expr] = "basic_expr",
  [sym_if_expr] = "if_expr",
  [sym_blockexpr] = "blockexpr",
  [sym_opexpr] = "opexpr",
  [sym_prefixexpr] = "prefixexpr",
  [sym_appexpr] = "appexpr",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_qoperator] = "qoperator",
  [sym_op] = "op",
  [sym_varid] = "varid",
  [sym_identifier] = "identifier",
  [sym_qidentifier] = "qidentifier",
  [sym_atom] = "atom",
  [aux_sym_opexpr_repeat1] = "opexpr_repeat1",
  [aux_sym_prefixexpr_repeat1] = "prefixexpr_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [sym_symbols] = sym_symbols,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_lowerid] = sym_lowerid,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_basic_expr] = sym_basic_expr,
  [sym_if_expr] = sym_if_expr,
  [sym_blockexpr] = sym_blockexpr,
  [sym_opexpr] = sym_opexpr,
  [sym_prefixexpr] = sym_prefixexpr,
  [sym_appexpr] = sym_appexpr,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym_qoperator] = sym_qoperator,
  [sym_op] = sym_op,
  [sym_varid] = sym_varid,
  [sym_identifier] = sym_identifier,
  [sym_qidentifier] = sym_qidentifier,
  [sym_atom] = sym_atom,
  [aux_sym_opexpr_repeat1] = aux_sym_opexpr_repeat1,
  [aux_sym_prefixexpr_repeat1] = aux_sym_prefixexpr_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_symbols] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_lowerid] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_basic_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_if_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_blockexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_opexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_prefixexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_appexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_qoperator] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_varid] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_qidentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_opexpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prefixexpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
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

static inline bool sym_symbols_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '-' && c <= '.')))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '?')
        : c <= '\\')
      : (c <= '^' || c == '~'))));
}

static inline bool sym_symbols_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '#'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '-' && c <= '.')
        : c <= ':')))
    : (c <= '?' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '$') ADVANCE(28);
      if (lookahead == '%') ADVANCE(29);
      if (lookahead == '&') ADVANCE(30);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(31);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '<') ADVANCE(40);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(41);
      if (lookahead == '?') ADVANCE(39);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '^') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '~') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '~') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == '~') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (sym_symbols_character_set_1(lookahead)) ADVANCE(27);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (sym_symbols_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_symbols);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_symbols);
      if (sym_symbols_character_set_1(lookahead)) ADVANCE(27);
      if (lookahead == '|') ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_symbols);
      if (sym_symbols_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(23);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
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
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__expression] = STATE(37),
    [sym_basic_expr] = STATE(37),
    [sym_if_expr] = STATE(26),
    [sym_opexpr] = STATE(26),
    [sym_prefixexpr] = STATE(14),
    [sym_appexpr] = STATE(16),
    [sym_varid] = STATE(10),
    [sym_identifier] = STATE(11),
    [sym_qidentifier] = STATE(12),
    [sym_atom] = STATE(17),
    [aux_sym_prefixexpr_repeat1] = STATE(9),
    [anon_sym_if] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [sym_lowerid] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    ACTIONS(11), 1,
      anon_sym_RBRACK,
    STATE(9), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(14), 1,
      sym_prefixexpr,
    STATE(16), 1,
      sym_appexpr,
    STATE(17), 1,
      sym_atom,
    STATE(27), 1,
      sym_argument,
    STATE(39), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(26), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(34), 2,
      sym__expression,
      sym_basic_expr,
  [52] = 16,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(14), 1,
      sym_prefixexpr,
    STATE(16), 1,
      sym_appexpr,
    STATE(17), 1,
      sym_atom,
    STATE(27), 1,
      sym_argument,
    STATE(38), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(26), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(34), 2,
      sym__expression,
      sym_basic_expr,
  [104] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(9), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(14), 1,
      sym_prefixexpr,
    STATE(16), 1,
      sym_appexpr,
    STATE(17), 1,
      sym_atom,
    STATE(33), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(26), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(32), 2,
      sym__expression,
      sym_basic_expr,
  [150] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(9), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(14), 1,
      sym_prefixexpr,
    STATE(16), 1,
      sym_appexpr,
    STATE(17), 1,
      sym_atom,
    STATE(35), 1,
      sym_argument,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(26), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(34), 2,
      sym__expression,
      sym_basic_expr,
  [196] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_lowerid,
    STATE(9), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_appexpr,
    STATE(17), 1,
      sym_atom,
    STATE(21), 1,
      sym_prefixexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [228] = 2,
    ACTIONS(17), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(15), 8,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [243] = 2,
    ACTIONS(21), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(19), 8,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [258] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(17), 1,
      sym_atom,
    STATE(20), 1,
      sym_appexpr,
    STATE(25), 1,
      aux_sym_prefixexpr_repeat1,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [287] = 2,
    ACTIONS(27), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [302] = 2,
    ACTIONS(31), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [317] = 2,
    ACTIONS(35), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [332] = 5,
    STATE(6), 1,
      sym_qoperator,
    STATE(15), 1,
      aux_sym_opexpr_repeat1,
    STATE(28), 1,
      sym_op,
    ACTIONS(39), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [352] = 5,
    STATE(6), 1,
      sym_qoperator,
    STATE(13), 1,
      aux_sym_opexpr_repeat1,
    STATE(28), 1,
      sym_op,
    ACTIONS(39), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [372] = 5,
    STATE(6), 1,
      sym_qoperator,
    STATE(15), 1,
      aux_sym_opexpr_repeat1,
    STATE(28), 1,
      sym_op,
    ACTIONS(45), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [392] = 4,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [409] = 2,
    ACTIONS(58), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [422] = 2,
    ACTIONS(62), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(60), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [435] = 2,
    ACTIONS(66), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [448] = 4,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [465] = 2,
    ACTIONS(72), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [476] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(36), 1,
      sym_atom,
  [495] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(24), 1,
      sym_atom,
  [514] = 2,
    ACTIONS(76), 1,
      anon_sym_else,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [524] = 3,
    STATE(25), 1,
      aux_sym_prefixexpr_repeat1,
    ACTIONS(78), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(81), 2,
      anon_sym_LPAREN,
      sym_lowerid,
  [536] = 1,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [543] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(85), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [554] = 1,
    ACTIONS(89), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      sym_lowerid,
  [561] = 1,
    ACTIONS(91), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      sym_lowerid,
  [568] = 3,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [579] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [590] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [597] = 1,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [604] = 1,
    ACTIONS(104), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [610] = 1,
    ACTIONS(95), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [616] = 1,
    ACTIONS(106), 1,
      anon_sym_then,
  [620] = 1,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
  [624] = 1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [628] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
  [632] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [636] = 1,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 228,
  [SMALL_STATE(8)] = 243,
  [SMALL_STATE(9)] = 258,
  [SMALL_STATE(10)] = 287,
  [SMALL_STATE(11)] = 302,
  [SMALL_STATE(12)] = 317,
  [SMALL_STATE(13)] = 332,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 372,
  [SMALL_STATE(16)] = 392,
  [SMALL_STATE(17)] = 409,
  [SMALL_STATE(18)] = 422,
  [SMALL_STATE(19)] = 435,
  [SMALL_STATE(20)] = 448,
  [SMALL_STATE(21)] = 465,
  [SMALL_STATE(22)] = 476,
  [SMALL_STATE(23)] = 495,
  [SMALL_STATE(24)] = 514,
  [SMALL_STATE(25)] = 524,
  [SMALL_STATE(26)] = 536,
  [SMALL_STATE(27)] = 543,
  [SMALL_STATE(28)] = 554,
  [SMALL_STATE(29)] = 561,
  [SMALL_STATE(30)] = 568,
  [SMALL_STATE(31)] = 579,
  [SMALL_STATE(32)] = 590,
  [SMALL_STATE(33)] = 597,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 610,
  [SMALL_STATE(36)] = 616,
  [SMALL_STATE(37)] = 620,
  [SMALL_STATE(38)] = 624,
  [SMALL_STATE(39)] = 628,
  [SMALL_STATE(40)] = 632,
  [SMALL_STATE(41)] = 636,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varid, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varid, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qidentifier, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qidentifier, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opexpr, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opexpr, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_opexpr_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opexpr_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixexpr, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixexpr, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixexpr, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixexpr, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opexpr_repeat1, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefixexpr_repeat1, 2), SHIFT_REPEAT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefixexpr_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qoperator, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockexpr, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 6),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_koka(void) {
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
