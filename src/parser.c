#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_if = 2,
  anon_sym_then = 3,
  anon_sym_else = 4,
  anon_sym_elif = 5,
  anon_sym_match = 6,
  anon_sym_LBRACE = 7,
  anon_sym_BANG = 8,
  anon_sym_TILDE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_DOT = 14,
  anon_sym_COMMA = 15,
  anon_sym_PIPE_PIPE = 16,
  sym_symbols = 17,
  anon_sym_DOLLAR = 18,
  anon_sym_PERCENT = 19,
  anon_sym_AMP = 20,
  anon_sym_STAR = 21,
  anon_sym_PLUS = 22,
  anon_sym_CARET = 23,
  anon_sym_POUND = 24,
  anon_sym_EQ = 25,
  anon_sym_COLON = 26,
  anon_sym_DASH = 27,
  anon_sym_QMARK = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_PIPE = 31,
  sym_lowerid = 32,
  anon_sym_DASH_GT = 33,
  sym_source_file = 34,
  sym__expression = 35,
  sym_basic_expr = 36,
  sym_if_expr = 37,
  sym_elif = 38,
  sym_blockexpr = 39,
  sym_opexpr = 40,
  sym_prefixexpr = 41,
  sym_appexpr = 42,
  sym_ntl_expr = 43,
  sym_ntl_prefix_expr = 44,
  sym_ntl_app_expr = 45,
  sym_arguments = 46,
  sym_argument = 47,
  sym_qoperator = 48,
  sym_op = 49,
  sym_varid = 50,
  sym_identifier = 51,
  sym_qidentifier = 52,
  sym_atom = 53,
  aux_sym_if_expr_repeat1 = 54,
  aux_sym_opexpr_repeat1 = 55,
  aux_sym_prefixexpr_repeat1 = 56,
  aux_sym_ntl_expr_repeat1 = 57,
  aux_sym_arguments_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_elif] = "elif",
  [anon_sym_match] = "match",
  [anon_sym_LBRACE] = "{",
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
  [anon_sym_DASH_GT] = "->",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_basic_expr] = "basic_expr",
  [sym_if_expr] = "if_expr",
  [sym_elif] = "elif",
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
  [aux_sym_if_expr_repeat1] = "if_expr_repeat1",
  [aux_sym_opexpr_repeat1] = "opexpr_repeat1",
  [aux_sym_prefixexpr_repeat1] = "prefixexpr_repeat1",
  [aux_sym_ntl_expr_repeat1] = "ntl_expr_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_basic_expr] = sym_basic_expr,
  [sym_if_expr] = sym_if_expr,
  [sym_elif] = sym_elif,
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
  [aux_sym_if_expr_repeat1] = aux_sym_if_expr_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
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
  [sym_elif] = {
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
  [aux_sym_if_expr_repeat1] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '$') ADVANCE(40);
      if (lookahead == '%') ADVANCE(41);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(49);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == '?') ADVANCE(50);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '^') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == '~') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'f') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (sym_symbols_character_set_1(lookahead)) ADVANCE(39);
      if (lookahead == '(') ADVANCE(28);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (sym_symbols_character_set_2(lookahead)) ADVANCE(39);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (sym_symbols_character_set_3(lookahead)) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (sym_symbols_character_set_3(lookahead)) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_symbols);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_symbols);
      if (sym_symbols_character_set_2(lookahead)) ADVANCE(39);
      if (lookahead == '|') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_symbols);
      if (sym_symbols_character_set_3(lookahead)) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(35);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
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
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym__expression] = STATE(70),
    [sym_basic_expr] = STATE(70),
    [sym_if_expr] = STATE(41),
    [sym_opexpr] = STATE(41),
    [sym_prefixexpr] = STATE(21),
    [sym_appexpr] = STATE(23),
    [sym_varid] = STATE(14),
    [sym_identifier] = STATE(15),
    [sym_qidentifier] = STATE(16),
    [sym_atom] = STATE(28),
    [aux_sym_prefixexpr_repeat1] = STATE(32),
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
      anon_sym_RPAREN,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(59), 1,
      sym_argument,
    STATE(63), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(61), 2,
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
      anon_sym_RBRACK,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(59), 1,
      sym_argument,
    STATE(66), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(61), 2,
      sym__expression,
      sym_basic_expr,
  [104] = 15,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(59), 1,
      sym_argument,
    STATE(65), 1,
      sym_arguments,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(61), 2,
      sym__expression,
      sym_basic_expr,
  [153] = 14,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    ACTIONS(13), 1,
      anon_sym_if,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(43), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
  [199] = 14,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    ACTIONS(13), 1,
      anon_sym_if,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(48), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
  [245] = 14,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    ACTIONS(13), 1,
      anon_sym_if,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(35), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
  [291] = 14,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    ACTIONS(13), 1,
      anon_sym_if,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(34), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
  [337] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(48), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
  [383] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(45), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
  [429] = 14,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    ACTIONS(13), 1,
      anon_sym_if,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(45), 1,
      sym_blockexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(39), 2,
      sym__expression,
      sym_basic_expr,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
  [475] = 14,
    ACTIONS(3), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(9), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(21), 1,
      sym_prefixexpr,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(60), 1,
      sym_argument,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(41), 2,
      sym_if_expr,
      sym_opexpr,
    STATE(61), 2,
      sym__expression,
      sym_basic_expr,
  [521] = 11,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(31), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(47), 1,
      sym_ntl_prefix_expr,
    STATE(50), 1,
      sym_ntl_app_expr,
    STATE(54), 1,
      sym_atom,
    STATE(69), 1,
      sym_ntl_expr,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [556] = 2,
    ACTIONS(21), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(19), 9,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [573] = 2,
    ACTIONS(25), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(23), 9,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [590] = 2,
    ACTIONS(29), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [607] = 11,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(31), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(47), 1,
      sym_ntl_prefix_expr,
    STATE(50), 1,
      sym_ntl_app_expr,
    STATE(54), 1,
      sym_atom,
    STATE(68), 1,
      sym_ntl_expr,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [642] = 2,
    ACTIONS(33), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [659] = 11,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(31), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(47), 1,
      sym_ntl_prefix_expr,
    STATE(50), 1,
      sym_ntl_app_expr,
    STATE(54), 1,
      sym_atom,
    STATE(64), 1,
      sym_ntl_expr,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [694] = 2,
    ACTIONS(37), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      anon_sym_then,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [711] = 5,
    STATE(22), 1,
      sym_qoperator,
    STATE(24), 1,
      aux_sym_opexpr_repeat1,
    STATE(57), 1,
      sym_op,
    ACTIONS(41), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(39), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [733] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(23), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(32), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(36), 1,
      sym_prefixexpr,
    ACTIONS(5), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [765] = 5,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(51), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(43), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [787] = 5,
    STATE(22), 1,
      sym_qoperator,
    STATE(30), 1,
      aux_sym_opexpr_repeat1,
    STATE(57), 1,
      sym_op,
    ACTIONS(41), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(53), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [809] = 2,
    ACTIONS(57), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [825] = 5,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_DOT,
    ACTIONS(61), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [847] = 2,
    ACTIONS(65), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [863] = 2,
    ACTIONS(69), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(67), 8,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [879] = 10,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(31), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(50), 1,
      sym_ntl_app_expr,
    STATE(54), 1,
      sym_atom,
    STATE(62), 1,
      sym_ntl_prefix_expr,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [911] = 5,
    STATE(22), 1,
      sym_qoperator,
    STATE(30), 1,
      aux_sym_opexpr_repeat1,
    STATE(57), 1,
      sym_op,
    ACTIONS(73), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [933] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(51), 1,
      sym_ntl_app_expr,
    STATE(52), 1,
      aux_sym_prefixexpr_repeat1,
    STATE(54), 1,
      sym_atom,
    ACTIONS(76), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [962] = 9,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(26), 1,
      sym_appexpr,
    STATE(28), 1,
      sym_atom,
    STATE(52), 1,
      aux_sym_prefixexpr_repeat1,
    ACTIONS(76), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
  [991] = 4,
    ACTIONS(80), 1,
      anon_sym_else,
    ACTIONS(82), 1,
      anon_sym_elif,
    STATE(38), 2,
      sym_elif,
      aux_sym_if_expr_repeat1,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1008] = 4,
    ACTIONS(82), 1,
      anon_sym_elif,
    ACTIONS(86), 1,
      anon_sym_else,
    STATE(33), 2,
      sym_elif,
      aux_sym_if_expr_repeat1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1025] = 4,
    ACTIONS(82), 1,
      anon_sym_elif,
    ACTIONS(88), 1,
      anon_sym_else,
    STATE(37), 2,
      sym_elif,
      aux_sym_if_expr_repeat1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1042] = 2,
    ACTIONS(90), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
    ACTIONS(71), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1055] = 3,
    ACTIONS(92), 1,
      anon_sym_else,
    STATE(38), 2,
      sym_elif,
      aux_sym_if_expr_repeat1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1070] = 3,
    ACTIONS(96), 1,
      anon_sym_elif,
    STATE(38), 2,
      sym_elif,
      aux_sym_if_expr_repeat1,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1085] = 1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1094] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(27), 1,
      sym_atom,
  [1113] = 1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1122] = 5,
    ACTIONS(103), 1,
      anon_sym_then,
    STATE(29), 1,
      sym_qoperator,
    STATE(46), 1,
      aux_sym_ntl_expr_repeat1,
    STATE(57), 1,
      sym_op,
    ACTIONS(41), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1139] = 1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1148] = 6,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_lowerid,
    STATE(14), 1,
      sym_varid,
    STATE(15), 1,
      sym_identifier,
    STATE(16), 1,
      sym_qidentifier,
    STATE(49), 1,
      sym_atom,
  [1167] = 1,
    ACTIONS(107), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1176] = 5,
    ACTIONS(109), 1,
      anon_sym_then,
    STATE(29), 1,
      sym_qoperator,
    STATE(46), 1,
      aux_sym_ntl_expr_repeat1,
    STATE(57), 1,
      sym_op,
    ACTIONS(111), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1193] = 5,
    ACTIONS(114), 1,
      anon_sym_then,
    STATE(29), 1,
      sym_qoperator,
    STATE(42), 1,
      aux_sym_ntl_expr_repeat1,
    STATE(57), 1,
      sym_op,
    ACTIONS(41), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1210] = 1,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_else,
      anon_sym_elif,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1219] = 2,
    ACTIONS(118), 2,
      anon_sym_then,
      anon_sym_LPAREN,
    ACTIONS(120), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1229] = 4,
    ACTIONS(122), 1,
      anon_sym_then,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(128), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1243] = 4,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(130), 1,
      anon_sym_then,
    ACTIONS(132), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1257] = 3,
    STATE(52), 1,
      aux_sym_prefixexpr_repeat1,
    ACTIONS(134), 2,
      anon_sym_BANG,
      anon_sym_TILDE,
    ACTIONS(137), 2,
      anon_sym_LPAREN,
      sym_lowerid,
  [1269] = 2,
    ACTIONS(139), 2,
      anon_sym_then,
      anon_sym_LPAREN,
    ACTIONS(141), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1279] = 2,
    ACTIONS(143), 2,
      anon_sym_then,
      anon_sym_LPAREN,
    ACTIONS(145), 3,
      anon_sym_DOT,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1289] = 1,
    ACTIONS(147), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      sym_lowerid,
  [1296] = 3,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(149), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1307] = 1,
    ACTIONS(154), 4,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
      sym_lowerid,
  [1314] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(156), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1325] = 3,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(160), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1336] = 1,
    ACTIONS(149), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1342] = 1,
    ACTIONS(162), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [1348] = 2,
    ACTIONS(109), 1,
      anon_sym_then,
    ACTIONS(164), 2,
      anon_sym_PIPE_PIPE,
      sym_symbols,
  [1356] = 1,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
  [1360] = 1,
    ACTIONS(168), 1,
      anon_sym_then,
  [1364] = 1,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
  [1368] = 1,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
  [1372] = 1,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
  [1376] = 1,
    ACTIONS(174), 1,
      anon_sym_then,
  [1380] = 1,
    ACTIONS(176), 1,
      anon_sym_then,
  [1384] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [1388] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 199,
  [SMALL_STATE(7)] = 245,
  [SMALL_STATE(8)] = 291,
  [SMALL_STATE(9)] = 337,
  [SMALL_STATE(10)] = 383,
  [SMALL_STATE(11)] = 429,
  [SMALL_STATE(12)] = 475,
  [SMALL_STATE(13)] = 521,
  [SMALL_STATE(14)] = 556,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 590,
  [SMALL_STATE(17)] = 607,
  [SMALL_STATE(18)] = 642,
  [SMALL_STATE(19)] = 659,
  [SMALL_STATE(20)] = 694,
  [SMALL_STATE(21)] = 711,
  [SMALL_STATE(22)] = 733,
  [SMALL_STATE(23)] = 765,
  [SMALL_STATE(24)] = 787,
  [SMALL_STATE(25)] = 809,
  [SMALL_STATE(26)] = 825,
  [SMALL_STATE(27)] = 847,
  [SMALL_STATE(28)] = 863,
  [SMALL_STATE(29)] = 879,
  [SMALL_STATE(30)] = 911,
  [SMALL_STATE(31)] = 933,
  [SMALL_STATE(32)] = 962,
  [SMALL_STATE(33)] = 991,
  [SMALL_STATE(34)] = 1008,
  [SMALL_STATE(35)] = 1025,
  [SMALL_STATE(36)] = 1042,
  [SMALL_STATE(37)] = 1055,
  [SMALL_STATE(38)] = 1070,
  [SMALL_STATE(39)] = 1085,
  [SMALL_STATE(40)] = 1094,
  [SMALL_STATE(41)] = 1113,
  [SMALL_STATE(42)] = 1122,
  [SMALL_STATE(43)] = 1139,
  [SMALL_STATE(44)] = 1148,
  [SMALL_STATE(45)] = 1167,
  [SMALL_STATE(46)] = 1176,
  [SMALL_STATE(47)] = 1193,
  [SMALL_STATE(48)] = 1210,
  [SMALL_STATE(49)] = 1219,
  [SMALL_STATE(50)] = 1229,
  [SMALL_STATE(51)] = 1243,
  [SMALL_STATE(52)] = 1257,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1279,
  [SMALL_STATE(55)] = 1289,
  [SMALL_STATE(56)] = 1296,
  [SMALL_STATE(57)] = 1307,
  [SMALL_STATE(58)] = 1314,
  [SMALL_STATE(59)] = 1325,
  [SMALL_STATE(60)] = 1336,
  [SMALL_STATE(61)] = 1342,
  [SMALL_STATE(62)] = 1348,
  [SMALL_STATE(63)] = 1356,
  [SMALL_STATE(64)] = 1360,
  [SMALL_STATE(65)] = 1364,
  [SMALL_STATE(66)] = 1368,
  [SMALL_STATE(67)] = 1372,
  [SMALL_STATE(68)] = 1376,
  [SMALL_STATE(69)] = 1380,
  [SMALL_STATE(70)] = 1384,
  [SMALL_STATE(71)] = 1388,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qidentifier, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qidentifier, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varid, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_varid, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opexpr, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixexpr, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixexpr, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opexpr, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefixexpr, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefixexpr, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_appexpr, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_appexpr, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_opexpr_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opexpr_repeat1, 2), SHIFT_REPEAT(55),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opexpr_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_expr_repeat1, 2), SHIFT_REPEAT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockexpr, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_expr, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_expr, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ntl_expr_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ntl_expr_repeat1, 2), SHIFT_REPEAT(55),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_expr, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_expr, 6),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_app_expr, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_app_expr, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_prefix_expr, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_prefix_expr, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_prefix_expr, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_prefix_expr, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefixexpr_repeat1, 2), SHIFT_REPEAT(52),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefixexpr_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_app_expr, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_app_expr, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ntl_app_expr, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ntl_app_expr, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qoperator, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ntl_expr_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
