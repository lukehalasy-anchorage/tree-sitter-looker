#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_view = 1,
  anon_sym_explore = 2,
  anon_sym_POUND = 3,
  aux_sym_lookml_comment_token1 = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_sql_table_name = 7,
  anon_sym_SEMI_SEMI = 8,
  anon_sym_derived_table = 9,
  anon_sym_sql = 10,
  aux_sym_derived_table_sql_query_token1 = 11,
  anon_sym_dimension = 12,
  sym_assignment = 13,
  sym_identifier = 14,
  anon_sym_LBRACK = 15,
  anon_sym_COMMA = 16,
  anon_sym_RBRACK = 17,
  anon_sym_sql_on = 18,
  anon_sym_sql_where = 19,
  anon_sym_sql_foreign_key = 20,
  anon_sym_sql_always_having = 21,
  anon_sym_sql_always_where = 22,
  anon_sym_sql_distinct_key = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  anon_sym_yes = 26,
  anon_sym_no = 27,
  sym_source_file = 28,
  sym_view_definition = 29,
  sym_model_definition = 30,
  sym_explore_definition = 31,
  sym_lookml_comment = 32,
  sym_view_definition_block = 33,
  sym_table_specification = 34,
  sym_sql_table_name_declaration = 35,
  sym_derived_table = 36,
  sym_derived_table_block = 37,
  sym_derived_table_definition = 38,
  sym_derived_table_sql_query = 39,
  sym_list = 40,
  sym_block = 41,
  sym_statement = 42,
  sym_sql_containing_field = 43,
  sym_sql_query = 44,
  sym_string = 45,
  sym_boolean = 46,
  aux_sym_model_definition_repeat1 = 47,
  aux_sym_view_definition_block_repeat1 = 48,
  aux_sym_list_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_view] = "view",
  [anon_sym_explore] = "explore",
  [anon_sym_POUND] = "#",
  [aux_sym_lookml_comment_token1] = "lookml_comment_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_sql_table_name] = "sql_table_name",
  [anon_sym_SEMI_SEMI] = ";;",
  [anon_sym_derived_table] = "derived_table",
  [anon_sym_sql] = "sql",
  [aux_sym_derived_table_sql_query_token1] = "derived_table_sql_query_token1",
  [anon_sym_dimension] = "dimension",
  [sym_assignment] = "assignment",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_sql_on] = "sql_on",
  [anon_sym_sql_where] = "sql_where",
  [anon_sym_sql_foreign_key] = "sql_foreign_key",
  [anon_sym_sql_always_having] = "sql_always_having",
  [anon_sym_sql_always_where] = "sql_always_where",
  [anon_sym_sql_distinct_key] = "sql_distinct_key",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_yes] = "yes",
  [anon_sym_no] = "no",
  [sym_source_file] = "source_file",
  [sym_view_definition] = "view_definition",
  [sym_model_definition] = "model_definition",
  [sym_explore_definition] = "explore_definition",
  [sym_lookml_comment] = "lookml_comment",
  [sym_view_definition_block] = "view_definition_block",
  [sym_table_specification] = "table_specification",
  [sym_sql_table_name_declaration] = "sql_table_name_declaration",
  [sym_derived_table] = "derived_table",
  [sym_derived_table_block] = "derived_table_block",
  [sym_derived_table_definition] = "derived_table_definition",
  [sym_derived_table_sql_query] = "derived_table_sql_query",
  [sym_list] = "list",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_sql_containing_field] = "sql_containing_field",
  [sym_sql_query] = "sql_query",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [aux_sym_model_definition_repeat1] = "model_definition_repeat1",
  [aux_sym_view_definition_block_repeat1] = "view_definition_block_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_view] = anon_sym_view,
  [anon_sym_explore] = anon_sym_explore,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_lookml_comment_token1] = aux_sym_lookml_comment_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_sql_table_name] = anon_sym_sql_table_name,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [anon_sym_derived_table] = anon_sym_derived_table,
  [anon_sym_sql] = anon_sym_sql,
  [aux_sym_derived_table_sql_query_token1] = aux_sym_derived_table_sql_query_token1,
  [anon_sym_dimension] = anon_sym_dimension,
  [sym_assignment] = sym_assignment,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_sql_on] = anon_sym_sql_on,
  [anon_sym_sql_where] = anon_sym_sql_where,
  [anon_sym_sql_foreign_key] = anon_sym_sql_foreign_key,
  [anon_sym_sql_always_having] = anon_sym_sql_always_having,
  [anon_sym_sql_always_where] = anon_sym_sql_always_where,
  [anon_sym_sql_distinct_key] = anon_sym_sql_distinct_key,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [sym_source_file] = sym_source_file,
  [sym_view_definition] = sym_view_definition,
  [sym_model_definition] = sym_model_definition,
  [sym_explore_definition] = sym_explore_definition,
  [sym_lookml_comment] = sym_lookml_comment,
  [sym_view_definition_block] = sym_view_definition_block,
  [sym_table_specification] = sym_table_specification,
  [sym_sql_table_name_declaration] = sym_sql_table_name_declaration,
  [sym_derived_table] = sym_derived_table,
  [sym_derived_table_block] = sym_derived_table_block,
  [sym_derived_table_definition] = sym_derived_table_definition,
  [sym_derived_table_sql_query] = sym_derived_table_sql_query,
  [sym_list] = sym_list,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_sql_containing_field] = sym_sql_containing_field,
  [sym_sql_query] = sym_sql_query,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [aux_sym_model_definition_repeat1] = aux_sym_model_definition_repeat1,
  [aux_sym_view_definition_block_repeat1] = aux_sym_view_definition_block_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_view] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_explore] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lookml_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_table_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_derived_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_derived_table_sql_query_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_dimension] = {
    .visible = true,
    .named = false,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_foreign_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_always_having] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_always_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sql_distinct_key] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_view_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_model_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_explore_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_lookml_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_view_definition_block] = {
    .visible = true,
    .named = true,
  },
  [sym_table_specification] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_table_name_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_derived_table] = {
    .visible = true,
    .named = true,
  },
  [sym_derived_table_block] = {
    .visible = true,
    .named = true,
  },
  [sym_derived_table_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_derived_table_sql_query] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_containing_field] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_query] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_model_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_view_definition_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 5,
  [13] = 13,
  [14] = 13,
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
  [29] = 26,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 31,
  [35] = 32,
  [36] = 18,
  [37] = 31,
  [38] = 24,
  [39] = 21,
  [40] = 40,
  [41] = 41,
  [42] = 30,
  [43] = 25,
  [44] = 19,
  [45] = 16,
  [46] = 17,
  [47] = 47,
  [48] = 48,
  [49] = 27,
  [50] = 15,
  [51] = 22,
  [52] = 23,
  [53] = 53,
  [54] = 54,
  [55] = 24,
  [56] = 56,
  [57] = 57,
  [58] = 18,
  [59] = 21,
  [60] = 26,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 89,
  [91] = 72,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 84,
  [96] = 96,
  [97] = 97,
  [98] = 84,
  [99] = 99,
  [100] = 99,
  [101] = 87,
  [102] = 87,
  [103] = 76,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == ';') ADVANCE(5);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(45);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '[') ADVANCE(118);
      if (lookahead == ']') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(45);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'v') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_view);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_explore);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_lookml_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_lookml_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_sql_table_name);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_derived_table);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_sql);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_sql);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_derived_table_sql_query_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_derived_table_sql_query_token1);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_dimension);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_assignment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 't') ADVANCE(32);
      if (lookahead == 'w') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'b') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(34);
      if (lookahead == 'w') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'h') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'k') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'k') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 's') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 's') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 't') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'w') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'x') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'y') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == 'y') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_sql_on);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_sql_where);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_sql_foreign_key);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_sql_always_having);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_sql_always_where);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_sql_distinct_key);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 128},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 128},
  [102] = {.lex_state = 128},
  [103] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_view] = ACTIONS(1),
    [anon_sym_explore] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_sql_table_name] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(1),
    [anon_sym_derived_table] = ACTIONS(1),
    [anon_sym_sql] = ACTIONS(1),
    [anon_sym_dimension] = ACTIONS(1),
    [sym_assignment] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_sql_on] = ACTIONS(1),
    [anon_sym_sql_where] = ACTIONS(1),
    [anon_sym_sql_foreign_key] = ACTIONS(1),
    [anon_sym_sql_always_having] = ACTIONS(1),
    [anon_sym_sql_always_where] = ACTIONS(1),
    [anon_sym_sql_distinct_key] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_view_definition] = STATE(75),
    [sym_model_definition] = STATE(75),
    [sym_explore_definition] = STATE(4),
    [sym_lookml_comment] = STATE(23),
    [sym_statement] = STATE(4),
    [sym_sql_containing_field] = STATE(22),
    [aux_sym_model_definition_repeat1] = STATE(4),
    [anon_sym_view] = ACTIONS(3),
    [anon_sym_explore] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_sql] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_sql_on] = ACTIONS(9),
    [anon_sym_sql_where] = ACTIONS(9),
    [anon_sym_sql_foreign_key] = ACTIONS(9),
    [anon_sym_sql_always_having] = ACTIONS(9),
    [anon_sym_sql_always_where] = ACTIONS(9),
    [anon_sym_sql_distinct_key] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_sql_table_name,
    ACTIONS(19), 1,
      anon_sym_derived_table,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_table_specification,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(8), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    STATE(47), 2,
      sym_sql_table_name_declaration,
      sym_derived_table,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [42] = 8,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_explore,
    ACTIONS(30), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(22), 1,
      sym_sql_containing_field,
    STATE(23), 1,
      sym_lookml_comment,
    STATE(3), 3,
      sym_explore_definition,
      sym_statement,
      aux_sym_model_definition_repeat1,
    ACTIONS(33), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [75] = 8,
    ACTIONS(5), 1,
      anon_sym_explore,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_sql_containing_field,
    STATE(23), 1,
      sym_lookml_comment,
    STATE(3), 3,
      sym_explore_definition,
      sym_statement,
      aux_sym_model_definition_repeat1,
    ACTIONS(9), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [108] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [137] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(5), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [166] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [195] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [224] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(12), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [253] = 7,
    ACTIONS(51), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_identifier,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(56), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [282] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(7), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [311] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      sym_sql_containing_field,
    STATE(52), 1,
      sym_lookml_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_view_definition_block_repeat1,
    ACTIONS(21), 7,
      anon_sym_sql,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [340] = 4,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(66), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [362] = 4,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_block,
    ACTIONS(64), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(66), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [383] = 2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(74), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [399] = 2,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(78), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [415] = 2,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(82), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [431] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(86), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [447] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(90), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [463] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(94), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [479] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(98), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [495] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(102), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [511] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(102), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [527] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(106), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [543] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(110), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [559] = 2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(114), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [575] = 2,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(66), 9,
      anon_sym_explore,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [591] = 7,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_list_repeat1,
    ACTIONS(127), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(57), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [616] = 2,
    ACTIONS(112), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(114), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [631] = 7,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(134), 1,
      anon_sym_RBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(28), 1,
      aux_sym_list_repeat1,
    ACTIONS(138), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(57), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [656] = 7,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_list_repeat1,
    ACTIONS(138), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(57), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [681] = 6,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(27), 4,
      sym_list,
      sym_block,
      sym_string,
      sym_boolean,
  [704] = 7,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_list_repeat1,
    ACTIONS(138), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(57), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [729] = 7,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_list_repeat1,
    ACTIONS(138), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(57), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [754] = 6,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_DQUOTE,
    ACTIONS(160), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(49), 4,
      sym_list,
      sym_block,
      sym_string,
      sym_boolean,
  [777] = 2,
    ACTIONS(84), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(86), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [792] = 7,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      aux_sym_list_repeat1,
    ACTIONS(138), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(57), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [817] = 2,
    ACTIONS(104), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(106), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [832] = 2,
    ACTIONS(96), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(98), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [847] = 2,
    ACTIONS(164), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(166), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [862] = 2,
    ACTIONS(168), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(170), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [877] = 7,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_list_repeat1,
    ACTIONS(138), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(57), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [902] = 2,
    ACTIONS(108), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(110), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [917] = 2,
    ACTIONS(88), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(90), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [932] = 2,
    ACTIONS(76), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(78), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [947] = 2,
    ACTIONS(80), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(82), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [962] = 2,
    ACTIONS(174), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(176), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [977] = 2,
    ACTIONS(178), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(180), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [992] = 2,
    ACTIONS(64), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(66), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [1007] = 2,
    ACTIONS(72), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(74), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [1022] = 2,
    ACTIONS(100), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(102), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [1037] = 2,
    ACTIONS(100), 2,
      anon_sym_POUND,
      anon_sym_RBRACE,
    ACTIONS(102), 8,
      anon_sym_sql,
      sym_identifier,
      anon_sym_sql_on,
      anon_sym_sql_where,
      anon_sym_sql_foreign_key,
      anon_sym_sql_always_having,
      anon_sym_sql_always_where,
      anon_sym_sql_distinct_key,
  [1052] = 5,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(138), 2,
      anon_sym_yes,
      anon_sym_no,
    STATE(56), 3,
      sym_list,
      sym_string,
      sym_boolean,
  [1071] = 4,
    ACTIONS(184), 1,
      sym_assignment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(186), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(188), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1088] = 2,
    ACTIONS(106), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(104), 4,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1100] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(192), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(194), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1114] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(186), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(188), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1128] = 2,
    ACTIONS(86), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(84), 4,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1140] = 2,
    ACTIONS(98), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(96), 4,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1152] = 2,
    ACTIONS(114), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(112), 4,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1164] = 2,
    ACTIONS(198), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
    ACTIONS(200), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [1175] = 2,
    ACTIONS(122), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
    ACTIONS(202), 3,
      sym_identifier,
      anon_sym_yes,
      anon_sym_no,
  [1186] = 2,
    ACTIONS(204), 1,
      aux_sym_derived_table_sql_query_token1,
    STATE(97), 1,
      sym_sql_query,
  [1193] = 2,
    ACTIONS(204), 1,
      aux_sym_derived_table_sql_query_token1,
    STATE(90), 1,
      sym_sql_query,
  [1200] = 2,
    ACTIONS(204), 1,
      aux_sym_derived_table_sql_query_token1,
    STATE(89), 1,
      sym_sql_query,
  [1207] = 2,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_view_definition_block,
  [1214] = 2,
    ACTIONS(208), 1,
      anon_sym_sql,
    STATE(85), 1,
      sym_derived_table_definition,
  [1221] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
  [1228] = 2,
    ACTIONS(210), 1,
      aux_sym_derived_table_sql_query_token1,
    STATE(88), 1,
      sym_derived_table_sql_query,
  [1235] = 2,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_derived_table_block,
  [1242] = 1,
    ACTIONS(214), 1,
      anon_sym_SEMI_SEMI,
  [1246] = 1,
    ACTIONS(216), 1,
      aux_sym_lookml_comment_token1,
  [1250] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
  [1254] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [1258] = 1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [1262] = 1,
    ACTIONS(224), 1,
      sym_assignment,
  [1266] = 1,
    ACTIONS(226), 1,
      sym_assignment,
  [1270] = 1,
    ACTIONS(228), 1,
      sym_assignment,
  [1274] = 1,
    ACTIONS(230), 1,
      sym_assignment,
  [1278] = 1,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
  [1282] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1286] = 1,
    ACTIONS(236), 1,
      sym_identifier,
  [1290] = 1,
    ACTIONS(238), 1,
      sym_identifier,
  [1294] = 1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
  [1298] = 1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
  [1302] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [1306] = 1,
    ACTIONS(246), 1,
      aux_sym_string_token1,
  [1310] = 1,
    ACTIONS(248), 1,
      anon_sym_SEMI_SEMI,
  [1314] = 1,
    ACTIONS(250), 1,
      anon_sym_SEMI_SEMI,
  [1318] = 1,
    ACTIONS(252), 1,
      anon_sym_SEMI_SEMI,
  [1322] = 1,
    ACTIONS(254), 1,
      aux_sym_lookml_comment_token1,
  [1326] = 1,
    ACTIONS(256), 1,
      anon_sym_SEMI_SEMI,
  [1330] = 1,
    ACTIONS(258), 1,
      sym_assignment,
  [1334] = 1,
    ACTIONS(260), 1,
      sym_assignment,
  [1338] = 1,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
  [1342] = 1,
    ACTIONS(264), 1,
      ts_builtin_sym_end,
  [1346] = 1,
    ACTIONS(266), 1,
      anon_sym_SEMI_SEMI,
  [1350] = 1,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
  [1354] = 1,
    ACTIONS(270), 1,
      sym_assignment,
  [1358] = 1,
    ACTIONS(272), 1,
      sym_assignment,
  [1362] = 1,
    ACTIONS(274), 1,
      aux_sym_string_token1,
  [1366] = 1,
    ACTIONS(276), 1,
      aux_sym_string_token1,
  [1370] = 1,
    ACTIONS(278), 1,
      sym_assignment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 166,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 224,
  [SMALL_STATE(10)] = 253,
  [SMALL_STATE(11)] = 282,
  [SMALL_STATE(12)] = 311,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 362,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 399,
  [SMALL_STATE(17)] = 415,
  [SMALL_STATE(18)] = 431,
  [SMALL_STATE(19)] = 447,
  [SMALL_STATE(20)] = 463,
  [SMALL_STATE(21)] = 479,
  [SMALL_STATE(22)] = 495,
  [SMALL_STATE(23)] = 511,
  [SMALL_STATE(24)] = 527,
  [SMALL_STATE(25)] = 543,
  [SMALL_STATE(26)] = 559,
  [SMALL_STATE(27)] = 575,
  [SMALL_STATE(28)] = 591,
  [SMALL_STATE(29)] = 616,
  [SMALL_STATE(30)] = 631,
  [SMALL_STATE(31)] = 656,
  [SMALL_STATE(32)] = 681,
  [SMALL_STATE(33)] = 704,
  [SMALL_STATE(34)] = 729,
  [SMALL_STATE(35)] = 754,
  [SMALL_STATE(36)] = 777,
  [SMALL_STATE(37)] = 792,
  [SMALL_STATE(38)] = 817,
  [SMALL_STATE(39)] = 832,
  [SMALL_STATE(40)] = 847,
  [SMALL_STATE(41)] = 862,
  [SMALL_STATE(42)] = 877,
  [SMALL_STATE(43)] = 902,
  [SMALL_STATE(44)] = 917,
  [SMALL_STATE(45)] = 932,
  [SMALL_STATE(46)] = 947,
  [SMALL_STATE(47)] = 962,
  [SMALL_STATE(48)] = 977,
  [SMALL_STATE(49)] = 992,
  [SMALL_STATE(50)] = 1007,
  [SMALL_STATE(51)] = 1022,
  [SMALL_STATE(52)] = 1037,
  [SMALL_STATE(53)] = 1052,
  [SMALL_STATE(54)] = 1071,
  [SMALL_STATE(55)] = 1088,
  [SMALL_STATE(56)] = 1100,
  [SMALL_STATE(57)] = 1114,
  [SMALL_STATE(58)] = 1128,
  [SMALL_STATE(59)] = 1140,
  [SMALL_STATE(60)] = 1152,
  [SMALL_STATE(61)] = 1164,
  [SMALL_STATE(62)] = 1175,
  [SMALL_STATE(63)] = 1186,
  [SMALL_STATE(64)] = 1193,
  [SMALL_STATE(65)] = 1200,
  [SMALL_STATE(66)] = 1207,
  [SMALL_STATE(67)] = 1214,
  [SMALL_STATE(68)] = 1221,
  [SMALL_STATE(69)] = 1228,
  [SMALL_STATE(70)] = 1235,
  [SMALL_STATE(71)] = 1242,
  [SMALL_STATE(72)] = 1246,
  [SMALL_STATE(73)] = 1250,
  [SMALL_STATE(74)] = 1254,
  [SMALL_STATE(75)] = 1258,
  [SMALL_STATE(76)] = 1262,
  [SMALL_STATE(77)] = 1266,
  [SMALL_STATE(78)] = 1270,
  [SMALL_STATE(79)] = 1274,
  [SMALL_STATE(80)] = 1278,
  [SMALL_STATE(81)] = 1282,
  [SMALL_STATE(82)] = 1286,
  [SMALL_STATE(83)] = 1290,
  [SMALL_STATE(84)] = 1294,
  [SMALL_STATE(85)] = 1298,
  [SMALL_STATE(86)] = 1302,
  [SMALL_STATE(87)] = 1306,
  [SMALL_STATE(88)] = 1310,
  [SMALL_STATE(89)] = 1314,
  [SMALL_STATE(90)] = 1318,
  [SMALL_STATE(91)] = 1322,
  [SMALL_STATE(92)] = 1326,
  [SMALL_STATE(93)] = 1330,
  [SMALL_STATE(94)] = 1334,
  [SMALL_STATE(95)] = 1338,
  [SMALL_STATE(96)] = 1342,
  [SMALL_STATE(97)] = 1346,
  [SMALL_STATE(98)] = 1350,
  [SMALL_STATE(99)] = 1354,
  [SMALL_STATE(100)] = 1358,
  [SMALL_STATE(101)] = 1362,
  [SMALL_STATE(102)] = 1366,
  [SMALL_STATE(103)] = 1370,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(93),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(91),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(76),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_model_definition_repeat1, 2), SHIFT_REPEAT(100),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_model_definition, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_view_definition_block_repeat1, 2), SHIFT_REPEAT(72),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_view_definition_block_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_definition_block_repeat1, 2), SHIFT_REPEAT(103),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_view_definition_block_repeat1, 2), SHIFT_REPEAT(99),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lookml_comment, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lookml_comment, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_containing_field, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_containing_field, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_explore_definition, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_explore_definition, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(54),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(101),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(60),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derived_table, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derived_table, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name_declaration, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_table_name_declaration, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_specification, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_specification, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derived_table_block, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_derived_table_block, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derived_table_sql_query, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_derived_table_definition, 4),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_definition_block, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_definition_block, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_definition, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_query, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_view_definition_block, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lookml(void) {
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
