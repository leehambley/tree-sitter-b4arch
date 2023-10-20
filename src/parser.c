#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  aux_sym_identifier_token1 = 2,
  anon_sym_DQUOTE = 3,
  sym__newline = 4,
  anon_sym_http_COLON_SLASH_SLASH = 5,
  anon_sym_https_COLON_SLASH_SLASH = 6,
  sym__url_host = 7,
  sym__url_port = 8,
  sym__url_path = 9,
  anon_sym_COMMA = 10,
  aux_sym__string_token1 = 11,
  aux_sym_comment_token1 = 12,
  anon_sym_Repository = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_Description = 16,
  anon_sym_Uses = 17,
  sym_diagram = 18,
  sym__expression = 19,
  sym_identifier = 20,
  sym__quote = 21,
  sym_url = 22,
  sym__comma = 23,
  sym_description = 24,
  sym_purpose = 25,
  sym__string = 26,
  sym_comment = 27,
  sym_repository_definition = 28,
  sym_description_definition = 29,
  sym_uses_definition = 30,
  aux_sym_diagram_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym__newline] = "_newline",
  [anon_sym_http_COLON_SLASH_SLASH] = "http://",
  [anon_sym_https_COLON_SLASH_SLASH] = "https://",
  [sym__url_host] = "_url_host",
  [sym__url_port] = "_url_port",
  [sym__url_path] = "_url_path",
  [anon_sym_COMMA] = ",",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_Repository] = "Repository",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_Description] = "Description",
  [anon_sym_Uses] = "Uses",
  [sym_diagram] = "diagram",
  [sym__expression] = "_expression",
  [sym_identifier] = "identifier",
  [sym__quote] = "_quote",
  [sym_url] = "url",
  [sym__comma] = "_comma",
  [sym_description] = "description",
  [sym_purpose] = "purpose",
  [sym__string] = "_string",
  [sym_comment] = "comment",
  [sym_repository_definition] = "repository_definition",
  [sym_description_definition] = "description_definition",
  [sym_uses_definition] = "uses_definition",
  [aux_sym_diagram_repeat1] = "diagram_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__newline] = sym__newline,
  [anon_sym_http_COLON_SLASH_SLASH] = anon_sym_http_COLON_SLASH_SLASH,
  [anon_sym_https_COLON_SLASH_SLASH] = anon_sym_https_COLON_SLASH_SLASH,
  [sym__url_host] = sym__url_host,
  [sym__url_port] = sym__url_port,
  [sym__url_path] = sym__url_path,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_Repository] = anon_sym_Repository,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_Description] = anon_sym_Description,
  [anon_sym_Uses] = anon_sym_Uses,
  [sym_diagram] = sym_diagram,
  [sym__expression] = sym__expression,
  [sym_identifier] = sym_identifier,
  [sym__quote] = sym__quote,
  [sym_url] = sym_url,
  [sym__comma] = sym__comma,
  [sym_description] = sym_description,
  [sym_purpose] = sym_purpose,
  [sym__string] = sym__string,
  [sym_comment] = sym_comment,
  [sym_repository_definition] = sym_repository_definition,
  [sym_description_definition] = sym_description_definition,
  [sym_uses_definition] = sym_uses_definition,
  [aux_sym_diagram_repeat1] = aux_sym_diagram_repeat1,
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_http_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym__url_host] = {
    .visible = false,
    .named = true,
  },
  [sym__url_port] = {
    .visible = false,
    .named = true,
  },
  [sym__url_path] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Repository] = {
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
  [anon_sym_Description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Uses] = {
    .visible = true,
    .named = false,
  },
  [sym_diagram] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__quote] = {
    .visible = false,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_purpose] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_repository_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_description_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_uses_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_diagram_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'U') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 's') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(3);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 't') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 't') ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 36:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == 's') ADVANCE(40);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == ':') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 't') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 't') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_http_COLON_SLASH_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__url_host);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__url_port);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__url_path);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Repository);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Description);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Uses);
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
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_http_COLON_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_https_COLON_SLASH_SLASH] = ACTIONS(1),
    [sym__url_host] = ACTIONS(1),
    [sym__url_port] = ACTIONS(1),
    [sym__url_path] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [anon_sym_Repository] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_Description] = ACTIONS(1),
    [anon_sym_Uses] = ACTIONS(1),
  },
  [1] = {
    [sym_diagram] = STATE(39),
    [sym__expression] = STATE(3),
    [sym_comment] = STATE(8),
    [sym_repository_definition] = STATE(8),
    [sym_description_definition] = STATE(8),
    [sym_uses_definition] = STATE(8),
    [aux_sym_diagram_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_Repository] = ACTIONS(7),
    [anon_sym_Description] = ACTIONS(9),
    [anon_sym_Uses] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_comment_token1,
    ACTIONS(18), 1,
      anon_sym_Repository,
    ACTIONS(21), 1,
      anon_sym_Description,
    ACTIONS(24), 1,
      anon_sym_Uses,
    STATE(2), 2,
      sym__expression,
      aux_sym_diagram_repeat1,
    STATE(8), 4,
      sym_comment,
      sym_repository_definition,
      sym_description_definition,
      sym_uses_definition,
  [26] = 7,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_Repository,
    ACTIONS(9), 1,
      anon_sym_Description,
    ACTIONS(11), 1,
      anon_sym_Uses,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym__expression,
      aux_sym_diagram_repeat1,
    STATE(8), 4,
      sym_comment,
      sym_repository_definition,
      sym_description_definition,
      sym_uses_definition,
  [52] = 1,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_comment_token1,
      anon_sym_Repository,
      anon_sym_Description,
      anon_sym_Uses,
  [61] = 1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_comment_token1,
      anon_sym_Repository,
      anon_sym_Description,
      anon_sym_Uses,
  [70] = 1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_comment_token1,
      anon_sym_Repository,
      anon_sym_Description,
      anon_sym_Uses,
  [79] = 1,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_comment_token1,
      anon_sym_Repository,
      anon_sym_Description,
      anon_sym_Uses,
  [88] = 2,
    ACTIONS(39), 1,
      anon_sym_SEMI,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_Repository,
      anon_sym_Description,
      anon_sym_Uses,
  [99] = 1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym_comment_token1,
      anon_sym_Repository,
      anon_sym_Description,
      anon_sym_Uses,
  [108] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      aux_sym_comment_token1,
      anon_sym_Repository,
      anon_sym_Description,
      anon_sym_Uses,
  [116] = 4,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_identifier,
    STATE(38), 1,
      sym__quote,
  [129] = 4,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_identifier,
    STATE(38), 1,
      sym__quote,
  [142] = 4,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_identifier,
    STATE(38), 1,
      sym__quote,
  [155] = 3,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    STATE(24), 1,
      sym__quote,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [166] = 4,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym__quote,
    STATE(43), 1,
      sym_purpose,
    STATE(44), 1,
      sym__string,
  [179] = 3,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym__quote,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [190] = 4,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_description,
    STATE(30), 1,
      sym__string,
    STATE(35), 1,
      sym__quote,
  [203] = 4,
    ACTIONS(45), 1,
      aux_sym_identifier_token1,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_identifier,
    STATE(38), 1,
      sym__quote,
  [216] = 2,
    ACTIONS(61), 1,
      sym__url_host,
    ACTIONS(59), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [224] = 3,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(15), 1,
      sym__comma,
  [234] = 2,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      sym__url_path,
  [241] = 2,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym__url_path,
  [248] = 2,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      sym__comma,
  [255] = 1,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [260] = 2,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_url,
  [267] = 2,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym__quote,
  [274] = 1,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [279] = 1,
    ACTIONS(83), 1,
      sym__newline,
  [283] = 1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
  [287] = 1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
  [291] = 1,
    ACTIONS(89), 1,
      anon_sym_COMMA,
  [295] = 1,
    ACTIONS(91), 1,
      sym__url_host,
  [299] = 1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
  [303] = 1,
    ACTIONS(95), 1,
      anon_sym_COMMA,
  [307] = 1,
    ACTIONS(97), 1,
      aux_sym__string_token1,
  [311] = 1,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
  [315] = 1,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
  [319] = 1,
    ACTIONS(103), 1,
      aux_sym_identifier_token1,
  [323] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [327] = 1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [331] = 1,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
  [335] = 1,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
  [339] = 1,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [343] = 1,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [347] = 1,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [351] = 1,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
  [355] = 1,
    ACTIONS(119), 1,
      anon_sym_LPAREN,
  [359] = 1,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 79,
  [SMALL_STATE(8)] = 88,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 129,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 166,
  [SMALL_STATE(16)] = 179,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 216,
  [SMALL_STATE(20)] = 224,
  [SMALL_STATE(21)] = 234,
  [SMALL_STATE(22)] = 241,
  [SMALL_STATE(23)] = 248,
  [SMALL_STATE(24)] = 255,
  [SMALL_STATE(25)] = 260,
  [SMALL_STATE(26)] = 267,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 279,
  [SMALL_STATE(29)] = 283,
  [SMALL_STATE(30)] = 287,
  [SMALL_STATE(31)] = 291,
  [SMALL_STATE(32)] = 295,
  [SMALL_STATE(33)] = 299,
  [SMALL_STATE(34)] = 303,
  [SMALL_STATE(35)] = 307,
  [SMALL_STATE(36)] = 311,
  [SMALL_STATE(37)] = 315,
  [SMALL_STATE(38)] = 319,
  [SMALL_STATE(39)] = 323,
  [SMALL_STATE(40)] = 327,
  [SMALL_STATE(41)] = 331,
  [SMALL_STATE(42)] = 335,
  [SMALL_STATE(43)] = 339,
  [SMALL_STATE(44)] = 343,
  [SMALL_STATE(45)] = 347,
  [SMALL_STATE(46)] = 351,
  [SMALL_STATE(47)] = 355,
  [SMALL_STATE(48)] = 359,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(28),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(47),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(37),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_diagram_repeat1, 2), SHIFT_REPEAT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_diagram, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_definition, 8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uses_definition, 6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description_definition, 6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repository_definition, 6),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_purpose, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_b4arch(void) {
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
