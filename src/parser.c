#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
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
  anon_sym_DOT = 10,
  anon_sym_COMMA = 11,
  anon_sym_PIPE_PIPE = 12,
  sym_symbols = 13,
  anon_sym_DOLLAR = 14,
  anon_sym_PERCENT = 15,
  anon_sym_AMP = 16,
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_CARET = 19,
  anon_sym_POUND = 20,
  anon_sym_EQ = 21,
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
  sym_ntl_expr = 37,
  sym_ntl_prefix_expr = 38,
  sym_ntl_app_expr = 39,
  sym_arguments = 40,
  sym_argument = 41,
  sym_qoperator = 42,
  sym_op = 43,
  sym_varid = 44,
  sym_identifier = 45,
  sym_qidentifier = 46,
  sym_atom = 47,
  aux_sym_opexpr_repeat1 = 48,
  aux_sym_prefixexpr_repeat1 = 49,
  aux_sym_ntl_expr_repeat1 = 50,
  aux_sym_arguments_repeat1 = 51,
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
  [anon_sym_DOT] = ".",
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
  [sym_ntl_expr] = "ntl_expr",
  [sym_ntl_prefix_expr] = "ntl_prefix_expr",
  [sym_ntl_app_expr] = "ntl_app_expr",
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
  [aux_sym_ntl_expr_repeat1] = "ntl_expr_repeat1",
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
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_ntl_expr] = sym_ntl_expr,
  [sym_ntl_prefix_expr] = sym_ntl_prefix_expr,
  [sym_ntl_app_expr] = sym_ntl_app_expr,
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
  [aux_sym_ntl_expr_repeat1] = aux_sym_ntl_expr_repeat1,
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
  [anon_sym_DOT] = {
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
  [sym_ntl_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_ntl_prefix_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_ntl_app_expr] = {
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
  [aux_sym_ntl_expr_repeat1] = {
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
      : (c <= '+' || c == '-'))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '?')
        : c <= '\\')
      : (c <= '^' || c == '~'))));
}

static inline bool sym_symbols_character_set_2(int32_t c) {
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

static inline bool sym_symbols_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(12);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(31);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '&') ADVANCE(33);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '<') ADVANCE(42);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '?') ADVANCE(41);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '^') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '|') ADVANCE(44);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (sym_symbols_character_set_1(lookahead)) ADVANCE(30);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (sym_symbols_character_set_2(lookahead)) ADVANCE(30);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_symbols_character_set_3(lookahead)) ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (sym_symbols_character_set_3(lookahead)) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbols);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_symbols);
      if (sym_symbols_character_set_2(lookahead)) ADVANCE(30);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbols);
      if (sym_symbols_character_set_3(lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(26);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
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
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
    [anon_sym_DOT] = ACTIONS(1),
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
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__expression] = STATE(52),
    [sym_basic_expr] = STATE(52),
    [sym_if_expr] = STATE(32),
    [sym_opexpr] = STATE(32),
    [sym_prefixexpr] = STATE(21),
    [sym_appexpr] = STATE(19),
    [sym_varid] = STATE(10),
    [sym_identifier] = STATE(11),
    [sym_qidentifier] = STATE(12),
    [sym_atom] = STATE(16),
    [aux_sym_prefixexpr_repeat1] = STATE(17),
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
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(17), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(19), 1,
      sym_appexpr,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(45), 1,
      sym_argument,
    STATE(55), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(32), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(47), 2,
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
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(17), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(19), 1,
      sym_appexpr,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(45), 1,
      sym_argument,
    STATE(56), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(32), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(47), 2,
      sym__expression,
      sym_basic_expr,
  [104] = 15,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(17), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(19), 1,
      sym_appexpr,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(45), 1,
      sym_argument,
    STATE(50), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(32), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(47), 2,
      sym__expression,
      sym_basic_expr,
  [153] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(17), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(19), 1,
      sym_appexpr,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(37), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(32), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
  [199] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(17), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(19), 1,
      sym_appexpr,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(49), 1,
      sym_argument,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(32), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(47), 2,
      sym__expression,
      sym_basic_expr,
  [245] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(17), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(19), 1,
      sym_appexpr,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(40), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(32), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
  [291] = 11,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(20), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(30), 1,
      sym_ntl_prefix_expr,
    STATE(34), 1,
      sym_atom,
    STATE(36), 1,
      sym_ntl_app_expr,
    STATE(53), 1,
      sym_ntl_expr,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [326] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(20), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(34), 1,
      sym_atom,
    STATE(36), 1,
      sym_ntl_app_expr,
    STATE(48), 1,
      sym_ntl_prefix_expr,
    ACTIONS(13), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [358] = 2,
    ACTIONS(19), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [374] = 2,
    ACTIONS(23), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [390] = 2,
    ACTIONS(27), 3,
      anon_sym_DOT,
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
  [406] = 2,
    ACTIONS(31), 3,
      anon_sym_DOT,
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
  [422] = 2,
    ACTIONS(35), 3,
      anon_sym_DOT,
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
  [438] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(17), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(19), 1,
      sym_appexpr,
    STATE(26), 1,
      sym_prefixexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [470] = 2,
    ACTIONS(39), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [485] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(16), 1,
      sym_atom,
    STATE(22), 1,
      sym_appexpr,
    STATE(41), 1,
      aux_sym_prefixexpr_repeat1,
    ACTIONS(41), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [514] = 5,
    STATE(15), 1,
      sym_qoperator,
    STATE(18), 1,
      aux_sym_opexpr_repeat1,
    STATE(43), 1,
      sym_op,
    ACTIONS(45), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [535] = 5,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(56), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [556] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(34), 1,
      sym_atom,
    STATE(35), 1,
      sym_ntl_app_expr,
    STATE(41), 1,
      aux_sym_prefixexpr_repeat1,
    ACTIONS(41), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [585] = 5,
    STATE(15), 1,
      sym_qoperator,
    STATE(23), 1,
      aux_sym_opexpr_repeat1,
    STATE(43), 1,
      sym_op,
    ACTIONS(60), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [606] = 5,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_DOT,
    ACTIONS(64), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(62), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [627] = 5,
    STATE(15), 1,
      sym_qoperator,
    STATE(18), 1,
      aux_sym_opexpr_repeat1,
    STATE(43), 1,
      sym_op,
    ACTIONS(60), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(66), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [648] = 2,
    ACTIONS(70), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [663] = 2,
    ACTIONS(74), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [678] = 2,
    ACTIONS(76), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [690] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(24), 1,
      sym_atom,
  [709] = 5,
    ACTIONS(78), 1,
      anon_sym_then,
    STATE(9), 1,
      sym_qoperator,
    STATE(29), 1,
      aux_sym_ntl_expr_repeat1,
    STATE(43), 1,
      sym_op,
    ACTIONS(60), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [726] = 5,
    ACTIONS(80), 1,
      anon_sym_then,
    STATE(9), 1,
      sym_qoperator,
    STATE(29), 1,
      aux_sym_ntl_expr_repeat1,
    STATE(43), 1,
      sym_op,
    ACTIONS(82), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [743] = 5,
    ACTIONS(85), 1,
      anon_sym_then,
    STATE(9), 1,
      sym_qoperator,
    STATE(28), 1,
      aux_sym_ntl_expr_repeat1,
    STATE(43), 1,
      sym_op,
    ACTIONS(60), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [760] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_lowerid,
    STATE(10), 1,
      sym_varid,
    STATE(11), 1,
      sym_identifier,
    STATE(12), 1,
      sym_qidentifier,
    STATE(33), 1,
      sym_atom,
  [779] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [787] = 2,
    ACTIONS(89), 2,
      anon_sym_then,
      anon_sym_LPAREN,
    ACTIONS(91), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [797] = 2,
    ACTIONS(93), 2,
      anon_sym_then,
      anon_sym_LPAREN,
    ACTIONS(95), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [807] = 4,
    ACTIONS(97), 1,
      anon_sym_then,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(103), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [821] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      anon_sym_then,
    ACTIONS(107), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [835] = 1,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [843] = 2,
    ACTIONS(111), 2,
      anon_sym_then,
      anon_sym_LPAREN,
    ACTIONS(113), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [853] = 1,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [861] = 2,
    ACTIONS(119), 1,
      anon_sym_else,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [871] = 3,
    STATE(41), 1,
      aux_sym_prefixexpr_repeat1,
    ACTIONS(121), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(124), 2,
      anon_sym_LPAREN,
      sym_lowerid,
  [883] = 1,
    ACTIONS(126), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      sym_lowerid,
  [890] = 1,
    ACTIONS(128), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      sym_lowerid,
  [897] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(130), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [908] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(135), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [919] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(139), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [930] = 1,
    ACTIONS(141), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [936] = 2,
    ACTIONS(80), 1,
      anon_sym_then,
    ACTIONS(143), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [944] = 1,
    ACTIONS(130), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [950] = 1,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
  [954] = 1,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
  [958] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [962] = 1,
    ACTIONS(151), 1,
      anon_sym_then,
  [966] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [970] = 1,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
  [974] = 1,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 326,
  [SMALL_STATE(10)] = 358,
  [SMALL_STATE(11)] = 374,
  [SMALL_STATE(12)] = 390,
  [SMALL_STATE(13)] = 406,
  [SMALL_STATE(14)] = 422,
  [SMALL_STATE(15)] = 438,
  [SMALL_STATE(16)] = 470,
  [SMALL_STATE(17)] = 485,
  [SMALL_STATE(18)] = 514,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 556,
  [SMALL_STATE(21)] = 585,
  [SMALL_STATE(22)] = 606,
  [SMALL_STATE(23)] = 627,
  [SMALL_STATE(24)] = 648,
  [SMALL_STATE(25)] = 663,
  [SMALL_STATE(26)] = 678,
  [SMALL_STATE(27)] = 690,
  [SMALL_STATE(28)] = 709,
  [SMALL_STATE(29)] = 726,
  [SMALL_STATE(30)] = 743,
  [SMALL_STATE(31)] = 760,
  [SMALL_STATE(32)] = 779,
  [SMALL_STATE(33)] = 787,
  [SMALL_STATE(34)] = 797,
  [SMALL_STATE(35)] = 807,
  [SMALL_STATE(36)] = 821,
  [SMALL_STATE(37)] = 835,
  [SMALL_STATE(38)] = 843,
  [SMALL_STATE(39)] = 853,
  [SMALL_STATE(40)] = 861,
  [SMALL_STATE(41)] = 871,
  [SMALL_STATE(42)] = 883,
  [SMALL_STATE(43)] = 890,
  [SMALL_STATE(44)] = 897,
  [SMALL_STATE(45)] = 908,
  [SMALL_STATE(46)] = 919,
  [SMALL_STATE(47)] = 930,
  [SMALL_STATE(48)] = 936,
  [SMALL_STATE(49)] = 944,
  [SMALL_STATE(50)] = 950,
  [SMALL_STATE(51)] = 954,
  [SMALL_STATE(52)] = 958,
  [SMALL_STATE(53)] = 962,
  [SMALL_STATE(54)] = 966,
  [SMALL_STATE(55)] = 970,
  [SMALL_STATE(56)] = 974,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qidentifier, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qidentifier, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varid, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varid, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_opexpr_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opexpr_repeat1, 2), SHIFT_REPEAT(42),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixexpr, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixexpr, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opexpr, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixexpr, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixexpr, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opexpr, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opexpr_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_expr, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ntl_expr_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ntl_expr_repeat1, 2), SHIFT_REPEAT(42),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_expr, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_app_expr, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_app_expr, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_app_expr, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_app_expr, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_prefix_expr, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_prefix_expr, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_prefix_expr, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_prefix_expr, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_app_expr, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_app_expr, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockexpr, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefixexpr_repeat1, 2), SHIFT_REPEAT(41),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefixexpr_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qoperator, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ntl_expr_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
