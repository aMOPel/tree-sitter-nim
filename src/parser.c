#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 119
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 0
#define TOKEN_COUNT 127
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_COMMA = 2,
  anon_sym_COLON = 3,
  anon_sym_let = 4,
  anon_sym_var = 5,
  anon_sym_using = 6,
  anon_sym_EQ = 7,
  anon_sym_not = 8,
  anon_sym_discard = 9,
  anon_sym_BQUOTE = 10,
  aux_sym_symbol_token1 = 11,
  aux_sym_operator_token1 = 12,
  aux_sym_operator_token2 = 13,
  aux_sym_operator_token3 = 14,
  aux_sym_operator_token4 = 15,
  aux_sym_operator_token5 = 16,
  anon_sym_or = 17,
  anon_sym_xor = 18,
  anon_sym_and = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_LT = 22,
  anon_sym_GT_EQ = 23,
  anon_sym_GT = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_in = 26,
  anon_sym_notin = 27,
  anon_sym_is = 28,
  anon_sym_isnot = 29,
  anon_sym_of = 30,
  anon_sym_as = 31,
  anon_sym_from = 32,
  aux_sym_operator_token6 = 33,
  anon_sym_DOT_DOT = 34,
  aux_sym_operator_token7 = 35,
  anon_sym_AMP = 36,
  aux_sym_operator_token8 = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  aux_sym_operator_token9 = 40,
  anon_sym_STAR = 41,
  anon_sym_SLASH = 42,
  anon_sym_PERCENT = 43,
  anon_sym_div = 44,
  anon_sym_mod = 45,
  anon_sym_shl = 46,
  anon_sym_shr = 47,
  aux_sym_operator_token10 = 48,
  anon_sym_static = 49,
  aux_sym_COMMENT_token1 = 50,
  aux_sym_normal_comment_token1 = 51,
  anon_sym_addr = 52,
  anon_sym_asm = 53,
  anon_sym_bind = 54,
  anon_sym_block = 55,
  anon_sym_break = 56,
  anon_sym_case = 57,
  anon_sym_cast = 58,
  anon_sym_concept = 59,
  anon_sym_const = 60,
  anon_sym_continue = 61,
  anon_sym_converter = 62,
  anon_sym_defer = 63,
  anon_sym_distinct = 64,
  anon_sym_do = 65,
  anon_sym_elif = 66,
  anon_sym_else = 67,
  anon_sym_end = 68,
  anon_sym_enum = 69,
  anon_sym_except = 70,
  anon_sym_export = 71,
  anon_sym_finally = 72,
  anon_sym_for = 73,
  anon_sym_func = 74,
  anon_sym_if = 75,
  anon_sym_import = 76,
  anon_sym_include = 77,
  anon_sym_interface = 78,
  anon_sym_iterator = 79,
  anon_sym_macro = 80,
  anon_sym_method = 81,
  anon_sym_mixin = 82,
  anon_sym_nil = 83,
  anon_sym_object = 84,
  anon_sym_out = 85,
  anon_sym_proc = 86,
  anon_sym_ptr = 87,
  anon_sym_raise = 88,
  anon_sym_ref = 89,
  anon_sym_return = 90,
  anon_sym_template = 91,
  anon_sym_try = 92,
  anon_sym_tuple = 93,
  anon_sym_type = 94,
  anon_sym_when = 95,
  anon_sym_while = 96,
  anon_sym_yield = 97,
  aux_sym_OP10_token1 = 98,
  aux_sym_IDENT_token1 = 99,
  sym_INT_LIT = 100,
  sym_INT8_LIT = 101,
  sym_INT16_LIT = 102,
  sym_INT32_LIT = 103,
  sym_INT64_LIT = 104,
  sym_UINT_LIT = 105,
  sym_UINT8_LIT = 106,
  sym_UINT16_LIT = 107,
  sym_UINT32_LIT = 108,
  sym_UINT64_LIT = 109,
  sym_FLOAT_LIT = 110,
  sym_FLOAT32_LIT = 111,
  sym_FLOAT64_LIT = 112,
  sym_CUSTOM_NUMERIC_LIT = 113,
  sym_CHAR_LIT = 114,
  sym_STR_LIT = 115,
  aux_sym_TRIPLESTR_LIT_token1 = 116,
  aux_sym_TRIPLESTR_LIT_token2 = 117,
  aux_sym_TRIPLESTR_LIT_token3 = 118,
  sym_RSTR_LIT = 119,
  sym_GENERALIZED_STR_LIT = 120,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 121,
  anon_sym_true = 122,
  anon_sym_false = 123,
  sym__NEWLINE = 124,
  sym__INDENT = 125,
  sym__DEDENT = 126,
  sym_module = 127,
  sym_comma = 128,
  sym_colcom = 129,
  sym_stmt = 130,
  sym_expr = 131,
  sym_complexOrSimpleStmt = 132,
  sym_variable = 133,
  sym_identColonEquals = 134,
  sym_typeDesc = 135,
  sym_colonBody = 136,
  sym_simpleStmt = 137,
  sym_discardStmt = 138,
  sym__simpleExpr = 139,
  sym_primary = 140,
  sym_identOrLiteral = 141,
  sym_literal = 142,
  sym_generalizedLit = 143,
  sym_symbol = 144,
  sym_operator = 145,
  sym_operatorB = 146,
  sym_COMMENT = 147,
  sym_normal_comment = 148,
  sym_KEYW = 149,
  sym_IDENT = 150,
  sym_TRIPLESTR_LIT = 151,
  sym_GENERALIZED_TRIPLESTR_LIT = 152,
  sym_NIL = 153,
  sym_BOOL_LIT = 154,
  aux_sym_module_repeat1 = 155,
  aux_sym_complexOrSimpleStmt_repeat1 = 156,
  aux_sym_identColonEquals_repeat1 = 157,
  aux_sym_typeDesc_repeat1 = 158,
  aux_sym__simpleExpr_repeat1 = 159,
  aux_sym_primary_repeat1 = 160,
  aux_sym_symbol_repeat1 = 161,
  aux_sym_symbol_repeat2 = 162,
  aux_sym_TRIPLESTR_LIT_repeat1 = 163,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_let] = "let",
  [anon_sym_var] = "var",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_not] = "not",
  [anon_sym_discard] = "discard",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_symbol_token1] = "symbol_token1",
  [aux_sym_operator_token1] = "operator_token1",
  [aux_sym_operator_token2] = "operator_token2",
  [aux_sym_operator_token3] = "operator_token3",
  [aux_sym_operator_token4] = "operator_token4",
  [aux_sym_operator_token5] = "operator_token5",
  [anon_sym_or] = "or",
  [anon_sym_xor] = "xor",
  [anon_sym_and] = "and",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_in] = "in",
  [anon_sym_notin] = "notin",
  [anon_sym_is] = "is",
  [anon_sym_isnot] = "isnot",
  [anon_sym_of] = "of",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [aux_sym_operator_token6] = "operator_token6",
  [anon_sym_DOT_DOT] = "..",
  [aux_sym_operator_token7] = "operator_token7",
  [anon_sym_AMP] = "&",
  [aux_sym_operator_token8] = "operator_token8",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_operator_token9] = "operator_token9",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_div] = "div",
  [anon_sym_mod] = "mod",
  [anon_sym_shl] = "shl",
  [anon_sym_shr] = "shr",
  [aux_sym_operator_token10] = "operator_token10",
  [anon_sym_static] = "static",
  [aux_sym_COMMENT_token1] = "COMMENT_token1",
  [aux_sym_normal_comment_token1] = "normal_comment_token1",
  [anon_sym_addr] = "addr",
  [anon_sym_asm] = "asm",
  [anon_sym_bind] = "bind",
  [anon_sym_block] = "block",
  [anon_sym_break] = "break",
  [anon_sym_case] = "case",
  [anon_sym_cast] = "cast",
  [anon_sym_concept] = "concept",
  [anon_sym_const] = "const",
  [anon_sym_continue] = "continue",
  [anon_sym_converter] = "converter",
  [anon_sym_defer] = "defer",
  [anon_sym_distinct] = "distinct",
  [anon_sym_do] = "do",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_enum] = "enum",
  [anon_sym_except] = "except",
  [anon_sym_export] = "export",
  [anon_sym_finally] = "finally",
  [anon_sym_for] = "for",
  [anon_sym_func] = "func",
  [anon_sym_if] = "if",
  [anon_sym_import] = "import",
  [anon_sym_include] = "include",
  [anon_sym_interface] = "interface",
  [anon_sym_iterator] = "iterator",
  [anon_sym_macro] = "macro",
  [anon_sym_method] = "method",
  [anon_sym_mixin] = "mixin",
  [anon_sym_nil] = "nil",
  [anon_sym_object] = "object",
  [anon_sym_out] = "out",
  [anon_sym_proc] = "proc",
  [anon_sym_ptr] = "ptr",
  [anon_sym_raise] = "raise",
  [anon_sym_ref] = "ref",
  [anon_sym_return] = "return",
  [anon_sym_template] = "template",
  [anon_sym_try] = "try",
  [anon_sym_tuple] = "tuple",
  [anon_sym_type] = "type",
  [anon_sym_when] = "when",
  [anon_sym_while] = "while",
  [anon_sym_yield] = "yield",
  [aux_sym_OP10_token1] = "OP10_token1",
  [aux_sym_IDENT_token1] = "IDENT_token1",
  [sym_INT_LIT] = "INT_LIT",
  [sym_INT8_LIT] = "INT8_LIT",
  [sym_INT16_LIT] = "INT16_LIT",
  [sym_INT32_LIT] = "INT32_LIT",
  [sym_INT64_LIT] = "INT64_LIT",
  [sym_UINT_LIT] = "UINT_LIT",
  [sym_UINT8_LIT] = "UINT8_LIT",
  [sym_UINT16_LIT] = "UINT16_LIT",
  [sym_UINT32_LIT] = "UINT32_LIT",
  [sym_UINT64_LIT] = "UINT64_LIT",
  [sym_FLOAT_LIT] = "FLOAT_LIT",
  [sym_FLOAT32_LIT] = "FLOAT32_LIT",
  [sym_FLOAT64_LIT] = "FLOAT64_LIT",
  [sym_CUSTOM_NUMERIC_LIT] = "CUSTOM_NUMERIC_LIT",
  [sym_CHAR_LIT] = "CHAR_LIT",
  [sym_STR_LIT] = "STR_LIT",
  [aux_sym_TRIPLESTR_LIT_token1] = "TRIPLESTR_LIT_token1",
  [aux_sym_TRIPLESTR_LIT_token2] = "TRIPLESTR_LIT_token2",
  [aux_sym_TRIPLESTR_LIT_token3] = "TRIPLESTR_LIT_token3",
  [sym_RSTR_LIT] = "RSTR_LIT",
  [sym_GENERALIZED_STR_LIT] = "GENERALIZED_STR_LIT",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__NEWLINE] = "_NEWLINE",
  [sym__INDENT] = "_INDENT",
  [sym__DEDENT] = "_DEDENT",
  [sym_module] = "module",
  [sym_comma] = "comma",
  [sym_colcom] = "colcom",
  [sym_stmt] = "stmt",
  [sym_expr] = "expr",
  [sym_complexOrSimpleStmt] = "complexOrSimpleStmt",
  [sym_variable] = "variable",
  [sym_identColonEquals] = "identColonEquals",
  [sym_typeDesc] = "typeDesc",
  [sym_colonBody] = "colonBody",
  [sym_simpleStmt] = "simpleStmt",
  [sym_discardStmt] = "discardStmt",
  [sym__simpleExpr] = "_simpleExpr",
  [sym_primary] = "primary",
  [sym_identOrLiteral] = "identOrLiteral",
  [sym_literal] = "literal",
  [sym_generalizedLit] = "generalizedLit",
  [sym_symbol] = "symbol",
  [sym_operator] = "operator",
  [sym_operatorB] = "operatorB",
  [sym_COMMENT] = "COMMENT",
  [sym_normal_comment] = "normal_comment",
  [sym_KEYW] = "KEYW",
  [sym_IDENT] = "IDENT",
  [sym_TRIPLESTR_LIT] = "TRIPLESTR_LIT",
  [sym_GENERALIZED_TRIPLESTR_LIT] = "GENERALIZED_TRIPLESTR_LIT",
  [sym_NIL] = "NIL",
  [sym_BOOL_LIT] = "BOOL_LIT",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_complexOrSimpleStmt_repeat1] = "complexOrSimpleStmt_repeat1",
  [aux_sym_identColonEquals_repeat1] = "identColonEquals_repeat1",
  [aux_sym_typeDesc_repeat1] = "typeDesc_repeat1",
  [aux_sym__simpleExpr_repeat1] = "_simpleExpr_repeat1",
  [aux_sym_primary_repeat1] = "primary_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
  [aux_sym_symbol_repeat2] = "symbol_repeat2",
  [aux_sym_TRIPLESTR_LIT_repeat1] = "TRIPLESTR_LIT_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_discard] = anon_sym_discard,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [aux_sym_operator_token1] = aux_sym_operator_token1,
  [aux_sym_operator_token2] = aux_sym_operator_token2,
  [aux_sym_operator_token3] = aux_sym_operator_token3,
  [aux_sym_operator_token4] = aux_sym_operator_token4,
  [aux_sym_operator_token5] = aux_sym_operator_token5,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_notin] = anon_sym_notin,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_isnot] = anon_sym_isnot,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [aux_sym_operator_token6] = aux_sym_operator_token6,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [aux_sym_operator_token7] = aux_sym_operator_token7,
  [anon_sym_AMP] = anon_sym_AMP,
  [aux_sym_operator_token8] = aux_sym_operator_token8,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_operator_token9] = aux_sym_operator_token9,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_div] = anon_sym_div,
  [anon_sym_mod] = anon_sym_mod,
  [anon_sym_shl] = anon_sym_shl,
  [anon_sym_shr] = anon_sym_shr,
  [aux_sym_operator_token10] = aux_sym_operator_token10,
  [anon_sym_static] = anon_sym_static,
  [aux_sym_COMMENT_token1] = aux_sym_COMMENT_token1,
  [aux_sym_normal_comment_token1] = aux_sym_normal_comment_token1,
  [anon_sym_addr] = anon_sym_addr,
  [anon_sym_asm] = anon_sym_asm,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_concept] = anon_sym_concept,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_converter] = anon_sym_converter,
  [anon_sym_defer] = anon_sym_defer,
  [anon_sym_distinct] = anon_sym_distinct,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_except] = anon_sym_except,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_finally] = anon_sym_finally,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_iterator] = anon_sym_iterator,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_mixin] = anon_sym_mixin,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_raise] = anon_sym_raise,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_try] = anon_sym_try,
  [anon_sym_tuple] = anon_sym_tuple,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_yield] = anon_sym_yield,
  [aux_sym_OP10_token1] = aux_sym_OP10_token1,
  [aux_sym_IDENT_token1] = aux_sym_IDENT_token1,
  [sym_INT_LIT] = sym_INT_LIT,
  [sym_INT8_LIT] = sym_INT8_LIT,
  [sym_INT16_LIT] = sym_INT16_LIT,
  [sym_INT32_LIT] = sym_INT32_LIT,
  [sym_INT64_LIT] = sym_INT64_LIT,
  [sym_UINT_LIT] = sym_UINT_LIT,
  [sym_UINT8_LIT] = sym_UINT8_LIT,
  [sym_UINT16_LIT] = sym_UINT16_LIT,
  [sym_UINT32_LIT] = sym_UINT32_LIT,
  [sym_UINT64_LIT] = sym_UINT64_LIT,
  [sym_FLOAT_LIT] = sym_FLOAT_LIT,
  [sym_FLOAT32_LIT] = sym_FLOAT32_LIT,
  [sym_FLOAT64_LIT] = sym_FLOAT64_LIT,
  [sym_CUSTOM_NUMERIC_LIT] = sym_CUSTOM_NUMERIC_LIT,
  [sym_CHAR_LIT] = sym_CHAR_LIT,
  [sym_STR_LIT] = sym_STR_LIT,
  [aux_sym_TRIPLESTR_LIT_token1] = aux_sym_TRIPLESTR_LIT_token1,
  [aux_sym_TRIPLESTR_LIT_token2] = aux_sym_TRIPLESTR_LIT_token2,
  [aux_sym_TRIPLESTR_LIT_token3] = aux_sym_TRIPLESTR_LIT_token3,
  [sym_RSTR_LIT] = sym_RSTR_LIT,
  [sym_GENERALIZED_STR_LIT] = sym_GENERALIZED_STR_LIT,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__NEWLINE] = sym__NEWLINE,
  [sym__INDENT] = sym__INDENT,
  [sym__DEDENT] = sym__DEDENT,
  [sym_module] = sym_module,
  [sym_comma] = sym_comma,
  [sym_colcom] = sym_colcom,
  [sym_stmt] = sym_stmt,
  [sym_expr] = sym_expr,
  [sym_complexOrSimpleStmt] = sym_complexOrSimpleStmt,
  [sym_variable] = sym_variable,
  [sym_identColonEquals] = sym_identColonEquals,
  [sym_typeDesc] = sym_typeDesc,
  [sym_colonBody] = sym_colonBody,
  [sym_simpleStmt] = sym_simpleStmt,
  [sym_discardStmt] = sym_discardStmt,
  [sym__simpleExpr] = sym__simpleExpr,
  [sym_primary] = sym_primary,
  [sym_identOrLiteral] = sym_identOrLiteral,
  [sym_literal] = sym_literal,
  [sym_generalizedLit] = sym_generalizedLit,
  [sym_symbol] = sym_symbol,
  [sym_operator] = sym_operator,
  [sym_operatorB] = sym_operatorB,
  [sym_COMMENT] = sym_COMMENT,
  [sym_normal_comment] = sym_normal_comment,
  [sym_KEYW] = sym_KEYW,
  [sym_IDENT] = sym_IDENT,
  [sym_TRIPLESTR_LIT] = sym_TRIPLESTR_LIT,
  [sym_GENERALIZED_TRIPLESTR_LIT] = sym_GENERALIZED_TRIPLESTR_LIT,
  [sym_NIL] = sym_NIL,
  [sym_BOOL_LIT] = sym_BOOL_LIT,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_complexOrSimpleStmt_repeat1] = aux_sym_complexOrSimpleStmt_repeat1,
  [aux_sym_identColonEquals_repeat1] = aux_sym_identColonEquals_repeat1,
  [aux_sym_typeDesc_repeat1] = aux_sym_typeDesc_repeat1,
  [aux_sym__simpleExpr_repeat1] = aux_sym__simpleExpr_repeat1,
  [aux_sym_primary_repeat1] = aux_sym_primary_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
  [aux_sym_symbol_repeat2] = aux_sym_symbol_repeat2,
  [aux_sym_TRIPLESTR_LIT_repeat1] = aux_sym_TRIPLESTR_LIT_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_notin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token6] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token8] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token9] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_div] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shr] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_operator_token10] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_COMMENT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_normal_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_addr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_concept] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_converter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distinct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_except] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iterator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mixin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raise] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tuple] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yield] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_OP10_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_IDENT_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_INT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT8_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT16_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT32_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_INT64_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT8_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT16_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT32_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_UINT64_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT32_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_FLOAT64_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_CUSTOM_NUMERIC_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_CHAR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_STR_LIT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_TRIPLESTR_LIT_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_RSTR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_GENERALIZED_STR_LIT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__NEWLINE] = {
    .visible = false,
    .named = true,
  },
  [sym__INDENT] = {
    .visible = false,
    .named = true,
  },
  [sym__DEDENT] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_colcom] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_complexOrSimpleStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_identColonEquals] = {
    .visible = true,
    .named = true,
  },
  [sym_typeDesc] = {
    .visible = true,
    .named = true,
  },
  [sym_colonBody] = {
    .visible = true,
    .named = true,
  },
  [sym_simpleStmt] = {
    .visible = true,
    .named = true,
  },
  [sym_discardStmt] = {
    .visible = true,
    .named = true,
  },
  [sym__simpleExpr] = {
    .visible = false,
    .named = true,
  },
  [sym_primary] = {
    .visible = true,
    .named = true,
  },
  [sym_identOrLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_generalizedLit] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_operatorB] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_normal_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_KEYW] = {
    .visible = true,
    .named = true,
  },
  [sym_IDENT] = {
    .visible = true,
    .named = true,
  },
  [sym_TRIPLESTR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_GENERALIZED_TRIPLESTR_LIT] = {
    .visible = true,
    .named = true,
  },
  [sym_NIL] = {
    .visible = true,
    .named = true,
  },
  [sym_BOOL_LIT] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_complexOrSimpleStmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identColonEquals_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_typeDesc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__simpleExpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TRIPLESTR_LIT_repeat1] = {
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

static inline bool aux_sym_operator_token7_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < ':'
        ? (c >= '-' && c <= '/')
        : c <= ':')))
    : (c <= '@' || (c < '|'
      ? (c < '^'
        ? c == '\\'
        : c <= '^')
      : (c <= '|' || c == '~'))));
}

static inline bool aux_sym_operator_token10_character_set_1(int32_t c) {
  return (c < ':'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c >= '.' && c <= '/')))
    : (c <= ':' || (c < '^'
      ? (c < '\\'
        ? (c >= '<' && c <= '@')
        : c <= '\\')
      : (c <= '^' || c == '|'))));
}

static inline bool sym_CHAR_LIT_character_set_1(int32_t c) {
  return (c < 'l'
    ? (c < 'a'
      ? (c < '\\'
        ? c == '"'
        : c <= '\\')
      : (c <= 'c' || (c >= 'e' && c <= 'f')))
    : (c <= 'l' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(115);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '0') ADVANCE(669);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead == 'v') ADVANCE(339);
      if (lookahead == 'w') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(444);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(50);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(5)
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(7)
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(34)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(34)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(35)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(35)
      if (lookahead == '\r') SKIP(11)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') ADVANCE(713);
      if (lookahead == '\\') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(711);
      if (lookahead != 0) ADVANCE(710);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '0') ADVANCE(669);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead == 'v') ADVANCE(339);
      if (lookahead == 'w') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(444);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(50);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '0') ADVANCE(669);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(358);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'c') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 'l') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(336);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead == 'p') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead == 'v') ADVANCE(339);
      if (lookahead == 'w') ADVANCE(401);
      if (lookahead == 'x') ADVANCE(444);
      if (lookahead == 'y') ADVANCE(406);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(206);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == '0') ADVANCE(669);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(334);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '`') ADVANCE(138);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead == 'b') ADVANCE(570);
      if (lookahead == 'c') ADVANCE(504);
      if (lookahead == 'd') ADVANCE(535);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'i') ADVANCE(561);
      if (lookahead == 'l') ADVANCE(536);
      if (lookahead == 'm') ADVANCE(503);
      if (lookahead == 'n') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(513);
      if (lookahead == 'p') ADVANCE(640);
      if (lookahead == 'r') ADVANCE(333);
      if (lookahead == 's') ADVANCE(567);
      if (lookahead == 't') ADVANCE(537);
      if (lookahead == 'u') ADVANCE(643);
      if (lookahead == 'v') ADVANCE(506);
      if (lookahead == 'w') ADVANCE(568);
      if (lookahead == 'x') ADVANCE(611);
      if (lookahead == 'y') ADVANCE(573);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(52);
      if (lookahead == ':' ||
          lookahead == '@') ADVANCE(45);
      if (lookahead == '(' ||
          lookahead == ')' ||
          ('[' <= lookahead && lookahead <= ']') ||
          ('{' <= lookahead && lookahead <= '}')) ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(206);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(707);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(709);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(708);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < 'A' || 'F' < lookahead) &&
          (lookahead < 'a' || 'f' < lookahead)) ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 29:
      if (lookahead == '"') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '"') ADVANCE(717);
      END_STATE();
    case 32:
      if (lookahead == '"') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == '"') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == ',') ADVANCE(117);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 35:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '\\') SKIP(12)
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == '#') ADVANCE(235);
      if (lookahead != 0) ADVANCE(236);
      END_STATE();
    case 37:
      if (lookahead == '\'') ADVANCE(705);
      if (lookahead == 'x') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (sym_CHAR_LIT_character_set_1(lookahead)) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '\'') ADVANCE(704);
      END_STATE();
    case 39:
      if (lookahead == '\'') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '\'') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '.') ADVANCE(204);
      if (aux_sym_operator_token7_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 42:
      if (lookahead == '2') ADVANCE(690);
      END_STATE();
    case 43:
      if (lookahead == '4') ADVANCE(693);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(160);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(158);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == '=') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 47:
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 48:
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 49:
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(162);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 50:
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(329);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(330);
      END_STATE();
    case 51:
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(51);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(51);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '>') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(214);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(215);
      END_STATE();
    case 54:
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(228);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(181);
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == 'v') ADVANCE(219);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 89:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      END_STATE();
    case 90:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(692);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 91:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(692);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 92:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(694);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(683);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 93:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(672);
      END_STATE();
    case 94:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(676);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(164);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(673);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(677);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(678);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 109:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 110:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(29);
      END_STATE();
    case 111:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(714);
      END_STATE();
    case 112:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 113:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(236);
      END_STATE();
    case 114:
      if (eof) ADVANCE(115);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '%') ADVANCE(218);
      if (lookahead == '&') ADVANCE(206);
      if (lookahead == '*') ADVANCE(216);
      if (lookahead == '+') ADVANCE(209);
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == '/') ADVANCE(217);
      if (lookahead == ':') ADVANCE(119);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(179);
      if (lookahead == '?') ADVANCE(44);
      if (lookahead == '@') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(61);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'v') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead == '|') ADVANCE(48);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '$' ||
          lookahead == '^') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(114)
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(158);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(159);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_using);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_discard);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_discard);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(214);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(215);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(207);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(162);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(329);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(330);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(51);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(214);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(215);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(164);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(207);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(162);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(329);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(330);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(51);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_operator_token4);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(162);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_operator_token4);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(162);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_operator_token4);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(164);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_operator_token4);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(164);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(162);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == '=') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(162);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == '>') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(164);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(164);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_xor);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(420);
      if (lookahead == 't') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == 't') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_notin);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_notin);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_notin);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_is);
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_isnot);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_isnot);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_isnot);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_from);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_operator_token6);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_operator_token6);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(202);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (aux_sym_operator_token7_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_operator_token7);
      if (aux_sym_operator_token7_character_set_1(lookahead)) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(207);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_operator_token8);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '>') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(207);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_operator_token8);
      if (lookahead == '=') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(207);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '0') ADVANCE(674);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= ':') ||
          ('<' <= lookahead && lookahead <= '@') ||
          lookahead == '\\' ||
          lookahead == '^' ||
          lookahead == '|') ADVANCE(213);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_operator_token9);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '>') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_operator_token9);
      if (lookahead == '=') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(212);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_operator_token9);
      if (lookahead == '>') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(214);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_operator_token9);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(214);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_div);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_div);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_mod);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_mod);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_shl);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_shl);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_shr);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_shr);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_operator_token10);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_operator_token10);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(231);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_static);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_COMMENT_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_normal_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_addr);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_addr);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_asm);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_asm);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_cast);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_concept);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_converter);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_converter);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_distinct);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_distinct);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_enum);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_except);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_finally);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_finally);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_interface);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_iterator);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_iterator);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_method);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_mixin);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_object);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_out);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_proc);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_raise);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_raise);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_ref);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_template);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_try);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_try);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_tuple);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_yield);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_yield);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_OP10_token1);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(329);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(330);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_OP10_token1);
      if (lookahead == '=') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '~') ADVANCE(329);
      if (aux_sym_operator_token10_character_set_1(lookahead)) ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'e') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(421);
      if (lookahead == 'i') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(457);
      if (lookahead == 'r') ADVANCE(443);
      if (lookahead == 'u') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead == 'i') ADVANCE(499);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'a') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(413);
      if (lookahead == 'f') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(384);
      if (lookahead == 'p') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(344);
      if (lookahead == 't') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'c') ADVANCE(392);
      if (lookahead == 's') ADVANCE(482);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == 'v') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(366);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'd') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead == 'r') ADVANCE(496);
      if (lookahead == 'u') ADVANCE(451);
      if (lookahead == 'y') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == 't') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(432);
      if (lookahead == 'i') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'e') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'm') ADVANCE(456);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(311);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'g') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == 't') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'h') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 's') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'j') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'k') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'k') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'x') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'l') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'p') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 't') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 's') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead == 'v') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 's') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 's') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(373);
      if (lookahead == 'y') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'y') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(624);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead == 'u') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(519);
      if (lookahead == 'e') ADVANCE(657);
      if (lookahead == 'i') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead == 'o') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'a') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(580);
      if (lookahead == 'f') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'p') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(511);
      if (lookahead == 't') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 's') ADVANCE(649);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead == 'v') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(533);
      if (lookahead == 'n') ADVANCE(526);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(270);
      if (lookahead == 'u') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(565);
      if (lookahead == 'i') ADVANCE(642);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == 'r') ADVANCE(663);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == 'y') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 't') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == 'i') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(623);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == 't') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead == 't') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'g') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(585);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'h') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(606);
      if (lookahead == 'l') ADVANCE(609);
      if (lookahead == 'r') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(563);
      if (lookahead == 's') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == 'o') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'j') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'k') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'k') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(571);
      if (lookahead == 'n') ADVANCE(527);
      if (lookahead == 'x') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'l') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'm') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(612);
      if (lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 's') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 's') ADVANCE(523);
      if (lookahead == 'v') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 's') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 's') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 's') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 't') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(540);
      if (lookahead == 'y') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'y') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_IDENT_token1);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(93);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == '_') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == '_') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(90);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(104);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == '_') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '_') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '_') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_INT_LIT);
      if (lookahead == '\'') ADVANCE(92);
      if (lookahead == '_') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_INT8_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_INT16_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_INT32_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_INT64_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_UINT_LIT);
      if (lookahead == '1') ADVANCE(702);
      if (lookahead == '3') ADVANCE(697);
      if (lookahead == '6') ADVANCE(700);
      if (lookahead == '8') ADVANCE(684);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_UINT8_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_UINT16_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_UINT32_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_UINT64_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_FLOAT_LIT);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == '_') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_FLOAT_LIT);
      if (lookahead == '\'') ADVANCE(91);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(691);
      if (lookahead == '_') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      if (lookahead == '3') ADVANCE(42);
      if (lookahead == '6') ADVANCE(43);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_FLOAT32_LIT);
      if (lookahead == '3') ADVANCE(695);
      if (lookahead == '6') ADVANCE(698);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_FLOAT64_LIT);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '1') ADVANCE(701);
      if (lookahead == '3') ADVANCE(696);
      if (lookahead == '6') ADVANCE(699);
      if (lookahead == '8') ADVANCE(679);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '2') ADVANCE(690);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '2') ADVANCE(681);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '2') ADVANCE(686);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '4') ADVANCE(693);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '4') ADVANCE(682);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '4') ADVANCE(687);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '6') ADVANCE(680);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '6') ADVANCE(685);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_CUSTOM_NUMERIC_LIT);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_CHAR_LIT);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_CHAR_LIT);
      if (lookahead == '\'') ADVANCE(704);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_STR_LIT);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_STR_LIT);
      if (lookahead == '"') ADVANCE(709);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_STR_LIT);
      if (lookahead == '"') ADVANCE(706);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(27);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token1);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      if (lookahead == '"') ADVANCE(712);
      if (lookahead == '#') ADVANCE(713);
      if (lookahead == '\\') ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(710);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      if (lookahead == '"') ADVANCE(32);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token2);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(236);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_TRIPLESTR_LIT_token3);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_RSTR_LIT);
      if (lookahead == '"') ADVANCE(29);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_GENERALIZED_STR_LIT);
      if (lookahead == '"') ADVANCE(30);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(501);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(668);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 114},
  [2] = {.lex_state = 15, .external_lex_state = 2},
  [3] = {.lex_state = 15, .external_lex_state = 3},
  [4] = {.lex_state = 15, .external_lex_state = 3},
  [5] = {.lex_state = 15, .external_lex_state = 3},
  [6] = {.lex_state = 15, .external_lex_state = 3},
  [7] = {.lex_state = 15, .external_lex_state = 3},
  [8] = {.lex_state = 15, .external_lex_state = 3},
  [9] = {.lex_state = 15, .external_lex_state = 3},
  [10] = {.lex_state = 15, .external_lex_state = 3},
  [11] = {.lex_state = 15, .external_lex_state = 3},
  [12] = {.lex_state = 15, .external_lex_state = 3},
  [13] = {.lex_state = 15, .external_lex_state = 3},
  [14] = {.lex_state = 15, .external_lex_state = 3},
  [15] = {.lex_state = 15, .external_lex_state = 3},
  [16] = {.lex_state = 15, .external_lex_state = 3},
  [17] = {.lex_state = 15, .external_lex_state = 3},
  [18] = {.lex_state = 15, .external_lex_state = 3},
  [19] = {.lex_state = 15, .external_lex_state = 3},
  [20] = {.lex_state = 15, .external_lex_state = 3},
  [21] = {.lex_state = 15, .external_lex_state = 3},
  [22] = {.lex_state = 15, .external_lex_state = 3},
  [23] = {.lex_state = 15, .external_lex_state = 3},
  [24] = {.lex_state = 15, .external_lex_state = 3},
  [25] = {.lex_state = 15, .external_lex_state = 3},
  [26] = {.lex_state = 15, .external_lex_state = 3},
  [27] = {.lex_state = 15, .external_lex_state = 3},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 15},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 15},
  [41] = {.lex_state = 15},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 15, .external_lex_state = 3},
  [46] = {.lex_state = 15, .external_lex_state = 3},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 15},
  [52] = {.lex_state = 15},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 15, .external_lex_state = 4},
  [60] = {.lex_state = 15, .external_lex_state = 4},
  [61] = {.lex_state = 15, .external_lex_state = 4},
  [62] = {.lex_state = 15, .external_lex_state = 4},
  [63] = {.lex_state = 15, .external_lex_state = 4},
  [64] = {.lex_state = 15, .external_lex_state = 3},
  [65] = {.lex_state = 15, .external_lex_state = 3},
  [66] = {.lex_state = 15, .external_lex_state = 3},
  [67] = {.lex_state = 15, .external_lex_state = 3},
  [68] = {.lex_state = 15, .external_lex_state = 3},
  [69] = {.lex_state = 15, .external_lex_state = 3},
  [70] = {.lex_state = 15, .external_lex_state = 3},
  [71] = {.lex_state = 15, .external_lex_state = 3},
  [72] = {.lex_state = 15, .external_lex_state = 3},
  [73] = {.lex_state = 15},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 15, .external_lex_state = 3},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 15, .external_lex_state = 5},
  [78] = {.lex_state = 15, .external_lex_state = 5},
  [79] = {.lex_state = 15, .external_lex_state = 3},
  [80] = {.lex_state = 15, .external_lex_state = 5},
  [81] = {.lex_state = 15, .external_lex_state = 5},
  [82] = {.lex_state = 15, .external_lex_state = 5},
  [83] = {.lex_state = 15, .external_lex_state = 5},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 16},
  [90] = {.lex_state = 16},
  [91] = {.lex_state = 16},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 16},
  [94] = {.lex_state = 16},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 16},
  [97] = {.lex_state = 16},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 15},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 16},
  [104] = {.lex_state = 15},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 16},
  [107] = {.lex_state = 15},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 16},
  [112] = {.lex_state = 15},
  [113] = {.lex_state = 16},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 15},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 16},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 114, .external_lex_state = 4},
  [120] = {.lex_state = 114, .external_lex_state = 4},
  [121] = {.lex_state = 114, .external_lex_state = 4},
  [122] = {.lex_state = 114, .external_lex_state = 4},
  [123] = {.lex_state = 114, .external_lex_state = 4},
  [124] = {.lex_state = 114, .external_lex_state = 4},
  [125] = {.lex_state = 114, .external_lex_state = 4},
  [126] = {.lex_state = 114, .external_lex_state = 4},
  [127] = {.lex_state = 114, .external_lex_state = 4},
  [128] = {.lex_state = 114, .external_lex_state = 4},
  [129] = {.lex_state = 114, .external_lex_state = 4},
  [130] = {.lex_state = 114, .external_lex_state = 4},
  [131] = {.lex_state = 114, .external_lex_state = 4},
  [132] = {.lex_state = 114, .external_lex_state = 4},
  [133] = {.lex_state = 114, .external_lex_state = 4},
  [134] = {.lex_state = 114, .external_lex_state = 4},
  [135] = {.lex_state = 114, .external_lex_state = 4},
  [136] = {.lex_state = 114, .external_lex_state = 4},
  [137] = {.lex_state = 114, .external_lex_state = 4},
  [138] = {.lex_state = 114, .external_lex_state = 4},
  [139] = {.lex_state = 114, .external_lex_state = 4},
  [140] = {.lex_state = 114, .external_lex_state = 4},
  [141] = {.lex_state = 114, .external_lex_state = 4},
  [142] = {.lex_state = 114, .external_lex_state = 4},
  [143] = {.lex_state = 114, .external_lex_state = 5},
  [144] = {.lex_state = 114, .external_lex_state = 5},
  [145] = {.lex_state = 114, .external_lex_state = 5},
  [146] = {.lex_state = 114, .external_lex_state = 5},
  [147] = {.lex_state = 114, .external_lex_state = 5},
  [148] = {.lex_state = 114, .external_lex_state = 5},
  [149] = {.lex_state = 114, .external_lex_state = 5},
  [150] = {.lex_state = 114, .external_lex_state = 5},
  [151] = {.lex_state = 114, .external_lex_state = 5},
  [152] = {.lex_state = 114, .external_lex_state = 5},
  [153] = {.lex_state = 114, .external_lex_state = 5},
  [154] = {.lex_state = 114, .external_lex_state = 5},
  [155] = {.lex_state = 114, .external_lex_state = 5},
  [156] = {.lex_state = 114, .external_lex_state = 5},
  [157] = {.lex_state = 114, .external_lex_state = 5},
  [158] = {.lex_state = 114, .external_lex_state = 5},
  [159] = {.lex_state = 114, .external_lex_state = 5},
  [160] = {.lex_state = 114, .external_lex_state = 5},
  [161] = {.lex_state = 114, .external_lex_state = 5},
  [162] = {.lex_state = 114, .external_lex_state = 5},
  [163] = {.lex_state = 114, .external_lex_state = 5},
  [164] = {.lex_state = 114, .external_lex_state = 5},
  [165] = {.lex_state = 114, .external_lex_state = 5},
  [166] = {.lex_state = 114, .external_lex_state = 5},
  [167] = {.lex_state = 114},
  [168] = {.lex_state = 114},
  [169] = {.lex_state = 114},
  [170] = {.lex_state = 34, .external_lex_state = 5},
  [171] = {.lex_state = 34, .external_lex_state = 5},
  [172] = {.lex_state = 34, .external_lex_state = 4},
  [173] = {.lex_state = 34, .external_lex_state = 4},
  [174] = {.lex_state = 34},
  [175] = {.lex_state = 34, .external_lex_state = 3},
  [176] = {.lex_state = 34, .external_lex_state = 4},
  [177] = {.lex_state = 34, .external_lex_state = 4},
  [178] = {.lex_state = 35, .external_lex_state = 4},
  [179] = {.lex_state = 114},
  [180] = {.lex_state = 35, .external_lex_state = 4},
  [181] = {.lex_state = 34, .external_lex_state = 4},
  [182] = {.lex_state = 35, .external_lex_state = 4},
  [183] = {.lex_state = 34, .external_lex_state = 4},
  [184] = {.lex_state = 35, .external_lex_state = 4},
  [185] = {.lex_state = 34, .external_lex_state = 4},
  [186] = {.lex_state = 35, .external_lex_state = 4},
  [187] = {.lex_state = 34, .external_lex_state = 4},
  [188] = {.lex_state = 114},
  [189] = {.lex_state = 34, .external_lex_state = 4},
  [190] = {.lex_state = 34, .external_lex_state = 4},
  [191] = {.lex_state = 34, .external_lex_state = 4},
  [192] = {.lex_state = 34, .external_lex_state = 4},
  [193] = {.lex_state = 114},
  [194] = {.lex_state = 34, .external_lex_state = 4},
  [195] = {.lex_state = 0, .external_lex_state = 4},
  [196] = {.lex_state = 34, .external_lex_state = 4},
  [197] = {.lex_state = 34},
  [198] = {.lex_state = 114},
  [199] = {.lex_state = 34, .external_lex_state = 4},
  [200] = {.lex_state = 34, .external_lex_state = 4},
  [201] = {.lex_state = 34, .external_lex_state = 4},
  [202] = {.lex_state = 0, .external_lex_state = 4},
  [203] = {.lex_state = 34, .external_lex_state = 5},
  [204] = {.lex_state = 13},
  [205] = {.lex_state = 13},
  [206] = {.lex_state = 34, .external_lex_state = 4},
  [207] = {.lex_state = 0, .external_lex_state = 4},
  [208] = {.lex_state = 34, .external_lex_state = 4},
  [209] = {.lex_state = 13},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 34, .external_lex_state = 4},
  [213] = {.lex_state = 34, .external_lex_state = 4},
  [214] = {.lex_state = 13},
  [215] = {.lex_state = 34},
  [216] = {.lex_state = 34, .external_lex_state = 4},
  [217] = {.lex_state = 13},
  [218] = {.lex_state = 34, .external_lex_state = 4},
  [219] = {.lex_state = 13},
  [220] = {.lex_state = 34, .external_lex_state = 4},
  [221] = {.lex_state = 34, .external_lex_state = 4},
  [222] = {.lex_state = 0, .external_lex_state = 4},
  [223] = {.lex_state = 13},
  [224] = {.lex_state = 13},
  [225] = {.lex_state = 13},
  [226] = {.lex_state = 35, .external_lex_state = 5},
  [227] = {.lex_state = 34, .external_lex_state = 4},
  [228] = {.lex_state = 35, .external_lex_state = 5},
  [229] = {.lex_state = 34, .external_lex_state = 4},
  [230] = {.lex_state = 34, .external_lex_state = 4},
  [231] = {.lex_state = 35, .external_lex_state = 5},
  [232] = {.lex_state = 0, .external_lex_state = 4},
  [233] = {.lex_state = 0, .external_lex_state = 4},
  [234] = {.lex_state = 0, .external_lex_state = 4},
  [235] = {.lex_state = 34},
  [236] = {.lex_state = 13},
  [237] = {.lex_state = 0, .external_lex_state = 4},
  [238] = {.lex_state = 0, .external_lex_state = 4},
  [239] = {.lex_state = 35, .external_lex_state = 5},
  [240] = {.lex_state = 0, .external_lex_state = 4},
  [241] = {.lex_state = 0, .external_lex_state = 4},
  [242] = {.lex_state = 35, .external_lex_state = 5},
  [243] = {.lex_state = 0, .external_lex_state = 4},
  [244] = {.lex_state = 0, .external_lex_state = 4},
  [245] = {.lex_state = 0, .external_lex_state = 4},
  [246] = {.lex_state = 0, .external_lex_state = 5},
  [247] = {.lex_state = 0, .external_lex_state = 5},
  [248] = {.lex_state = 0, .external_lex_state = 5},
  [249] = {.lex_state = 0, .external_lex_state = 5},
  [250] = {.lex_state = 34},
  [251] = {.lex_state = 0, .external_lex_state = 5},
  [252] = {.lex_state = 0, .external_lex_state = 4},
  [253] = {.lex_state = 0, .external_lex_state = 4},
  [254] = {.lex_state = 0, .external_lex_state = 5},
  [255] = {.lex_state = 0, .external_lex_state = 5},
  [256] = {.lex_state = 0, .external_lex_state = 5},
  [257] = {.lex_state = 0, .external_lex_state = 4},
  [258] = {.lex_state = 0, .external_lex_state = 5},
  [259] = {.lex_state = 0, .external_lex_state = 5},
  [260] = {.lex_state = 0, .external_lex_state = 4},
  [261] = {.lex_state = 0, .external_lex_state = 5},
  [262] = {.lex_state = 0, .external_lex_state = 5},
  [263] = {.lex_state = 0, .external_lex_state = 5},
  [264] = {.lex_state = 0, .external_lex_state = 5},
  [265] = {.lex_state = 0, .external_lex_state = 5},
  [266] = {.lex_state = 0, .external_lex_state = 5},
  [267] = {.lex_state = 0, .external_lex_state = 5},
  [268] = {.lex_state = 0, .external_lex_state = 4},
  [269] = {.lex_state = 0, .external_lex_state = 5},
  [270] = {.lex_state = 0, .external_lex_state = 5},
  [271] = {.lex_state = 0, .external_lex_state = 4},
  [272] = {.lex_state = 34},
  [273] = {.lex_state = 0},
  [274] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__NEWLINE = 0,
  ts_external_token__INDENT = 1,
  ts_external_token__DEDENT = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__NEWLINE] = sym__NEWLINE,
  [ts_external_token__INDENT] = sym__INDENT,
  [ts_external_token__DEDENT] = sym__DEDENT,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__NEWLINE] = true,
    [ts_external_token__INDENT] = true,
    [ts_external_token__DEDENT] = true,
  },
  [2] = {
    [ts_external_token__NEWLINE] = true,
    [ts_external_token__INDENT] = true,
  },
  [3] = {
    [ts_external_token__INDENT] = true,
  },
  [4] = {
    [ts_external_token__NEWLINE] = true,
  },
  [5] = {
    [ts_external_token__DEDENT] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_normal_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_discard] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [aux_sym_operator_token1] = ACTIONS(1),
    [aux_sym_operator_token2] = ACTIONS(1),
    [aux_sym_operator_token3] = ACTIONS(1),
    [aux_sym_operator_token4] = ACTIONS(1),
    [aux_sym_operator_token5] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_notin] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_isnot] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [aux_sym_operator_token6] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_operator_token7] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [aux_sym_operator_token8] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_operator_token9] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_div] = ACTIONS(1),
    [anon_sym_mod] = ACTIONS(1),
    [anon_sym_shl] = ACTIONS(1),
    [anon_sym_shr] = ACTIONS(1),
    [aux_sym_operator_token10] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [aux_sym_COMMENT_token1] = ACTIONS(1),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(1),
    [anon_sym_asm] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_concept] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_converter] = ACTIONS(1),
    [anon_sym_defer] = ACTIONS(1),
    [anon_sym_distinct] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_except] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_iterator] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_mixin] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_raise] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_tuple] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_yield] = ACTIONS(1),
    [aux_sym_OP10_token1] = ACTIONS(1),
    [aux_sym_IDENT_token1] = ACTIONS(1),
    [sym_INT_LIT] = ACTIONS(1),
    [sym_INT8_LIT] = ACTIONS(1),
    [sym_INT16_LIT] = ACTIONS(1),
    [sym_INT32_LIT] = ACTIONS(1),
    [sym_INT64_LIT] = ACTIONS(1),
    [sym_UINT_LIT] = ACTIONS(1),
    [sym_UINT8_LIT] = ACTIONS(1),
    [sym_UINT16_LIT] = ACTIONS(1),
    [sym_UINT32_LIT] = ACTIONS(1),
    [sym_UINT64_LIT] = ACTIONS(1),
    [sym_FLOAT_LIT] = ACTIONS(1),
    [sym_FLOAT32_LIT] = ACTIONS(1),
    [sym_FLOAT64_LIT] = ACTIONS(1),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(1),
    [sym_CHAR_LIT] = ACTIONS(1),
    [sym_STR_LIT] = ACTIONS(1),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(1),
    [sym_RSTR_LIT] = ACTIONS(1),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym__NEWLINE] = ACTIONS(1),
    [sym__INDENT] = ACTIONS(1),
    [sym__DEDENT] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(273),
    [sym_stmt] = STATE(238),
    [sym_complexOrSimpleStmt] = STATE(240),
    [sym_simpleStmt] = STATE(234),
    [sym_discardStmt] = STATE(195),
    [sym_normal_comment] = STATE(1),
    [aux_sym_module_repeat1] = STATE(167),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(5),
    [anon_sym_using] = ACTIONS(5),
    [anon_sym_discard] = ACTIONS(7),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_expr] = STATE(207),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(21),
    [sym_normal_comment] = STATE(2),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(9),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__NEWLINE] = ACTIONS(9),
    [sym__INDENT] = ACTIONS(59),
  },
  [3] = {
    [sym_typeDesc] = STATE(194),
    [sym__simpleExpr] = STATE(184),
    [sym_primary] = STATE(124),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(18),
    [sym_normal_comment] = STATE(3),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(63),
  },
  [4] = {
    [sym_expr] = STATE(227),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(16),
    [sym_normal_comment] = STATE(4),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(65),
  },
  [5] = {
    [sym_expr] = STATE(230),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(14),
    [sym_normal_comment] = STATE(5),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(67),
  },
  [6] = {
    [sym_typeDesc] = STATE(192),
    [sym__simpleExpr] = STATE(184),
    [sym_primary] = STATE(124),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(19),
    [sym_normal_comment] = STATE(6),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(69),
  },
  [7] = {
    [sym_expr] = STATE(218),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(25),
    [sym_normal_comment] = STATE(7),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(71),
  },
  [8] = {
    [sym_expr] = STATE(206),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(15),
    [sym_normal_comment] = STATE(8),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(73),
  },
  [9] = {
    [sym_expr] = STATE(208),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(24),
    [sym_normal_comment] = STATE(9),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(75),
  },
  [10] = {
    [sym_expr] = STATE(221),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(17),
    [sym_normal_comment] = STATE(10),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(77),
  },
  [11] = {
    [sym_expr] = STATE(212),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(22),
    [sym_normal_comment] = STATE(11),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(79),
  },
  [12] = {
    [sym_typeDesc] = STATE(196),
    [sym__simpleExpr] = STATE(184),
    [sym_primary] = STATE(124),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(27),
    [sym_normal_comment] = STATE(12),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(81),
  },
  [13] = {
    [sym_expr] = STATE(216),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(20),
    [sym_normal_comment] = STATE(13),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(83),
  },
  [14] = {
    [sym_expr] = STATE(227),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(14),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(65),
  },
  [15] = {
    [sym_expr] = STATE(218),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(15),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(71),
  },
  [16] = {
    [sym_expr] = STATE(216),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(16),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(83),
  },
  [17] = {
    [sym_expr] = STATE(230),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(17),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(67),
  },
  [18] = {
    [sym_typeDesc] = STATE(199),
    [sym__simpleExpr] = STATE(184),
    [sym_primary] = STATE(124),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(18),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(85),
  },
  [19] = {
    [sym_typeDesc] = STATE(194),
    [sym__simpleExpr] = STATE(184),
    [sym_primary] = STATE(124),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(19),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(63),
  },
  [20] = {
    [sym_expr] = STATE(212),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(20),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(79),
  },
  [21] = {
    [sym_expr] = STATE(202),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(21),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(87),
  },
  [22] = {
    [sym_expr] = STATE(208),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(22),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(75),
  },
  [23] = {
    [sym_primary] = STATE(160),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(46),
    [sym_normal_comment] = STATE(23),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [sym__INDENT] = ACTIONS(117),
  },
  [24] = {
    [sym_expr] = STATE(206),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(24),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(73),
  },
  [25] = {
    [sym_expr] = STATE(220),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(121),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(25),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(119),
  },
  [26] = {
    [sym_primary] = STATE(133),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_COMMENT] = STATE(45),
    [sym_normal_comment] = STATE(26),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_COMMENT_token1] = ACTIONS(61),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(121),
  },
  [27] = {
    [sym_typeDesc] = STATE(192),
    [sym__simpleExpr] = STATE(184),
    [sym_primary] = STATE(124),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(27),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(69),
  },
  [28] = {
    [sym_expr] = STATE(251),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(28),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [29] = {
    [sym_expr] = STATE(264),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(29),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [30] = {
    [sym_expr] = STATE(242),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(143),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(30),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [31] = {
    [sym_expr] = STATE(186),
    [sym__simpleExpr] = STATE(180),
    [sym_primary] = STATE(124),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(31),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
  },
  [32] = {
    [sym_typeDesc] = STATE(249),
    [sym__simpleExpr] = STATE(231),
    [sym_primary] = STATE(143),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(32),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [33] = {
    [sym_typeDesc] = STATE(261),
    [sym__simpleExpr] = STATE(231),
    [sym_primary] = STATE(143),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(33),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [34] = {
    [sym_expr] = STATE(256),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(34),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [35] = {
    [sym_expr] = STATE(248),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(35),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [36] = {
    [sym_typeDesc] = STATE(258),
    [sym__simpleExpr] = STATE(231),
    [sym_primary] = STATE(143),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(36),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [37] = {
    [sym_expr] = STATE(255),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(37),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [38] = {
    [sym_expr] = STATE(262),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(38),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [39] = {
    [sym_expr] = STATE(263),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(39),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [40] = {
    [sym_expr] = STATE(269),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(40),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [41] = {
    [sym_expr] = STATE(270),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(41),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [42] = {
    [sym_expr] = STATE(265),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(42),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [43] = {
    [sym_expr] = STATE(259),
    [sym__simpleExpr] = STATE(239),
    [sym_primary] = STATE(144),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(43),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [44] = {
    [sym_typeDesc] = STATE(247),
    [sym__simpleExpr] = STATE(231),
    [sym_primary] = STATE(143),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(44),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [45] = {
    [sym_primary] = STATE(142),
    [sym_identOrLiteral] = STATE(130),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(45),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(52),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
    [sym__INDENT] = ACTIONS(123),
  },
  [46] = {
    [sym_primary] = STATE(149),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(46),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(53),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [sym__INDENT] = ACTIONS(125),
  },
  [47] = {
    [sym_primary] = STATE(254),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(47),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(51),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(127),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [48] = {
    [sym_primary] = STATE(267),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(48),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(51),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(127),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [49] = {
    [sym_primary] = STATE(246),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(49),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(51),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(127),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [50] = {
    [sym_primary] = STATE(266),
    [sym_identOrLiteral] = STATE(163),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(50),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(51),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(127),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [51] = {
    [sym_identOrLiteral] = STATE(153),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(51),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(73),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(127),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [52] = {
    [sym_identOrLiteral] = STATE(139),
    [sym_literal] = STATE(131),
    [sym_generalizedLit] = STATE(131),
    [sym_symbol] = STATE(131),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(52),
    [sym_KEYW] = STATE(134),
    [sym_IDENT] = STATE(134),
    [sym_TRIPLESTR_LIT] = STATE(128),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(132),
    [sym_NIL] = STATE(128),
    [sym_BOOL_LIT] = STATE(128),
    [aux_sym_primary_repeat1] = STATE(73),
    [anon_sym_let] = ACTIONS(11),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(13),
    [anon_sym_discard] = ACTIONS(11),
    [anon_sym_BQUOTE] = ACTIONS(15),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_xor] = ACTIONS(25),
    [anon_sym_and] = ACTIONS(27),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(13),
    [anon_sym_notin] = ACTIONS(13),
    [anon_sym_is] = ACTIONS(13),
    [anon_sym_isnot] = ACTIONS(13),
    [anon_sym_of] = ACTIONS(13),
    [anon_sym_as] = ACTIONS(13),
    [anon_sym_from] = ACTIONS(13),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(41),
    [anon_sym_mod] = ACTIONS(41),
    [anon_sym_shl] = ACTIONS(41),
    [anon_sym_shr] = ACTIONS(41),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(43),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(11),
    [anon_sym_asm] = ACTIONS(11),
    [anon_sym_bind] = ACTIONS(11),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_break] = ACTIONS(11),
    [anon_sym_case] = ACTIONS(11),
    [anon_sym_cast] = ACTIONS(11),
    [anon_sym_concept] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(11),
    [anon_sym_converter] = ACTIONS(11),
    [anon_sym_defer] = ACTIONS(11),
    [anon_sym_distinct] = ACTIONS(11),
    [anon_sym_do] = ACTIONS(11),
    [anon_sym_elif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(11),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_except] = ACTIONS(11),
    [anon_sym_export] = ACTIONS(11),
    [anon_sym_finally] = ACTIONS(11),
    [anon_sym_for] = ACTIONS(11),
    [anon_sym_func] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(11),
    [anon_sym_iterator] = ACTIONS(11),
    [anon_sym_macro] = ACTIONS(11),
    [anon_sym_method] = ACTIONS(11),
    [anon_sym_mixin] = ACTIONS(11),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_object] = ACTIONS(11),
    [anon_sym_out] = ACTIONS(11),
    [anon_sym_proc] = ACTIONS(11),
    [anon_sym_ptr] = ACTIONS(11),
    [anon_sym_raise] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(11),
    [anon_sym_template] = ACTIONS(11),
    [anon_sym_try] = ACTIONS(11),
    [anon_sym_tuple] = ACTIONS(11),
    [anon_sym_type] = ACTIONS(11),
    [anon_sym_when] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_yield] = ACTIONS(11),
    [aux_sym_IDENT_token1] = ACTIONS(47),
    [sym_INT_LIT] = ACTIONS(49),
    [sym_INT8_LIT] = ACTIONS(49),
    [sym_INT16_LIT] = ACTIONS(49),
    [sym_INT32_LIT] = ACTIONS(49),
    [sym_INT64_LIT] = ACTIONS(49),
    [sym_UINT_LIT] = ACTIONS(49),
    [sym_UINT8_LIT] = ACTIONS(49),
    [sym_UINT16_LIT] = ACTIONS(49),
    [sym_UINT32_LIT] = ACTIONS(49),
    [sym_UINT64_LIT] = ACTIONS(49),
    [sym_FLOAT_LIT] = ACTIONS(49),
    [sym_FLOAT32_LIT] = ACTIONS(49),
    [sym_FLOAT64_LIT] = ACTIONS(51),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(49),
    [sym_CHAR_LIT] = ACTIONS(51),
    [sym_STR_LIT] = ACTIONS(49),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(53),
    [sym_RSTR_LIT] = ACTIONS(51),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(57),
  },
  [53] = {
    [sym_identOrLiteral] = STATE(153),
    [sym_literal] = STATE(161),
    [sym_generalizedLit] = STATE(161),
    [sym_symbol] = STATE(161),
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(53),
    [sym_KEYW] = STATE(157),
    [sym_IDENT] = STATE(157),
    [sym_TRIPLESTR_LIT] = STATE(154),
    [sym_GENERALIZED_TRIPLESTR_LIT] = STATE(162),
    [sym_NIL] = STATE(154),
    [sym_BOOL_LIT] = STATE(154),
    [aux_sym_primary_repeat1] = STATE(73),
    [anon_sym_let] = ACTIONS(89),
    [anon_sym_var] = ACTIONS(89),
    [anon_sym_using] = ACTIONS(89),
    [anon_sym_not] = ACTIONS(91),
    [anon_sym_discard] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [aux_sym_operator_token1] = ACTIONS(17),
    [aux_sym_operator_token2] = ACTIONS(19),
    [aux_sym_operator_token3] = ACTIONS(21),
    [aux_sym_operator_token4] = ACTIONS(23),
    [aux_sym_operator_token5] = ACTIONS(23),
    [anon_sym_or] = ACTIONS(95),
    [anon_sym_xor] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(29),
    [anon_sym_LT_EQ] = ACTIONS(29),
    [anon_sym_LT] = ACTIONS(29),
    [anon_sym_GT_EQ] = ACTIONS(29),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_BANG_EQ] = ACTIONS(29),
    [anon_sym_in] = ACTIONS(91),
    [anon_sym_notin] = ACTIONS(91),
    [anon_sym_is] = ACTIONS(91),
    [anon_sym_isnot] = ACTIONS(91),
    [anon_sym_of] = ACTIONS(91),
    [anon_sym_as] = ACTIONS(91),
    [anon_sym_from] = ACTIONS(91),
    [aux_sym_operator_token6] = ACTIONS(29),
    [anon_sym_DOT_DOT] = ACTIONS(31),
    [aux_sym_operator_token7] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(35),
    [aux_sym_operator_token8] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_DASH] = ACTIONS(37),
    [aux_sym_operator_token9] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_PERCENT] = ACTIONS(39),
    [anon_sym_div] = ACTIONS(99),
    [anon_sym_mod] = ACTIONS(99),
    [anon_sym_shl] = ACTIONS(99),
    [anon_sym_shr] = ACTIONS(99),
    [aux_sym_operator_token10] = ACTIONS(39),
    [anon_sym_static] = ACTIONS(101),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(89),
    [anon_sym_asm] = ACTIONS(89),
    [anon_sym_bind] = ACTIONS(89),
    [anon_sym_block] = ACTIONS(89),
    [anon_sym_break] = ACTIONS(89),
    [anon_sym_case] = ACTIONS(89),
    [anon_sym_cast] = ACTIONS(89),
    [anon_sym_concept] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_continue] = ACTIONS(89),
    [anon_sym_converter] = ACTIONS(89),
    [anon_sym_defer] = ACTIONS(89),
    [anon_sym_distinct] = ACTIONS(89),
    [anon_sym_do] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_enum] = ACTIONS(89),
    [anon_sym_except] = ACTIONS(89),
    [anon_sym_export] = ACTIONS(89),
    [anon_sym_finally] = ACTIONS(89),
    [anon_sym_for] = ACTIONS(89),
    [anon_sym_func] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_include] = ACTIONS(89),
    [anon_sym_interface] = ACTIONS(89),
    [anon_sym_iterator] = ACTIONS(89),
    [anon_sym_macro] = ACTIONS(89),
    [anon_sym_method] = ACTIONS(89),
    [anon_sym_mixin] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(103),
    [anon_sym_object] = ACTIONS(89),
    [anon_sym_out] = ACTIONS(89),
    [anon_sym_proc] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_raise] = ACTIONS(89),
    [anon_sym_ref] = ACTIONS(89),
    [anon_sym_return] = ACTIONS(89),
    [anon_sym_template] = ACTIONS(89),
    [anon_sym_try] = ACTIONS(89),
    [anon_sym_tuple] = ACTIONS(89),
    [anon_sym_type] = ACTIONS(89),
    [anon_sym_when] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [anon_sym_yield] = ACTIONS(89),
    [aux_sym_IDENT_token1] = ACTIONS(105),
    [sym_INT_LIT] = ACTIONS(107),
    [sym_INT8_LIT] = ACTIONS(107),
    [sym_INT16_LIT] = ACTIONS(107),
    [sym_INT32_LIT] = ACTIONS(107),
    [sym_INT64_LIT] = ACTIONS(107),
    [sym_UINT_LIT] = ACTIONS(107),
    [sym_UINT8_LIT] = ACTIONS(107),
    [sym_UINT16_LIT] = ACTIONS(107),
    [sym_UINT32_LIT] = ACTIONS(107),
    [sym_UINT64_LIT] = ACTIONS(107),
    [sym_FLOAT_LIT] = ACTIONS(107),
    [sym_FLOAT32_LIT] = ACTIONS(107),
    [sym_FLOAT64_LIT] = ACTIONS(109),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(107),
    [sym_CHAR_LIT] = ACTIONS(109),
    [sym_STR_LIT] = ACTIONS(107),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(111),
    [sym_RSTR_LIT] = ACTIONS(109),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
  },
  [54] = {
    [sym_literal] = STATE(97),
    [sym_operatorB] = STATE(86),
    [sym_normal_comment] = STATE(54),
    [sym_KEYW] = STATE(97),
    [sym_IDENT] = STATE(97),
    [sym_TRIPLESTR_LIT] = STATE(113),
    [sym_NIL] = STATE(113),
    [sym_BOOL_LIT] = STATE(113),
    [aux_sym_symbol_repeat1] = STATE(76),
    [aux_sym_symbol_repeat2] = STATE(56),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_discard] = ACTIONS(129),
    [anon_sym_BQUOTE] = ACTIONS(133),
    [aux_sym_symbol_token1] = ACTIONS(135),
    [aux_sym_operator_token1] = ACTIONS(137),
    [aux_sym_operator_token2] = ACTIONS(139),
    [aux_sym_operator_token3] = ACTIONS(141),
    [aux_sym_operator_token4] = ACTIONS(143),
    [aux_sym_operator_token5] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(145),
    [anon_sym_xor] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_notin] = ACTIONS(131),
    [anon_sym_is] = ACTIONS(131),
    [anon_sym_isnot] = ACTIONS(131),
    [anon_sym_of] = ACTIONS(131),
    [anon_sym_as] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [aux_sym_operator_token6] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [aux_sym_operator_token7] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(155),
    [aux_sym_operator_token8] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [aux_sym_operator_token9] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_div] = ACTIONS(161),
    [anon_sym_mod] = ACTIONS(161),
    [anon_sym_shl] = ACTIONS(161),
    [anon_sym_shr] = ACTIONS(161),
    [aux_sym_operator_token10] = ACTIONS(159),
    [anon_sym_static] = ACTIONS(129),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(129),
    [anon_sym_asm] = ACTIONS(129),
    [anon_sym_bind] = ACTIONS(129),
    [anon_sym_block] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(129),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_cast] = ACTIONS(129),
    [anon_sym_concept] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(129),
    [anon_sym_converter] = ACTIONS(129),
    [anon_sym_defer] = ACTIONS(129),
    [anon_sym_distinct] = ACTIONS(129),
    [anon_sym_do] = ACTIONS(129),
    [anon_sym_elif] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_except] = ACTIONS(129),
    [anon_sym_export] = ACTIONS(129),
    [anon_sym_finally] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_func] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [anon_sym_interface] = ACTIONS(129),
    [anon_sym_iterator] = ACTIONS(129),
    [anon_sym_macro] = ACTIONS(129),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_mixin] = ACTIONS(129),
    [anon_sym_nil] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(129),
    [anon_sym_out] = ACTIONS(129),
    [anon_sym_proc] = ACTIONS(129),
    [anon_sym_ptr] = ACTIONS(129),
    [anon_sym_raise] = ACTIONS(129),
    [anon_sym_ref] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_template] = ACTIONS(129),
    [anon_sym_try] = ACTIONS(129),
    [anon_sym_tuple] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_when] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_yield] = ACTIONS(129),
    [aux_sym_IDENT_token1] = ACTIONS(165),
    [sym_INT_LIT] = ACTIONS(167),
    [sym_INT8_LIT] = ACTIONS(167),
    [sym_INT16_LIT] = ACTIONS(167),
    [sym_INT32_LIT] = ACTIONS(167),
    [sym_INT64_LIT] = ACTIONS(167),
    [sym_UINT_LIT] = ACTIONS(167),
    [sym_UINT8_LIT] = ACTIONS(167),
    [sym_UINT16_LIT] = ACTIONS(167),
    [sym_UINT32_LIT] = ACTIONS(167),
    [sym_UINT64_LIT] = ACTIONS(167),
    [sym_FLOAT_LIT] = ACTIONS(167),
    [sym_FLOAT32_LIT] = ACTIONS(167),
    [sym_FLOAT64_LIT] = ACTIONS(169),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(167),
    [sym_CHAR_LIT] = ACTIONS(169),
    [sym_STR_LIT] = ACTIONS(167),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(171),
    [sym_RSTR_LIT] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
  },
  [55] = {
    [sym_literal] = STATE(97),
    [sym_operatorB] = STATE(86),
    [sym_normal_comment] = STATE(55),
    [sym_KEYW] = STATE(97),
    [sym_IDENT] = STATE(97),
    [sym_TRIPLESTR_LIT] = STATE(113),
    [sym_NIL] = STATE(113),
    [sym_BOOL_LIT] = STATE(113),
    [aux_sym_symbol_repeat1] = STATE(76),
    [aux_sym_symbol_repeat2] = STATE(56),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_discard] = ACTIONS(129),
    [anon_sym_BQUOTE] = ACTIONS(175),
    [aux_sym_symbol_token1] = ACTIONS(135),
    [aux_sym_operator_token1] = ACTIONS(137),
    [aux_sym_operator_token2] = ACTIONS(139),
    [aux_sym_operator_token3] = ACTIONS(141),
    [aux_sym_operator_token4] = ACTIONS(143),
    [aux_sym_operator_token5] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(145),
    [anon_sym_xor] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_notin] = ACTIONS(131),
    [anon_sym_is] = ACTIONS(131),
    [anon_sym_isnot] = ACTIONS(131),
    [anon_sym_of] = ACTIONS(131),
    [anon_sym_as] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [aux_sym_operator_token6] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [aux_sym_operator_token7] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(155),
    [aux_sym_operator_token8] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [aux_sym_operator_token9] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_div] = ACTIONS(161),
    [anon_sym_mod] = ACTIONS(161),
    [anon_sym_shl] = ACTIONS(161),
    [anon_sym_shr] = ACTIONS(161),
    [aux_sym_operator_token10] = ACTIONS(159),
    [anon_sym_static] = ACTIONS(129),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(129),
    [anon_sym_asm] = ACTIONS(129),
    [anon_sym_bind] = ACTIONS(129),
    [anon_sym_block] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(129),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_cast] = ACTIONS(129),
    [anon_sym_concept] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(129),
    [anon_sym_converter] = ACTIONS(129),
    [anon_sym_defer] = ACTIONS(129),
    [anon_sym_distinct] = ACTIONS(129),
    [anon_sym_do] = ACTIONS(129),
    [anon_sym_elif] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_except] = ACTIONS(129),
    [anon_sym_export] = ACTIONS(129),
    [anon_sym_finally] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_func] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [anon_sym_interface] = ACTIONS(129),
    [anon_sym_iterator] = ACTIONS(129),
    [anon_sym_macro] = ACTIONS(129),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_mixin] = ACTIONS(129),
    [anon_sym_nil] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(129),
    [anon_sym_out] = ACTIONS(129),
    [anon_sym_proc] = ACTIONS(129),
    [anon_sym_ptr] = ACTIONS(129),
    [anon_sym_raise] = ACTIONS(129),
    [anon_sym_ref] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_template] = ACTIONS(129),
    [anon_sym_try] = ACTIONS(129),
    [anon_sym_tuple] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_when] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_yield] = ACTIONS(129),
    [aux_sym_IDENT_token1] = ACTIONS(165),
    [sym_INT_LIT] = ACTIONS(167),
    [sym_INT8_LIT] = ACTIONS(167),
    [sym_INT16_LIT] = ACTIONS(167),
    [sym_INT32_LIT] = ACTIONS(167),
    [sym_INT64_LIT] = ACTIONS(167),
    [sym_UINT_LIT] = ACTIONS(167),
    [sym_UINT8_LIT] = ACTIONS(167),
    [sym_UINT16_LIT] = ACTIONS(167),
    [sym_UINT32_LIT] = ACTIONS(167),
    [sym_UINT64_LIT] = ACTIONS(167),
    [sym_FLOAT_LIT] = ACTIONS(167),
    [sym_FLOAT32_LIT] = ACTIONS(167),
    [sym_FLOAT64_LIT] = ACTIONS(169),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(167),
    [sym_CHAR_LIT] = ACTIONS(169),
    [sym_STR_LIT] = ACTIONS(167),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(171),
    [sym_RSTR_LIT] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
  },
  [56] = {
    [sym_literal] = STATE(97),
    [sym_operatorB] = STATE(86),
    [sym_normal_comment] = STATE(56),
    [sym_KEYW] = STATE(97),
    [sym_IDENT] = STATE(97),
    [sym_TRIPLESTR_LIT] = STATE(113),
    [sym_NIL] = STATE(113),
    [sym_BOOL_LIT] = STATE(113),
    [aux_sym_symbol_repeat1] = STATE(76),
    [aux_sym_symbol_repeat2] = STATE(56),
    [anon_sym_let] = ACTIONS(177),
    [anon_sym_var] = ACTIONS(177),
    [anon_sym_using] = ACTIONS(177),
    [anon_sym_not] = ACTIONS(180),
    [anon_sym_discard] = ACTIONS(177),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [aux_sym_symbol_token1] = ACTIONS(185),
    [aux_sym_operator_token1] = ACTIONS(188),
    [aux_sym_operator_token2] = ACTIONS(191),
    [aux_sym_operator_token3] = ACTIONS(194),
    [aux_sym_operator_token4] = ACTIONS(197),
    [aux_sym_operator_token5] = ACTIONS(197),
    [anon_sym_or] = ACTIONS(200),
    [anon_sym_xor] = ACTIONS(200),
    [anon_sym_and] = ACTIONS(203),
    [anon_sym_EQ_EQ] = ACTIONS(206),
    [anon_sym_LT_EQ] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_GT_EQ] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_BANG_EQ] = ACTIONS(206),
    [anon_sym_in] = ACTIONS(180),
    [anon_sym_notin] = ACTIONS(180),
    [anon_sym_is] = ACTIONS(180),
    [anon_sym_isnot] = ACTIONS(180),
    [anon_sym_of] = ACTIONS(180),
    [anon_sym_as] = ACTIONS(180),
    [anon_sym_from] = ACTIONS(180),
    [aux_sym_operator_token6] = ACTIONS(206),
    [anon_sym_DOT_DOT] = ACTIONS(209),
    [aux_sym_operator_token7] = ACTIONS(212),
    [anon_sym_AMP] = ACTIONS(215),
    [aux_sym_operator_token8] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(218),
    [aux_sym_operator_token9] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(221),
    [anon_sym_div] = ACTIONS(224),
    [anon_sym_mod] = ACTIONS(224),
    [anon_sym_shl] = ACTIONS(224),
    [anon_sym_shr] = ACTIONS(224),
    [aux_sym_operator_token10] = ACTIONS(221),
    [anon_sym_static] = ACTIONS(177),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(177),
    [anon_sym_asm] = ACTIONS(177),
    [anon_sym_bind] = ACTIONS(177),
    [anon_sym_block] = ACTIONS(177),
    [anon_sym_break] = ACTIONS(177),
    [anon_sym_case] = ACTIONS(177),
    [anon_sym_cast] = ACTIONS(177),
    [anon_sym_concept] = ACTIONS(177),
    [anon_sym_const] = ACTIONS(177),
    [anon_sym_continue] = ACTIONS(177),
    [anon_sym_converter] = ACTIONS(177),
    [anon_sym_defer] = ACTIONS(177),
    [anon_sym_distinct] = ACTIONS(177),
    [anon_sym_do] = ACTIONS(177),
    [anon_sym_elif] = ACTIONS(177),
    [anon_sym_else] = ACTIONS(177),
    [anon_sym_end] = ACTIONS(177),
    [anon_sym_enum] = ACTIONS(177),
    [anon_sym_except] = ACTIONS(177),
    [anon_sym_export] = ACTIONS(177),
    [anon_sym_finally] = ACTIONS(177),
    [anon_sym_for] = ACTIONS(177),
    [anon_sym_func] = ACTIONS(177),
    [anon_sym_if] = ACTIONS(177),
    [anon_sym_import] = ACTIONS(177),
    [anon_sym_include] = ACTIONS(177),
    [anon_sym_interface] = ACTIONS(177),
    [anon_sym_iterator] = ACTIONS(177),
    [anon_sym_macro] = ACTIONS(177),
    [anon_sym_method] = ACTIONS(177),
    [anon_sym_mixin] = ACTIONS(177),
    [anon_sym_nil] = ACTIONS(227),
    [anon_sym_object] = ACTIONS(177),
    [anon_sym_out] = ACTIONS(177),
    [anon_sym_proc] = ACTIONS(177),
    [anon_sym_ptr] = ACTIONS(177),
    [anon_sym_raise] = ACTIONS(177),
    [anon_sym_ref] = ACTIONS(177),
    [anon_sym_return] = ACTIONS(177),
    [anon_sym_template] = ACTIONS(177),
    [anon_sym_try] = ACTIONS(177),
    [anon_sym_tuple] = ACTIONS(177),
    [anon_sym_type] = ACTIONS(177),
    [anon_sym_when] = ACTIONS(177),
    [anon_sym_while] = ACTIONS(177),
    [anon_sym_yield] = ACTIONS(177),
    [aux_sym_IDENT_token1] = ACTIONS(230),
    [sym_INT_LIT] = ACTIONS(233),
    [sym_INT8_LIT] = ACTIONS(233),
    [sym_INT16_LIT] = ACTIONS(233),
    [sym_INT32_LIT] = ACTIONS(233),
    [sym_INT64_LIT] = ACTIONS(233),
    [sym_UINT_LIT] = ACTIONS(233),
    [sym_UINT8_LIT] = ACTIONS(233),
    [sym_UINT16_LIT] = ACTIONS(233),
    [sym_UINT32_LIT] = ACTIONS(233),
    [sym_UINT64_LIT] = ACTIONS(233),
    [sym_FLOAT_LIT] = ACTIONS(233),
    [sym_FLOAT32_LIT] = ACTIONS(233),
    [sym_FLOAT64_LIT] = ACTIONS(236),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(233),
    [sym_CHAR_LIT] = ACTIONS(236),
    [sym_STR_LIT] = ACTIONS(233),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(239),
    [sym_RSTR_LIT] = ACTIONS(236),
    [anon_sym_true] = ACTIONS(242),
    [anon_sym_false] = ACTIONS(242),
  },
  [57] = {
    [sym_literal] = STATE(97),
    [sym_operatorB] = STATE(86),
    [sym_normal_comment] = STATE(57),
    [sym_KEYW] = STATE(97),
    [sym_IDENT] = STATE(97),
    [sym_TRIPLESTR_LIT] = STATE(113),
    [sym_NIL] = STATE(113),
    [sym_BOOL_LIT] = STATE(113),
    [aux_sym_symbol_repeat1] = STATE(76),
    [aux_sym_symbol_repeat2] = STATE(55),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_discard] = ACTIONS(129),
    [aux_sym_symbol_token1] = ACTIONS(135),
    [aux_sym_operator_token1] = ACTIONS(137),
    [aux_sym_operator_token2] = ACTIONS(139),
    [aux_sym_operator_token3] = ACTIONS(141),
    [aux_sym_operator_token4] = ACTIONS(143),
    [aux_sym_operator_token5] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(145),
    [anon_sym_xor] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_notin] = ACTIONS(131),
    [anon_sym_is] = ACTIONS(131),
    [anon_sym_isnot] = ACTIONS(131),
    [anon_sym_of] = ACTIONS(131),
    [anon_sym_as] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [aux_sym_operator_token6] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [aux_sym_operator_token7] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(155),
    [aux_sym_operator_token8] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [aux_sym_operator_token9] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_div] = ACTIONS(161),
    [anon_sym_mod] = ACTIONS(161),
    [anon_sym_shl] = ACTIONS(161),
    [anon_sym_shr] = ACTIONS(161),
    [aux_sym_operator_token10] = ACTIONS(159),
    [anon_sym_static] = ACTIONS(129),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(129),
    [anon_sym_asm] = ACTIONS(129),
    [anon_sym_bind] = ACTIONS(129),
    [anon_sym_block] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(129),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_cast] = ACTIONS(129),
    [anon_sym_concept] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(129),
    [anon_sym_converter] = ACTIONS(129),
    [anon_sym_defer] = ACTIONS(129),
    [anon_sym_distinct] = ACTIONS(129),
    [anon_sym_do] = ACTIONS(129),
    [anon_sym_elif] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_except] = ACTIONS(129),
    [anon_sym_export] = ACTIONS(129),
    [anon_sym_finally] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_func] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [anon_sym_interface] = ACTIONS(129),
    [anon_sym_iterator] = ACTIONS(129),
    [anon_sym_macro] = ACTIONS(129),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_mixin] = ACTIONS(129),
    [anon_sym_nil] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(129),
    [anon_sym_out] = ACTIONS(129),
    [anon_sym_proc] = ACTIONS(129),
    [anon_sym_ptr] = ACTIONS(129),
    [anon_sym_raise] = ACTIONS(129),
    [anon_sym_ref] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_template] = ACTIONS(129),
    [anon_sym_try] = ACTIONS(129),
    [anon_sym_tuple] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_when] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_yield] = ACTIONS(129),
    [aux_sym_IDENT_token1] = ACTIONS(165),
    [sym_INT_LIT] = ACTIONS(167),
    [sym_INT8_LIT] = ACTIONS(167),
    [sym_INT16_LIT] = ACTIONS(167),
    [sym_INT32_LIT] = ACTIONS(167),
    [sym_INT64_LIT] = ACTIONS(167),
    [sym_UINT_LIT] = ACTIONS(167),
    [sym_UINT8_LIT] = ACTIONS(167),
    [sym_UINT16_LIT] = ACTIONS(167),
    [sym_UINT32_LIT] = ACTIONS(167),
    [sym_UINT64_LIT] = ACTIONS(167),
    [sym_FLOAT_LIT] = ACTIONS(167),
    [sym_FLOAT32_LIT] = ACTIONS(167),
    [sym_FLOAT64_LIT] = ACTIONS(169),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(167),
    [sym_CHAR_LIT] = ACTIONS(169),
    [sym_STR_LIT] = ACTIONS(167),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(171),
    [sym_RSTR_LIT] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
  },
  [58] = {
    [sym_literal] = STATE(97),
    [sym_operatorB] = STATE(86),
    [sym_normal_comment] = STATE(58),
    [sym_KEYW] = STATE(97),
    [sym_IDENT] = STATE(97),
    [sym_TRIPLESTR_LIT] = STATE(113),
    [sym_NIL] = STATE(113),
    [sym_BOOL_LIT] = STATE(113),
    [aux_sym_symbol_repeat1] = STATE(76),
    [aux_sym_symbol_repeat2] = STATE(54),
    [anon_sym_let] = ACTIONS(129),
    [anon_sym_var] = ACTIONS(129),
    [anon_sym_using] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_discard] = ACTIONS(129),
    [aux_sym_symbol_token1] = ACTIONS(135),
    [aux_sym_operator_token1] = ACTIONS(137),
    [aux_sym_operator_token2] = ACTIONS(139),
    [aux_sym_operator_token3] = ACTIONS(141),
    [aux_sym_operator_token4] = ACTIONS(143),
    [aux_sym_operator_token5] = ACTIONS(143),
    [anon_sym_or] = ACTIONS(145),
    [anon_sym_xor] = ACTIONS(145),
    [anon_sym_and] = ACTIONS(147),
    [anon_sym_EQ_EQ] = ACTIONS(149),
    [anon_sym_LT_EQ] = ACTIONS(149),
    [anon_sym_LT] = ACTIONS(149),
    [anon_sym_GT_EQ] = ACTIONS(149),
    [anon_sym_GT] = ACTIONS(149),
    [anon_sym_BANG_EQ] = ACTIONS(149),
    [anon_sym_in] = ACTIONS(131),
    [anon_sym_notin] = ACTIONS(131),
    [anon_sym_is] = ACTIONS(131),
    [anon_sym_isnot] = ACTIONS(131),
    [anon_sym_of] = ACTIONS(131),
    [anon_sym_as] = ACTIONS(131),
    [anon_sym_from] = ACTIONS(131),
    [aux_sym_operator_token6] = ACTIONS(149),
    [anon_sym_DOT_DOT] = ACTIONS(151),
    [aux_sym_operator_token7] = ACTIONS(153),
    [anon_sym_AMP] = ACTIONS(155),
    [aux_sym_operator_token8] = ACTIONS(155),
    [anon_sym_PLUS] = ACTIONS(157),
    [anon_sym_DASH] = ACTIONS(157),
    [aux_sym_operator_token9] = ACTIONS(157),
    [anon_sym_STAR] = ACTIONS(159),
    [anon_sym_SLASH] = ACTIONS(159),
    [anon_sym_PERCENT] = ACTIONS(159),
    [anon_sym_div] = ACTIONS(161),
    [anon_sym_mod] = ACTIONS(161),
    [anon_sym_shl] = ACTIONS(161),
    [anon_sym_shr] = ACTIONS(161),
    [aux_sym_operator_token10] = ACTIONS(159),
    [anon_sym_static] = ACTIONS(129),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(129),
    [anon_sym_asm] = ACTIONS(129),
    [anon_sym_bind] = ACTIONS(129),
    [anon_sym_block] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(129),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_cast] = ACTIONS(129),
    [anon_sym_concept] = ACTIONS(129),
    [anon_sym_const] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(129),
    [anon_sym_converter] = ACTIONS(129),
    [anon_sym_defer] = ACTIONS(129),
    [anon_sym_distinct] = ACTIONS(129),
    [anon_sym_do] = ACTIONS(129),
    [anon_sym_elif] = ACTIONS(129),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_enum] = ACTIONS(129),
    [anon_sym_except] = ACTIONS(129),
    [anon_sym_export] = ACTIONS(129),
    [anon_sym_finally] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(129),
    [anon_sym_func] = ACTIONS(129),
    [anon_sym_if] = ACTIONS(129),
    [anon_sym_import] = ACTIONS(129),
    [anon_sym_include] = ACTIONS(129),
    [anon_sym_interface] = ACTIONS(129),
    [anon_sym_iterator] = ACTIONS(129),
    [anon_sym_macro] = ACTIONS(129),
    [anon_sym_method] = ACTIONS(129),
    [anon_sym_mixin] = ACTIONS(129),
    [anon_sym_nil] = ACTIONS(163),
    [anon_sym_object] = ACTIONS(129),
    [anon_sym_out] = ACTIONS(129),
    [anon_sym_proc] = ACTIONS(129),
    [anon_sym_ptr] = ACTIONS(129),
    [anon_sym_raise] = ACTIONS(129),
    [anon_sym_ref] = ACTIONS(129),
    [anon_sym_return] = ACTIONS(129),
    [anon_sym_template] = ACTIONS(129),
    [anon_sym_try] = ACTIONS(129),
    [anon_sym_tuple] = ACTIONS(129),
    [anon_sym_type] = ACTIONS(129),
    [anon_sym_when] = ACTIONS(129),
    [anon_sym_while] = ACTIONS(129),
    [anon_sym_yield] = ACTIONS(129),
    [aux_sym_IDENT_token1] = ACTIONS(165),
    [sym_INT_LIT] = ACTIONS(167),
    [sym_INT8_LIT] = ACTIONS(167),
    [sym_INT16_LIT] = ACTIONS(167),
    [sym_INT32_LIT] = ACTIONS(167),
    [sym_INT64_LIT] = ACTIONS(167),
    [sym_UINT_LIT] = ACTIONS(167),
    [sym_UINT8_LIT] = ACTIONS(167),
    [sym_UINT16_LIT] = ACTIONS(167),
    [sym_UINT32_LIT] = ACTIONS(167),
    [sym_UINT64_LIT] = ACTIONS(167),
    [sym_FLOAT_LIT] = ACTIONS(167),
    [sym_FLOAT32_LIT] = ACTIONS(167),
    [sym_FLOAT64_LIT] = ACTIONS(169),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(167),
    [sym_CHAR_LIT] = ACTIONS(169),
    [sym_STR_LIT] = ACTIONS(167),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(171),
    [sym_RSTR_LIT] = ACTIONS(169),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(173),
  },
  [59] = {
    [sym_normal_comment] = STATE(59),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_COMMENT_token1] = ACTIONS(245),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__NEWLINE] = ACTIONS(245),
  },
  [60] = {
    [sym_normal_comment] = STATE(60),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_not] = ACTIONS(247),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(247),
    [aux_sym_operator_token2] = ACTIONS(245),
    [aux_sym_operator_token3] = ACTIONS(245),
    [aux_sym_operator_token4] = ACTIONS(247),
    [aux_sym_operator_token5] = ACTIONS(247),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_xor] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_in] = ACTIONS(247),
    [anon_sym_notin] = ACTIONS(247),
    [anon_sym_is] = ACTIONS(247),
    [anon_sym_isnot] = ACTIONS(247),
    [anon_sym_of] = ACTIONS(247),
    [anon_sym_as] = ACTIONS(247),
    [anon_sym_from] = ACTIONS(247),
    [aux_sym_operator_token6] = ACTIONS(247),
    [anon_sym_DOT_DOT] = ACTIONS(247),
    [aux_sym_operator_token7] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [aux_sym_operator_token8] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [aux_sym_operator_token9] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_div] = ACTIONS(247),
    [anon_sym_mod] = ACTIONS(247),
    [anon_sym_shl] = ACTIONS(247),
    [anon_sym_shr] = ACTIONS(247),
    [aux_sym_operator_token10] = ACTIONS(247),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_COMMENT_token1] = ACTIONS(245),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__NEWLINE] = ACTIONS(245),
  },
  [61] = {
    [sym_normal_comment] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_COMMENT_token1] = ACTIONS(245),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__NEWLINE] = ACTIONS(245),
  },
  [62] = {
    [sym_normal_comment] = STATE(62),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_COMMENT_token1] = ACTIONS(245),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__NEWLINE] = ACTIONS(245),
  },
  [63] = {
    [sym_normal_comment] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COLON] = ACTIONS(247),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_COMMENT_token1] = ACTIONS(245),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__NEWLINE] = ACTIONS(245),
  },
  [64] = {
    [sym_normal_comment] = STATE(64),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [65] = {
    [sym_normal_comment] = STATE(65),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [66] = {
    [sym_normal_comment] = STATE(66),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [67] = {
    [sym_normal_comment] = STATE(67),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [68] = {
    [sym_normal_comment] = STATE(68),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [69] = {
    [sym_normal_comment] = STATE(69),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [70] = {
    [sym_normal_comment] = STATE(70),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [71] = {
    [sym_normal_comment] = STATE(71),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [72] = {
    [sym_normal_comment] = STATE(72),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [73] = {
    [sym_operator] = STATE(99),
    [sym_normal_comment] = STATE(73),
    [aux_sym_primary_repeat1] = STATE(73),
    [anon_sym_let] = ACTIONS(257),
    [anon_sym_var] = ACTIONS(257),
    [anon_sym_using] = ACTIONS(257),
    [anon_sym_not] = ACTIONS(259),
    [anon_sym_discard] = ACTIONS(257),
    [anon_sym_BQUOTE] = ACTIONS(262),
    [aux_sym_operator_token1] = ACTIONS(264),
    [aux_sym_operator_token2] = ACTIONS(267),
    [aux_sym_operator_token3] = ACTIONS(270),
    [aux_sym_operator_token4] = ACTIONS(273),
    [aux_sym_operator_token5] = ACTIONS(273),
    [anon_sym_or] = ACTIONS(276),
    [anon_sym_xor] = ACTIONS(276),
    [anon_sym_and] = ACTIONS(279),
    [anon_sym_EQ_EQ] = ACTIONS(259),
    [anon_sym_LT_EQ] = ACTIONS(259),
    [anon_sym_LT] = ACTIONS(259),
    [anon_sym_GT_EQ] = ACTIONS(259),
    [anon_sym_GT] = ACTIONS(259),
    [anon_sym_BANG_EQ] = ACTIONS(259),
    [anon_sym_in] = ACTIONS(259),
    [anon_sym_notin] = ACTIONS(259),
    [anon_sym_is] = ACTIONS(259),
    [anon_sym_isnot] = ACTIONS(259),
    [anon_sym_of] = ACTIONS(259),
    [anon_sym_as] = ACTIONS(259),
    [anon_sym_from] = ACTIONS(259),
    [aux_sym_operator_token6] = ACTIONS(259),
    [anon_sym_DOT_DOT] = ACTIONS(282),
    [aux_sym_operator_token7] = ACTIONS(285),
    [anon_sym_AMP] = ACTIONS(288),
    [aux_sym_operator_token8] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [aux_sym_operator_token9] = ACTIONS(291),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_SLASH] = ACTIONS(294),
    [anon_sym_PERCENT] = ACTIONS(294),
    [anon_sym_div] = ACTIONS(294),
    [anon_sym_mod] = ACTIONS(294),
    [anon_sym_shl] = ACTIONS(294),
    [anon_sym_shr] = ACTIONS(294),
    [aux_sym_operator_token10] = ACTIONS(294),
    [anon_sym_static] = ACTIONS(297),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(257),
    [anon_sym_asm] = ACTIONS(257),
    [anon_sym_bind] = ACTIONS(257),
    [anon_sym_block] = ACTIONS(257),
    [anon_sym_break] = ACTIONS(257),
    [anon_sym_case] = ACTIONS(257),
    [anon_sym_cast] = ACTIONS(257),
    [anon_sym_concept] = ACTIONS(257),
    [anon_sym_const] = ACTIONS(257),
    [anon_sym_continue] = ACTIONS(257),
    [anon_sym_converter] = ACTIONS(257),
    [anon_sym_defer] = ACTIONS(257),
    [anon_sym_distinct] = ACTIONS(257),
    [anon_sym_do] = ACTIONS(257),
    [anon_sym_elif] = ACTIONS(257),
    [anon_sym_else] = ACTIONS(257),
    [anon_sym_end] = ACTIONS(257),
    [anon_sym_enum] = ACTIONS(257),
    [anon_sym_except] = ACTIONS(257),
    [anon_sym_export] = ACTIONS(257),
    [anon_sym_finally] = ACTIONS(257),
    [anon_sym_for] = ACTIONS(257),
    [anon_sym_func] = ACTIONS(257),
    [anon_sym_if] = ACTIONS(257),
    [anon_sym_import] = ACTIONS(257),
    [anon_sym_include] = ACTIONS(257),
    [anon_sym_interface] = ACTIONS(257),
    [anon_sym_iterator] = ACTIONS(257),
    [anon_sym_macro] = ACTIONS(257),
    [anon_sym_method] = ACTIONS(257),
    [anon_sym_mixin] = ACTIONS(257),
    [anon_sym_nil] = ACTIONS(257),
    [anon_sym_object] = ACTIONS(257),
    [anon_sym_out] = ACTIONS(257),
    [anon_sym_proc] = ACTIONS(257),
    [anon_sym_ptr] = ACTIONS(257),
    [anon_sym_raise] = ACTIONS(257),
    [anon_sym_ref] = ACTIONS(257),
    [anon_sym_return] = ACTIONS(257),
    [anon_sym_template] = ACTIONS(257),
    [anon_sym_try] = ACTIONS(257),
    [anon_sym_tuple] = ACTIONS(257),
    [anon_sym_type] = ACTIONS(257),
    [anon_sym_when] = ACTIONS(257),
    [anon_sym_while] = ACTIONS(257),
    [anon_sym_yield] = ACTIONS(257),
    [aux_sym_IDENT_token1] = ACTIONS(257),
    [sym_INT_LIT] = ACTIONS(257),
    [sym_INT8_LIT] = ACTIONS(257),
    [sym_INT16_LIT] = ACTIONS(257),
    [sym_INT32_LIT] = ACTIONS(257),
    [sym_INT64_LIT] = ACTIONS(257),
    [sym_UINT_LIT] = ACTIONS(257),
    [sym_UINT8_LIT] = ACTIONS(257),
    [sym_UINT16_LIT] = ACTIONS(257),
    [sym_UINT32_LIT] = ACTIONS(257),
    [sym_UINT64_LIT] = ACTIONS(257),
    [sym_FLOAT_LIT] = ACTIONS(257),
    [sym_FLOAT32_LIT] = ACTIONS(257),
    [sym_FLOAT64_LIT] = ACTIONS(262),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(257),
    [sym_CHAR_LIT] = ACTIONS(262),
    [sym_STR_LIT] = ACTIONS(257),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(262),
    [sym_RSTR_LIT] = ACTIONS(262),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(257),
    [anon_sym_true] = ACTIONS(257),
    [anon_sym_false] = ACTIONS(257),
  },
  [74] = {
    [sym_operatorB] = STATE(86),
    [sym_normal_comment] = STATE(74),
    [aux_sym_symbol_repeat1] = STATE(74),
    [anon_sym_let] = ACTIONS(300),
    [anon_sym_var] = ACTIONS(300),
    [anon_sym_using] = ACTIONS(300),
    [anon_sym_not] = ACTIONS(302),
    [anon_sym_discard] = ACTIONS(300),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [aux_sym_symbol_token1] = ACTIONS(307),
    [aux_sym_operator_token1] = ACTIONS(310),
    [aux_sym_operator_token2] = ACTIONS(313),
    [aux_sym_operator_token3] = ACTIONS(316),
    [aux_sym_operator_token4] = ACTIONS(319),
    [aux_sym_operator_token5] = ACTIONS(319),
    [anon_sym_or] = ACTIONS(322),
    [anon_sym_xor] = ACTIONS(322),
    [anon_sym_and] = ACTIONS(325),
    [anon_sym_EQ_EQ] = ACTIONS(302),
    [anon_sym_LT_EQ] = ACTIONS(302),
    [anon_sym_LT] = ACTIONS(302),
    [anon_sym_GT_EQ] = ACTIONS(302),
    [anon_sym_GT] = ACTIONS(302),
    [anon_sym_BANG_EQ] = ACTIONS(302),
    [anon_sym_in] = ACTIONS(302),
    [anon_sym_notin] = ACTIONS(302),
    [anon_sym_is] = ACTIONS(302),
    [anon_sym_isnot] = ACTIONS(302),
    [anon_sym_of] = ACTIONS(302),
    [anon_sym_as] = ACTIONS(302),
    [anon_sym_from] = ACTIONS(302),
    [aux_sym_operator_token6] = ACTIONS(302),
    [anon_sym_DOT_DOT] = ACTIONS(328),
    [aux_sym_operator_token7] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(334),
    [aux_sym_operator_token8] = ACTIONS(334),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_DASH] = ACTIONS(337),
    [aux_sym_operator_token9] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_div] = ACTIONS(340),
    [anon_sym_mod] = ACTIONS(340),
    [anon_sym_shl] = ACTIONS(340),
    [anon_sym_shr] = ACTIONS(340),
    [aux_sym_operator_token10] = ACTIONS(340),
    [anon_sym_static] = ACTIONS(300),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(300),
    [anon_sym_asm] = ACTIONS(300),
    [anon_sym_bind] = ACTIONS(300),
    [anon_sym_block] = ACTIONS(300),
    [anon_sym_break] = ACTIONS(300),
    [anon_sym_case] = ACTIONS(300),
    [anon_sym_cast] = ACTIONS(300),
    [anon_sym_concept] = ACTIONS(300),
    [anon_sym_const] = ACTIONS(300),
    [anon_sym_continue] = ACTIONS(300),
    [anon_sym_converter] = ACTIONS(300),
    [anon_sym_defer] = ACTIONS(300),
    [anon_sym_distinct] = ACTIONS(300),
    [anon_sym_do] = ACTIONS(300),
    [anon_sym_elif] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [anon_sym_end] = ACTIONS(300),
    [anon_sym_enum] = ACTIONS(300),
    [anon_sym_except] = ACTIONS(300),
    [anon_sym_export] = ACTIONS(300),
    [anon_sym_finally] = ACTIONS(300),
    [anon_sym_for] = ACTIONS(300),
    [anon_sym_func] = ACTIONS(300),
    [anon_sym_if] = ACTIONS(300),
    [anon_sym_import] = ACTIONS(300),
    [anon_sym_include] = ACTIONS(300),
    [anon_sym_interface] = ACTIONS(300),
    [anon_sym_iterator] = ACTIONS(300),
    [anon_sym_macro] = ACTIONS(300),
    [anon_sym_method] = ACTIONS(300),
    [anon_sym_mixin] = ACTIONS(300),
    [anon_sym_nil] = ACTIONS(300),
    [anon_sym_object] = ACTIONS(300),
    [anon_sym_out] = ACTIONS(300),
    [anon_sym_proc] = ACTIONS(300),
    [anon_sym_ptr] = ACTIONS(300),
    [anon_sym_raise] = ACTIONS(300),
    [anon_sym_ref] = ACTIONS(300),
    [anon_sym_return] = ACTIONS(300),
    [anon_sym_template] = ACTIONS(300),
    [anon_sym_try] = ACTIONS(300),
    [anon_sym_tuple] = ACTIONS(300),
    [anon_sym_type] = ACTIONS(300),
    [anon_sym_when] = ACTIONS(300),
    [anon_sym_while] = ACTIONS(300),
    [anon_sym_yield] = ACTIONS(300),
    [aux_sym_IDENT_token1] = ACTIONS(300),
    [sym_INT_LIT] = ACTIONS(300),
    [sym_INT8_LIT] = ACTIONS(300),
    [sym_INT16_LIT] = ACTIONS(300),
    [sym_INT32_LIT] = ACTIONS(300),
    [sym_INT64_LIT] = ACTIONS(300),
    [sym_UINT_LIT] = ACTIONS(300),
    [sym_UINT8_LIT] = ACTIONS(300),
    [sym_UINT16_LIT] = ACTIONS(300),
    [sym_UINT32_LIT] = ACTIONS(300),
    [sym_UINT64_LIT] = ACTIONS(300),
    [sym_FLOAT_LIT] = ACTIONS(300),
    [sym_FLOAT32_LIT] = ACTIONS(300),
    [sym_FLOAT64_LIT] = ACTIONS(305),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(300),
    [sym_CHAR_LIT] = ACTIONS(305),
    [sym_STR_LIT] = ACTIONS(300),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(305),
    [sym_RSTR_LIT] = ACTIONS(305),
    [anon_sym_true] = ACTIONS(300),
    [anon_sym_false] = ACTIONS(300),
  },
  [75] = {
    [sym_normal_comment] = STATE(75),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_COMMENT_token1] = ACTIONS(255),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
    [sym__INDENT] = ACTIONS(255),
  },
  [76] = {
    [sym_operatorB] = STATE(86),
    [sym_normal_comment] = STATE(76),
    [aux_sym_symbol_repeat1] = STATE(74),
    [anon_sym_let] = ACTIONS(343),
    [anon_sym_var] = ACTIONS(343),
    [anon_sym_using] = ACTIONS(343),
    [anon_sym_not] = ACTIONS(343),
    [anon_sym_discard] = ACTIONS(343),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [aux_sym_symbol_token1] = ACTIONS(345),
    [aux_sym_operator_token1] = ACTIONS(343),
    [aux_sym_operator_token2] = ACTIONS(345),
    [aux_sym_operator_token3] = ACTIONS(345),
    [aux_sym_operator_token4] = ACTIONS(343),
    [aux_sym_operator_token5] = ACTIONS(343),
    [anon_sym_or] = ACTIONS(343),
    [anon_sym_xor] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(343),
    [anon_sym_EQ_EQ] = ACTIONS(343),
    [anon_sym_LT_EQ] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT_EQ] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_BANG_EQ] = ACTIONS(343),
    [anon_sym_in] = ACTIONS(343),
    [anon_sym_notin] = ACTIONS(343),
    [anon_sym_is] = ACTIONS(343),
    [anon_sym_isnot] = ACTIONS(343),
    [anon_sym_of] = ACTIONS(343),
    [anon_sym_as] = ACTIONS(343),
    [anon_sym_from] = ACTIONS(343),
    [aux_sym_operator_token6] = ACTIONS(343),
    [anon_sym_DOT_DOT] = ACTIONS(343),
    [aux_sym_operator_token7] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(343),
    [aux_sym_operator_token8] = ACTIONS(343),
    [anon_sym_PLUS] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(343),
    [aux_sym_operator_token9] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_SLASH] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(343),
    [anon_sym_div] = ACTIONS(343),
    [anon_sym_mod] = ACTIONS(343),
    [anon_sym_shl] = ACTIONS(343),
    [anon_sym_shr] = ACTIONS(343),
    [aux_sym_operator_token10] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(343),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(343),
    [anon_sym_asm] = ACTIONS(343),
    [anon_sym_bind] = ACTIONS(343),
    [anon_sym_block] = ACTIONS(343),
    [anon_sym_break] = ACTIONS(343),
    [anon_sym_case] = ACTIONS(343),
    [anon_sym_cast] = ACTIONS(343),
    [anon_sym_concept] = ACTIONS(343),
    [anon_sym_const] = ACTIONS(343),
    [anon_sym_continue] = ACTIONS(343),
    [anon_sym_converter] = ACTIONS(343),
    [anon_sym_defer] = ACTIONS(343),
    [anon_sym_distinct] = ACTIONS(343),
    [anon_sym_do] = ACTIONS(343),
    [anon_sym_elif] = ACTIONS(343),
    [anon_sym_else] = ACTIONS(343),
    [anon_sym_end] = ACTIONS(343),
    [anon_sym_enum] = ACTIONS(343),
    [anon_sym_except] = ACTIONS(343),
    [anon_sym_export] = ACTIONS(343),
    [anon_sym_finally] = ACTIONS(343),
    [anon_sym_for] = ACTIONS(343),
    [anon_sym_func] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(343),
    [anon_sym_include] = ACTIONS(343),
    [anon_sym_interface] = ACTIONS(343),
    [anon_sym_iterator] = ACTIONS(343),
    [anon_sym_macro] = ACTIONS(343),
    [anon_sym_method] = ACTIONS(343),
    [anon_sym_mixin] = ACTIONS(343),
    [anon_sym_nil] = ACTIONS(343),
    [anon_sym_object] = ACTIONS(343),
    [anon_sym_out] = ACTIONS(343),
    [anon_sym_proc] = ACTIONS(343),
    [anon_sym_ptr] = ACTIONS(343),
    [anon_sym_raise] = ACTIONS(343),
    [anon_sym_ref] = ACTIONS(343),
    [anon_sym_return] = ACTIONS(343),
    [anon_sym_template] = ACTIONS(343),
    [anon_sym_try] = ACTIONS(343),
    [anon_sym_tuple] = ACTIONS(343),
    [anon_sym_type] = ACTIONS(343),
    [anon_sym_when] = ACTIONS(343),
    [anon_sym_while] = ACTIONS(343),
    [anon_sym_yield] = ACTIONS(343),
    [aux_sym_IDENT_token1] = ACTIONS(343),
    [sym_INT_LIT] = ACTIONS(343),
    [sym_INT8_LIT] = ACTIONS(343),
    [sym_INT16_LIT] = ACTIONS(343),
    [sym_INT32_LIT] = ACTIONS(343),
    [sym_INT64_LIT] = ACTIONS(343),
    [sym_UINT_LIT] = ACTIONS(343),
    [sym_UINT8_LIT] = ACTIONS(343),
    [sym_UINT16_LIT] = ACTIONS(343),
    [sym_UINT32_LIT] = ACTIONS(343),
    [sym_UINT64_LIT] = ACTIONS(343),
    [sym_FLOAT_LIT] = ACTIONS(343),
    [sym_FLOAT32_LIT] = ACTIONS(343),
    [sym_FLOAT64_LIT] = ACTIONS(345),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(343),
    [sym_CHAR_LIT] = ACTIONS(345),
    [sym_STR_LIT] = ACTIONS(343),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(345),
    [sym_RSTR_LIT] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
  },
  [77] = {
    [sym_normal_comment] = STATE(77),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(247),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(247),
    [aux_sym_operator_token2] = ACTIONS(245),
    [aux_sym_operator_token3] = ACTIONS(245),
    [aux_sym_operator_token4] = ACTIONS(247),
    [aux_sym_operator_token5] = ACTIONS(247),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_xor] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_in] = ACTIONS(247),
    [anon_sym_notin] = ACTIONS(247),
    [anon_sym_is] = ACTIONS(247),
    [anon_sym_isnot] = ACTIONS(247),
    [anon_sym_of] = ACTIONS(247),
    [anon_sym_as] = ACTIONS(247),
    [anon_sym_from] = ACTIONS(247),
    [aux_sym_operator_token6] = ACTIONS(247),
    [anon_sym_DOT_DOT] = ACTIONS(247),
    [aux_sym_operator_token7] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [aux_sym_operator_token8] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [aux_sym_operator_token9] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_div] = ACTIONS(247),
    [anon_sym_mod] = ACTIONS(247),
    [anon_sym_shl] = ACTIONS(247),
    [anon_sym_shr] = ACTIONS(247),
    [aux_sym_operator_token10] = ACTIONS(247),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__DEDENT] = ACTIONS(245),
  },
  [78] = {
    [sym_normal_comment] = STATE(78),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__DEDENT] = ACTIONS(245),
  },
  [79] = {
    [sym_normal_comment] = STATE(79),
    [anon_sym_let] = ACTIONS(347),
    [anon_sym_var] = ACTIONS(347),
    [anon_sym_using] = ACTIONS(347),
    [anon_sym_not] = ACTIONS(347),
    [anon_sym_discard] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(349),
    [aux_sym_operator_token1] = ACTIONS(347),
    [aux_sym_operator_token2] = ACTIONS(349),
    [aux_sym_operator_token3] = ACTIONS(349),
    [aux_sym_operator_token4] = ACTIONS(347),
    [aux_sym_operator_token5] = ACTIONS(347),
    [anon_sym_or] = ACTIONS(347),
    [anon_sym_xor] = ACTIONS(347),
    [anon_sym_and] = ACTIONS(347),
    [anon_sym_EQ_EQ] = ACTIONS(347),
    [anon_sym_LT_EQ] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_GT_EQ] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_BANG_EQ] = ACTIONS(347),
    [anon_sym_in] = ACTIONS(347),
    [anon_sym_notin] = ACTIONS(347),
    [anon_sym_is] = ACTIONS(347),
    [anon_sym_isnot] = ACTIONS(347),
    [anon_sym_of] = ACTIONS(347),
    [anon_sym_as] = ACTIONS(347),
    [anon_sym_from] = ACTIONS(347),
    [aux_sym_operator_token6] = ACTIONS(347),
    [anon_sym_DOT_DOT] = ACTIONS(347),
    [aux_sym_operator_token7] = ACTIONS(349),
    [anon_sym_AMP] = ACTIONS(347),
    [aux_sym_operator_token8] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [aux_sym_operator_token9] = ACTIONS(347),
    [anon_sym_STAR] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(347),
    [anon_sym_div] = ACTIONS(347),
    [anon_sym_mod] = ACTIONS(347),
    [anon_sym_shl] = ACTIONS(347),
    [anon_sym_shr] = ACTIONS(347),
    [aux_sym_operator_token10] = ACTIONS(347),
    [anon_sym_static] = ACTIONS(347),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(347),
    [anon_sym_asm] = ACTIONS(347),
    [anon_sym_bind] = ACTIONS(347),
    [anon_sym_block] = ACTIONS(347),
    [anon_sym_break] = ACTIONS(347),
    [anon_sym_case] = ACTIONS(347),
    [anon_sym_cast] = ACTIONS(347),
    [anon_sym_concept] = ACTIONS(347),
    [anon_sym_const] = ACTIONS(347),
    [anon_sym_continue] = ACTIONS(347),
    [anon_sym_converter] = ACTIONS(347),
    [anon_sym_defer] = ACTIONS(347),
    [anon_sym_distinct] = ACTIONS(347),
    [anon_sym_do] = ACTIONS(347),
    [anon_sym_elif] = ACTIONS(347),
    [anon_sym_else] = ACTIONS(347),
    [anon_sym_end] = ACTIONS(347),
    [anon_sym_enum] = ACTIONS(347),
    [anon_sym_except] = ACTIONS(347),
    [anon_sym_export] = ACTIONS(347),
    [anon_sym_finally] = ACTIONS(347),
    [anon_sym_for] = ACTIONS(347),
    [anon_sym_func] = ACTIONS(347),
    [anon_sym_if] = ACTIONS(347),
    [anon_sym_import] = ACTIONS(347),
    [anon_sym_include] = ACTIONS(347),
    [anon_sym_interface] = ACTIONS(347),
    [anon_sym_iterator] = ACTIONS(347),
    [anon_sym_macro] = ACTIONS(347),
    [anon_sym_method] = ACTIONS(347),
    [anon_sym_mixin] = ACTIONS(347),
    [anon_sym_nil] = ACTIONS(347),
    [anon_sym_object] = ACTIONS(347),
    [anon_sym_out] = ACTIONS(347),
    [anon_sym_proc] = ACTIONS(347),
    [anon_sym_ptr] = ACTIONS(347),
    [anon_sym_raise] = ACTIONS(347),
    [anon_sym_ref] = ACTIONS(347),
    [anon_sym_return] = ACTIONS(347),
    [anon_sym_template] = ACTIONS(347),
    [anon_sym_try] = ACTIONS(347),
    [anon_sym_tuple] = ACTIONS(347),
    [anon_sym_type] = ACTIONS(347),
    [anon_sym_when] = ACTIONS(347),
    [anon_sym_while] = ACTIONS(347),
    [anon_sym_yield] = ACTIONS(347),
    [aux_sym_IDENT_token1] = ACTIONS(347),
    [sym_INT_LIT] = ACTIONS(347),
    [sym_INT8_LIT] = ACTIONS(347),
    [sym_INT16_LIT] = ACTIONS(347),
    [sym_INT32_LIT] = ACTIONS(347),
    [sym_INT64_LIT] = ACTIONS(347),
    [sym_UINT_LIT] = ACTIONS(347),
    [sym_UINT8_LIT] = ACTIONS(347),
    [sym_UINT16_LIT] = ACTIONS(347),
    [sym_UINT32_LIT] = ACTIONS(347),
    [sym_UINT64_LIT] = ACTIONS(347),
    [sym_FLOAT_LIT] = ACTIONS(347),
    [sym_FLOAT32_LIT] = ACTIONS(347),
    [sym_FLOAT64_LIT] = ACTIONS(349),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(347),
    [sym_CHAR_LIT] = ACTIONS(349),
    [sym_STR_LIT] = ACTIONS(347),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(349),
    [sym_RSTR_LIT] = ACTIONS(349),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(347),
    [anon_sym_false] = ACTIONS(347),
    [sym__INDENT] = ACTIONS(349),
  },
  [80] = {
    [sym_normal_comment] = STATE(80),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__DEDENT] = ACTIONS(245),
  },
  [81] = {
    [sym_normal_comment] = STATE(81),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__DEDENT] = ACTIONS(245),
  },
  [82] = {
    [sym_normal_comment] = STATE(82),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__DEDENT] = ACTIONS(245),
  },
  [83] = {
    [sym_normal_comment] = STATE(83),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
    [sym__DEDENT] = ACTIONS(245),
  },
  [84] = {
    [sym_normal_comment] = STATE(84),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [85] = {
    [sym_normal_comment] = STATE(85),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [86] = {
    [sym_normal_comment] = STATE(86),
    [anon_sym_let] = ACTIONS(351),
    [anon_sym_var] = ACTIONS(351),
    [anon_sym_using] = ACTIONS(351),
    [anon_sym_not] = ACTIONS(351),
    [anon_sym_discard] = ACTIONS(351),
    [anon_sym_BQUOTE] = ACTIONS(353),
    [aux_sym_symbol_token1] = ACTIONS(353),
    [aux_sym_operator_token1] = ACTIONS(351),
    [aux_sym_operator_token2] = ACTIONS(353),
    [aux_sym_operator_token3] = ACTIONS(353),
    [aux_sym_operator_token4] = ACTIONS(351),
    [aux_sym_operator_token5] = ACTIONS(351),
    [anon_sym_or] = ACTIONS(351),
    [anon_sym_xor] = ACTIONS(351),
    [anon_sym_and] = ACTIONS(351),
    [anon_sym_EQ_EQ] = ACTIONS(351),
    [anon_sym_LT_EQ] = ACTIONS(351),
    [anon_sym_LT] = ACTIONS(351),
    [anon_sym_GT_EQ] = ACTIONS(351),
    [anon_sym_GT] = ACTIONS(351),
    [anon_sym_BANG_EQ] = ACTIONS(351),
    [anon_sym_in] = ACTIONS(351),
    [anon_sym_notin] = ACTIONS(351),
    [anon_sym_is] = ACTIONS(351),
    [anon_sym_isnot] = ACTIONS(351),
    [anon_sym_of] = ACTIONS(351),
    [anon_sym_as] = ACTIONS(351),
    [anon_sym_from] = ACTIONS(351),
    [aux_sym_operator_token6] = ACTIONS(351),
    [anon_sym_DOT_DOT] = ACTIONS(351),
    [aux_sym_operator_token7] = ACTIONS(353),
    [anon_sym_AMP] = ACTIONS(351),
    [aux_sym_operator_token8] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [aux_sym_operator_token9] = ACTIONS(351),
    [anon_sym_STAR] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(351),
    [anon_sym_PERCENT] = ACTIONS(351),
    [anon_sym_div] = ACTIONS(351),
    [anon_sym_mod] = ACTIONS(351),
    [anon_sym_shl] = ACTIONS(351),
    [anon_sym_shr] = ACTIONS(351),
    [aux_sym_operator_token10] = ACTIONS(351),
    [anon_sym_static] = ACTIONS(351),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(351),
    [anon_sym_asm] = ACTIONS(351),
    [anon_sym_bind] = ACTIONS(351),
    [anon_sym_block] = ACTIONS(351),
    [anon_sym_break] = ACTIONS(351),
    [anon_sym_case] = ACTIONS(351),
    [anon_sym_cast] = ACTIONS(351),
    [anon_sym_concept] = ACTIONS(351),
    [anon_sym_const] = ACTIONS(351),
    [anon_sym_continue] = ACTIONS(351),
    [anon_sym_converter] = ACTIONS(351),
    [anon_sym_defer] = ACTIONS(351),
    [anon_sym_distinct] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [anon_sym_elif] = ACTIONS(351),
    [anon_sym_else] = ACTIONS(351),
    [anon_sym_end] = ACTIONS(351),
    [anon_sym_enum] = ACTIONS(351),
    [anon_sym_except] = ACTIONS(351),
    [anon_sym_export] = ACTIONS(351),
    [anon_sym_finally] = ACTIONS(351),
    [anon_sym_for] = ACTIONS(351),
    [anon_sym_func] = ACTIONS(351),
    [anon_sym_if] = ACTIONS(351),
    [anon_sym_import] = ACTIONS(351),
    [anon_sym_include] = ACTIONS(351),
    [anon_sym_interface] = ACTIONS(351),
    [anon_sym_iterator] = ACTIONS(351),
    [anon_sym_macro] = ACTIONS(351),
    [anon_sym_method] = ACTIONS(351),
    [anon_sym_mixin] = ACTIONS(351),
    [anon_sym_nil] = ACTIONS(351),
    [anon_sym_object] = ACTIONS(351),
    [anon_sym_out] = ACTIONS(351),
    [anon_sym_proc] = ACTIONS(351),
    [anon_sym_ptr] = ACTIONS(351),
    [anon_sym_raise] = ACTIONS(351),
    [anon_sym_ref] = ACTIONS(351),
    [anon_sym_return] = ACTIONS(351),
    [anon_sym_template] = ACTIONS(351),
    [anon_sym_try] = ACTIONS(351),
    [anon_sym_tuple] = ACTIONS(351),
    [anon_sym_type] = ACTIONS(351),
    [anon_sym_when] = ACTIONS(351),
    [anon_sym_while] = ACTIONS(351),
    [anon_sym_yield] = ACTIONS(351),
    [aux_sym_IDENT_token1] = ACTIONS(351),
    [sym_INT_LIT] = ACTIONS(351),
    [sym_INT8_LIT] = ACTIONS(351),
    [sym_INT16_LIT] = ACTIONS(351),
    [sym_INT32_LIT] = ACTIONS(351),
    [sym_INT64_LIT] = ACTIONS(351),
    [sym_UINT_LIT] = ACTIONS(351),
    [sym_UINT8_LIT] = ACTIONS(351),
    [sym_UINT16_LIT] = ACTIONS(351),
    [sym_UINT32_LIT] = ACTIONS(351),
    [sym_UINT64_LIT] = ACTIONS(351),
    [sym_FLOAT_LIT] = ACTIONS(351),
    [sym_FLOAT32_LIT] = ACTIONS(351),
    [sym_FLOAT64_LIT] = ACTIONS(353),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(351),
    [sym_CHAR_LIT] = ACTIONS(353),
    [sym_STR_LIT] = ACTIONS(351),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(353),
    [sym_RSTR_LIT] = ACTIONS(353),
    [anon_sym_true] = ACTIONS(351),
    [anon_sym_false] = ACTIONS(351),
  },
  [87] = {
    [sym_normal_comment] = STATE(87),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [88] = {
    [sym_normal_comment] = STATE(88),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [89] = {
    [sym_normal_comment] = STATE(89),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [90] = {
    [sym_normal_comment] = STATE(90),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [91] = {
    [sym_normal_comment] = STATE(91),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [92] = {
    [sym_normal_comment] = STATE(92),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [93] = {
    [sym_normal_comment] = STATE(93),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [94] = {
    [sym_normal_comment] = STATE(94),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [95] = {
    [sym_normal_comment] = STATE(95),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [96] = {
    [sym_normal_comment] = STATE(96),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [97] = {
    [sym_normal_comment] = STATE(97),
    [anon_sym_let] = ACTIONS(343),
    [anon_sym_var] = ACTIONS(343),
    [anon_sym_using] = ACTIONS(343),
    [anon_sym_not] = ACTIONS(343),
    [anon_sym_discard] = ACTIONS(343),
    [anon_sym_BQUOTE] = ACTIONS(345),
    [aux_sym_symbol_token1] = ACTIONS(345),
    [aux_sym_operator_token1] = ACTIONS(343),
    [aux_sym_operator_token2] = ACTIONS(345),
    [aux_sym_operator_token3] = ACTIONS(345),
    [aux_sym_operator_token4] = ACTIONS(343),
    [aux_sym_operator_token5] = ACTIONS(343),
    [anon_sym_or] = ACTIONS(343),
    [anon_sym_xor] = ACTIONS(343),
    [anon_sym_and] = ACTIONS(343),
    [anon_sym_EQ_EQ] = ACTIONS(343),
    [anon_sym_LT_EQ] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT_EQ] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_BANG_EQ] = ACTIONS(343),
    [anon_sym_in] = ACTIONS(343),
    [anon_sym_notin] = ACTIONS(343),
    [anon_sym_is] = ACTIONS(343),
    [anon_sym_isnot] = ACTIONS(343),
    [anon_sym_of] = ACTIONS(343),
    [anon_sym_as] = ACTIONS(343),
    [anon_sym_from] = ACTIONS(343),
    [aux_sym_operator_token6] = ACTIONS(343),
    [anon_sym_DOT_DOT] = ACTIONS(343),
    [aux_sym_operator_token7] = ACTIONS(345),
    [anon_sym_AMP] = ACTIONS(343),
    [aux_sym_operator_token8] = ACTIONS(343),
    [anon_sym_PLUS] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(343),
    [aux_sym_operator_token9] = ACTIONS(343),
    [anon_sym_STAR] = ACTIONS(343),
    [anon_sym_SLASH] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(343),
    [anon_sym_div] = ACTIONS(343),
    [anon_sym_mod] = ACTIONS(343),
    [anon_sym_shl] = ACTIONS(343),
    [anon_sym_shr] = ACTIONS(343),
    [aux_sym_operator_token10] = ACTIONS(343),
    [anon_sym_static] = ACTIONS(343),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(343),
    [anon_sym_asm] = ACTIONS(343),
    [anon_sym_bind] = ACTIONS(343),
    [anon_sym_block] = ACTIONS(343),
    [anon_sym_break] = ACTIONS(343),
    [anon_sym_case] = ACTIONS(343),
    [anon_sym_cast] = ACTIONS(343),
    [anon_sym_concept] = ACTIONS(343),
    [anon_sym_const] = ACTIONS(343),
    [anon_sym_continue] = ACTIONS(343),
    [anon_sym_converter] = ACTIONS(343),
    [anon_sym_defer] = ACTIONS(343),
    [anon_sym_distinct] = ACTIONS(343),
    [anon_sym_do] = ACTIONS(343),
    [anon_sym_elif] = ACTIONS(343),
    [anon_sym_else] = ACTIONS(343),
    [anon_sym_end] = ACTIONS(343),
    [anon_sym_enum] = ACTIONS(343),
    [anon_sym_except] = ACTIONS(343),
    [anon_sym_export] = ACTIONS(343),
    [anon_sym_finally] = ACTIONS(343),
    [anon_sym_for] = ACTIONS(343),
    [anon_sym_func] = ACTIONS(343),
    [anon_sym_if] = ACTIONS(343),
    [anon_sym_import] = ACTIONS(343),
    [anon_sym_include] = ACTIONS(343),
    [anon_sym_interface] = ACTIONS(343),
    [anon_sym_iterator] = ACTIONS(343),
    [anon_sym_macro] = ACTIONS(343),
    [anon_sym_method] = ACTIONS(343),
    [anon_sym_mixin] = ACTIONS(343),
    [anon_sym_nil] = ACTIONS(343),
    [anon_sym_object] = ACTIONS(343),
    [anon_sym_out] = ACTIONS(343),
    [anon_sym_proc] = ACTIONS(343),
    [anon_sym_ptr] = ACTIONS(343),
    [anon_sym_raise] = ACTIONS(343),
    [anon_sym_ref] = ACTIONS(343),
    [anon_sym_return] = ACTIONS(343),
    [anon_sym_template] = ACTIONS(343),
    [anon_sym_try] = ACTIONS(343),
    [anon_sym_tuple] = ACTIONS(343),
    [anon_sym_type] = ACTIONS(343),
    [anon_sym_when] = ACTIONS(343),
    [anon_sym_while] = ACTIONS(343),
    [anon_sym_yield] = ACTIONS(343),
    [aux_sym_IDENT_token1] = ACTIONS(343),
    [sym_INT_LIT] = ACTIONS(343),
    [sym_INT8_LIT] = ACTIONS(343),
    [sym_INT16_LIT] = ACTIONS(343),
    [sym_INT32_LIT] = ACTIONS(343),
    [sym_INT64_LIT] = ACTIONS(343),
    [sym_UINT_LIT] = ACTIONS(343),
    [sym_UINT8_LIT] = ACTIONS(343),
    [sym_UINT16_LIT] = ACTIONS(343),
    [sym_UINT32_LIT] = ACTIONS(343),
    [sym_UINT64_LIT] = ACTIONS(343),
    [sym_FLOAT_LIT] = ACTIONS(343),
    [sym_FLOAT32_LIT] = ACTIONS(343),
    [sym_FLOAT64_LIT] = ACTIONS(345),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(343),
    [sym_CHAR_LIT] = ACTIONS(345),
    [sym_STR_LIT] = ACTIONS(343),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(345),
    [sym_RSTR_LIT] = ACTIONS(345),
    [anon_sym_true] = ACTIONS(343),
    [anon_sym_false] = ACTIONS(343),
  },
  [98] = {
    [sym_normal_comment] = STATE(98),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [99] = {
    [sym_normal_comment] = STATE(99),
    [anon_sym_let] = ACTIONS(355),
    [anon_sym_var] = ACTIONS(355),
    [anon_sym_using] = ACTIONS(355),
    [anon_sym_not] = ACTIONS(355),
    [anon_sym_discard] = ACTIONS(355),
    [anon_sym_BQUOTE] = ACTIONS(357),
    [aux_sym_operator_token1] = ACTIONS(355),
    [aux_sym_operator_token2] = ACTIONS(357),
    [aux_sym_operator_token3] = ACTIONS(357),
    [aux_sym_operator_token4] = ACTIONS(355),
    [aux_sym_operator_token5] = ACTIONS(355),
    [anon_sym_or] = ACTIONS(355),
    [anon_sym_xor] = ACTIONS(355),
    [anon_sym_and] = ACTIONS(355),
    [anon_sym_EQ_EQ] = ACTIONS(355),
    [anon_sym_LT_EQ] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_GT_EQ] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_BANG_EQ] = ACTIONS(355),
    [anon_sym_in] = ACTIONS(355),
    [anon_sym_notin] = ACTIONS(355),
    [anon_sym_is] = ACTIONS(355),
    [anon_sym_isnot] = ACTIONS(355),
    [anon_sym_of] = ACTIONS(355),
    [anon_sym_as] = ACTIONS(355),
    [anon_sym_from] = ACTIONS(355),
    [aux_sym_operator_token6] = ACTIONS(355),
    [anon_sym_DOT_DOT] = ACTIONS(355),
    [aux_sym_operator_token7] = ACTIONS(357),
    [anon_sym_AMP] = ACTIONS(355),
    [aux_sym_operator_token8] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [aux_sym_operator_token9] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(355),
    [anon_sym_SLASH] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_div] = ACTIONS(355),
    [anon_sym_mod] = ACTIONS(355),
    [anon_sym_shl] = ACTIONS(355),
    [anon_sym_shr] = ACTIONS(355),
    [aux_sym_operator_token10] = ACTIONS(355),
    [anon_sym_static] = ACTIONS(355),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(355),
    [anon_sym_asm] = ACTIONS(355),
    [anon_sym_bind] = ACTIONS(355),
    [anon_sym_block] = ACTIONS(355),
    [anon_sym_break] = ACTIONS(355),
    [anon_sym_case] = ACTIONS(355),
    [anon_sym_cast] = ACTIONS(355),
    [anon_sym_concept] = ACTIONS(355),
    [anon_sym_const] = ACTIONS(355),
    [anon_sym_continue] = ACTIONS(355),
    [anon_sym_converter] = ACTIONS(355),
    [anon_sym_defer] = ACTIONS(355),
    [anon_sym_distinct] = ACTIONS(355),
    [anon_sym_do] = ACTIONS(355),
    [anon_sym_elif] = ACTIONS(355),
    [anon_sym_else] = ACTIONS(355),
    [anon_sym_end] = ACTIONS(355),
    [anon_sym_enum] = ACTIONS(355),
    [anon_sym_except] = ACTIONS(355),
    [anon_sym_export] = ACTIONS(355),
    [anon_sym_finally] = ACTIONS(355),
    [anon_sym_for] = ACTIONS(355),
    [anon_sym_func] = ACTIONS(355),
    [anon_sym_if] = ACTIONS(355),
    [anon_sym_import] = ACTIONS(355),
    [anon_sym_include] = ACTIONS(355),
    [anon_sym_interface] = ACTIONS(355),
    [anon_sym_iterator] = ACTIONS(355),
    [anon_sym_macro] = ACTIONS(355),
    [anon_sym_method] = ACTIONS(355),
    [anon_sym_mixin] = ACTIONS(355),
    [anon_sym_nil] = ACTIONS(355),
    [anon_sym_object] = ACTIONS(355),
    [anon_sym_out] = ACTIONS(355),
    [anon_sym_proc] = ACTIONS(355),
    [anon_sym_ptr] = ACTIONS(355),
    [anon_sym_raise] = ACTIONS(355),
    [anon_sym_ref] = ACTIONS(355),
    [anon_sym_return] = ACTIONS(355),
    [anon_sym_template] = ACTIONS(355),
    [anon_sym_try] = ACTIONS(355),
    [anon_sym_tuple] = ACTIONS(355),
    [anon_sym_type] = ACTIONS(355),
    [anon_sym_when] = ACTIONS(355),
    [anon_sym_while] = ACTIONS(355),
    [anon_sym_yield] = ACTIONS(355),
    [aux_sym_IDENT_token1] = ACTIONS(355),
    [sym_INT_LIT] = ACTIONS(355),
    [sym_INT8_LIT] = ACTIONS(355),
    [sym_INT16_LIT] = ACTIONS(355),
    [sym_INT32_LIT] = ACTIONS(355),
    [sym_INT64_LIT] = ACTIONS(355),
    [sym_UINT_LIT] = ACTIONS(355),
    [sym_UINT8_LIT] = ACTIONS(355),
    [sym_UINT16_LIT] = ACTIONS(355),
    [sym_UINT32_LIT] = ACTIONS(355),
    [sym_UINT64_LIT] = ACTIONS(355),
    [sym_FLOAT_LIT] = ACTIONS(355),
    [sym_FLOAT32_LIT] = ACTIONS(355),
    [sym_FLOAT64_LIT] = ACTIONS(357),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(355),
    [sym_CHAR_LIT] = ACTIONS(357),
    [sym_STR_LIT] = ACTIONS(355),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(357),
    [sym_RSTR_LIT] = ACTIONS(357),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(355),
    [anon_sym_false] = ACTIONS(355),
  },
  [100] = {
    [sym_normal_comment] = STATE(100),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [101] = {
    [sym_normal_comment] = STATE(101),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [102] = {
    [sym_normal_comment] = STATE(102),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [103] = {
    [sym_normal_comment] = STATE(103),
    [anon_sym_let] = ACTIONS(359),
    [anon_sym_var] = ACTIONS(359),
    [anon_sym_using] = ACTIONS(359),
    [anon_sym_not] = ACTIONS(359),
    [anon_sym_discard] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(361),
    [aux_sym_symbol_token1] = ACTIONS(361),
    [aux_sym_operator_token1] = ACTIONS(359),
    [aux_sym_operator_token2] = ACTIONS(361),
    [aux_sym_operator_token3] = ACTIONS(361),
    [aux_sym_operator_token4] = ACTIONS(359),
    [aux_sym_operator_token5] = ACTIONS(359),
    [anon_sym_or] = ACTIONS(359),
    [anon_sym_xor] = ACTIONS(359),
    [anon_sym_and] = ACTIONS(359),
    [anon_sym_EQ_EQ] = ACTIONS(359),
    [anon_sym_LT_EQ] = ACTIONS(359),
    [anon_sym_LT] = ACTIONS(359),
    [anon_sym_GT_EQ] = ACTIONS(359),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_BANG_EQ] = ACTIONS(359),
    [anon_sym_in] = ACTIONS(359),
    [anon_sym_notin] = ACTIONS(359),
    [anon_sym_is] = ACTIONS(359),
    [anon_sym_isnot] = ACTIONS(359),
    [anon_sym_of] = ACTIONS(359),
    [anon_sym_as] = ACTIONS(359),
    [anon_sym_from] = ACTIONS(359),
    [aux_sym_operator_token6] = ACTIONS(359),
    [anon_sym_DOT_DOT] = ACTIONS(359),
    [aux_sym_operator_token7] = ACTIONS(361),
    [anon_sym_AMP] = ACTIONS(359),
    [aux_sym_operator_token8] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [aux_sym_operator_token9] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(359),
    [anon_sym_SLASH] = ACTIONS(359),
    [anon_sym_PERCENT] = ACTIONS(359),
    [anon_sym_div] = ACTIONS(359),
    [anon_sym_mod] = ACTIONS(359),
    [anon_sym_shl] = ACTIONS(359),
    [anon_sym_shr] = ACTIONS(359),
    [aux_sym_operator_token10] = ACTIONS(359),
    [anon_sym_static] = ACTIONS(359),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(359),
    [anon_sym_asm] = ACTIONS(359),
    [anon_sym_bind] = ACTIONS(359),
    [anon_sym_block] = ACTIONS(359),
    [anon_sym_break] = ACTIONS(359),
    [anon_sym_case] = ACTIONS(359),
    [anon_sym_cast] = ACTIONS(359),
    [anon_sym_concept] = ACTIONS(359),
    [anon_sym_const] = ACTIONS(359),
    [anon_sym_continue] = ACTIONS(359),
    [anon_sym_converter] = ACTIONS(359),
    [anon_sym_defer] = ACTIONS(359),
    [anon_sym_distinct] = ACTIONS(359),
    [anon_sym_do] = ACTIONS(359),
    [anon_sym_elif] = ACTIONS(359),
    [anon_sym_else] = ACTIONS(359),
    [anon_sym_end] = ACTIONS(359),
    [anon_sym_enum] = ACTIONS(359),
    [anon_sym_except] = ACTIONS(359),
    [anon_sym_export] = ACTIONS(359),
    [anon_sym_finally] = ACTIONS(359),
    [anon_sym_for] = ACTIONS(359),
    [anon_sym_func] = ACTIONS(359),
    [anon_sym_if] = ACTIONS(359),
    [anon_sym_import] = ACTIONS(359),
    [anon_sym_include] = ACTIONS(359),
    [anon_sym_interface] = ACTIONS(359),
    [anon_sym_iterator] = ACTIONS(359),
    [anon_sym_macro] = ACTIONS(359),
    [anon_sym_method] = ACTIONS(359),
    [anon_sym_mixin] = ACTIONS(359),
    [anon_sym_nil] = ACTIONS(359),
    [anon_sym_object] = ACTIONS(359),
    [anon_sym_out] = ACTIONS(359),
    [anon_sym_proc] = ACTIONS(359),
    [anon_sym_ptr] = ACTIONS(359),
    [anon_sym_raise] = ACTIONS(359),
    [anon_sym_ref] = ACTIONS(359),
    [anon_sym_return] = ACTIONS(359),
    [anon_sym_template] = ACTIONS(359),
    [anon_sym_try] = ACTIONS(359),
    [anon_sym_tuple] = ACTIONS(359),
    [anon_sym_type] = ACTIONS(359),
    [anon_sym_when] = ACTIONS(359),
    [anon_sym_while] = ACTIONS(359),
    [anon_sym_yield] = ACTIONS(359),
    [aux_sym_IDENT_token1] = ACTIONS(359),
    [sym_INT_LIT] = ACTIONS(359),
    [sym_INT8_LIT] = ACTIONS(359),
    [sym_INT16_LIT] = ACTIONS(359),
    [sym_INT32_LIT] = ACTIONS(359),
    [sym_INT64_LIT] = ACTIONS(359),
    [sym_UINT_LIT] = ACTIONS(359),
    [sym_UINT8_LIT] = ACTIONS(359),
    [sym_UINT16_LIT] = ACTIONS(359),
    [sym_UINT32_LIT] = ACTIONS(359),
    [sym_UINT64_LIT] = ACTIONS(359),
    [sym_FLOAT_LIT] = ACTIONS(359),
    [sym_FLOAT32_LIT] = ACTIONS(359),
    [sym_FLOAT64_LIT] = ACTIONS(361),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(359),
    [sym_CHAR_LIT] = ACTIONS(361),
    [sym_STR_LIT] = ACTIONS(359),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(361),
    [sym_RSTR_LIT] = ACTIONS(361),
    [anon_sym_true] = ACTIONS(359),
    [anon_sym_false] = ACTIONS(359),
  },
  [104] = {
    [sym_normal_comment] = STATE(104),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [105] = {
    [sym_normal_comment] = STATE(105),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [106] = {
    [sym_normal_comment] = STATE(106),
    [anon_sym_let] = ACTIONS(363),
    [anon_sym_var] = ACTIONS(363),
    [anon_sym_using] = ACTIONS(363),
    [anon_sym_not] = ACTIONS(363),
    [anon_sym_discard] = ACTIONS(363),
    [anon_sym_BQUOTE] = ACTIONS(365),
    [aux_sym_symbol_token1] = ACTIONS(365),
    [aux_sym_operator_token1] = ACTIONS(363),
    [aux_sym_operator_token2] = ACTIONS(365),
    [aux_sym_operator_token3] = ACTIONS(365),
    [aux_sym_operator_token4] = ACTIONS(363),
    [aux_sym_operator_token5] = ACTIONS(363),
    [anon_sym_or] = ACTIONS(363),
    [anon_sym_xor] = ACTIONS(363),
    [anon_sym_and] = ACTIONS(363),
    [anon_sym_EQ_EQ] = ACTIONS(363),
    [anon_sym_LT_EQ] = ACTIONS(363),
    [anon_sym_LT] = ACTIONS(363),
    [anon_sym_GT_EQ] = ACTIONS(363),
    [anon_sym_GT] = ACTIONS(363),
    [anon_sym_BANG_EQ] = ACTIONS(363),
    [anon_sym_in] = ACTIONS(363),
    [anon_sym_notin] = ACTIONS(363),
    [anon_sym_is] = ACTIONS(363),
    [anon_sym_isnot] = ACTIONS(363),
    [anon_sym_of] = ACTIONS(363),
    [anon_sym_as] = ACTIONS(363),
    [anon_sym_from] = ACTIONS(363),
    [aux_sym_operator_token6] = ACTIONS(363),
    [anon_sym_DOT_DOT] = ACTIONS(363),
    [aux_sym_operator_token7] = ACTIONS(365),
    [anon_sym_AMP] = ACTIONS(363),
    [aux_sym_operator_token8] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [aux_sym_operator_token9] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(363),
    [anon_sym_SLASH] = ACTIONS(363),
    [anon_sym_PERCENT] = ACTIONS(363),
    [anon_sym_div] = ACTIONS(363),
    [anon_sym_mod] = ACTIONS(363),
    [anon_sym_shl] = ACTIONS(363),
    [anon_sym_shr] = ACTIONS(363),
    [aux_sym_operator_token10] = ACTIONS(363),
    [anon_sym_static] = ACTIONS(363),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(363),
    [anon_sym_asm] = ACTIONS(363),
    [anon_sym_bind] = ACTIONS(363),
    [anon_sym_block] = ACTIONS(363),
    [anon_sym_break] = ACTIONS(363),
    [anon_sym_case] = ACTIONS(363),
    [anon_sym_cast] = ACTIONS(363),
    [anon_sym_concept] = ACTIONS(363),
    [anon_sym_const] = ACTIONS(363),
    [anon_sym_continue] = ACTIONS(363),
    [anon_sym_converter] = ACTIONS(363),
    [anon_sym_defer] = ACTIONS(363),
    [anon_sym_distinct] = ACTIONS(363),
    [anon_sym_do] = ACTIONS(363),
    [anon_sym_elif] = ACTIONS(363),
    [anon_sym_else] = ACTIONS(363),
    [anon_sym_end] = ACTIONS(363),
    [anon_sym_enum] = ACTIONS(363),
    [anon_sym_except] = ACTIONS(363),
    [anon_sym_export] = ACTIONS(363),
    [anon_sym_finally] = ACTIONS(363),
    [anon_sym_for] = ACTIONS(363),
    [anon_sym_func] = ACTIONS(363),
    [anon_sym_if] = ACTIONS(363),
    [anon_sym_import] = ACTIONS(363),
    [anon_sym_include] = ACTIONS(363),
    [anon_sym_interface] = ACTIONS(363),
    [anon_sym_iterator] = ACTIONS(363),
    [anon_sym_macro] = ACTIONS(363),
    [anon_sym_method] = ACTIONS(363),
    [anon_sym_mixin] = ACTIONS(363),
    [anon_sym_nil] = ACTIONS(363),
    [anon_sym_object] = ACTIONS(363),
    [anon_sym_out] = ACTIONS(363),
    [anon_sym_proc] = ACTIONS(363),
    [anon_sym_ptr] = ACTIONS(363),
    [anon_sym_raise] = ACTIONS(363),
    [anon_sym_ref] = ACTIONS(363),
    [anon_sym_return] = ACTIONS(363),
    [anon_sym_template] = ACTIONS(363),
    [anon_sym_try] = ACTIONS(363),
    [anon_sym_tuple] = ACTIONS(363),
    [anon_sym_type] = ACTIONS(363),
    [anon_sym_when] = ACTIONS(363),
    [anon_sym_while] = ACTIONS(363),
    [anon_sym_yield] = ACTIONS(363),
    [aux_sym_IDENT_token1] = ACTIONS(363),
    [sym_INT_LIT] = ACTIONS(363),
    [sym_INT8_LIT] = ACTIONS(363),
    [sym_INT16_LIT] = ACTIONS(363),
    [sym_INT32_LIT] = ACTIONS(363),
    [sym_INT64_LIT] = ACTIONS(363),
    [sym_UINT_LIT] = ACTIONS(363),
    [sym_UINT8_LIT] = ACTIONS(363),
    [sym_UINT16_LIT] = ACTIONS(363),
    [sym_UINT32_LIT] = ACTIONS(363),
    [sym_UINT64_LIT] = ACTIONS(363),
    [sym_FLOAT_LIT] = ACTIONS(363),
    [sym_FLOAT32_LIT] = ACTIONS(363),
    [sym_FLOAT64_LIT] = ACTIONS(365),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(363),
    [sym_CHAR_LIT] = ACTIONS(365),
    [sym_STR_LIT] = ACTIONS(363),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(365),
    [sym_RSTR_LIT] = ACTIONS(365),
    [anon_sym_true] = ACTIONS(363),
    [anon_sym_false] = ACTIONS(363),
  },
  [107] = {
    [sym_normal_comment] = STATE(107),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [108] = {
    [sym_normal_comment] = STATE(108),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [109] = {
    [sym_normal_comment] = STATE(109),
    [anon_sym_let] = ACTIONS(253),
    [anon_sym_var] = ACTIONS(253),
    [anon_sym_using] = ACTIONS(253),
    [anon_sym_not] = ACTIONS(253),
    [anon_sym_discard] = ACTIONS(253),
    [anon_sym_BQUOTE] = ACTIONS(255),
    [aux_sym_symbol_token1] = ACTIONS(255),
    [aux_sym_operator_token1] = ACTIONS(253),
    [aux_sym_operator_token2] = ACTIONS(255),
    [aux_sym_operator_token3] = ACTIONS(255),
    [aux_sym_operator_token4] = ACTIONS(253),
    [aux_sym_operator_token5] = ACTIONS(253),
    [anon_sym_or] = ACTIONS(253),
    [anon_sym_xor] = ACTIONS(253),
    [anon_sym_and] = ACTIONS(253),
    [anon_sym_EQ_EQ] = ACTIONS(253),
    [anon_sym_LT_EQ] = ACTIONS(253),
    [anon_sym_LT] = ACTIONS(253),
    [anon_sym_GT_EQ] = ACTIONS(253),
    [anon_sym_GT] = ACTIONS(253),
    [anon_sym_BANG_EQ] = ACTIONS(253),
    [anon_sym_in] = ACTIONS(253),
    [anon_sym_notin] = ACTIONS(253),
    [anon_sym_is] = ACTIONS(253),
    [anon_sym_isnot] = ACTIONS(253),
    [anon_sym_of] = ACTIONS(253),
    [anon_sym_as] = ACTIONS(253),
    [anon_sym_from] = ACTIONS(253),
    [aux_sym_operator_token6] = ACTIONS(253),
    [anon_sym_DOT_DOT] = ACTIONS(253),
    [aux_sym_operator_token7] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(253),
    [aux_sym_operator_token8] = ACTIONS(253),
    [anon_sym_PLUS] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [aux_sym_operator_token9] = ACTIONS(253),
    [anon_sym_STAR] = ACTIONS(253),
    [anon_sym_SLASH] = ACTIONS(253),
    [anon_sym_PERCENT] = ACTIONS(253),
    [anon_sym_div] = ACTIONS(253),
    [anon_sym_mod] = ACTIONS(253),
    [anon_sym_shl] = ACTIONS(253),
    [anon_sym_shr] = ACTIONS(253),
    [aux_sym_operator_token10] = ACTIONS(253),
    [anon_sym_static] = ACTIONS(253),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(253),
    [anon_sym_asm] = ACTIONS(253),
    [anon_sym_bind] = ACTIONS(253),
    [anon_sym_block] = ACTIONS(253),
    [anon_sym_break] = ACTIONS(253),
    [anon_sym_case] = ACTIONS(253),
    [anon_sym_cast] = ACTIONS(253),
    [anon_sym_concept] = ACTIONS(253),
    [anon_sym_const] = ACTIONS(253),
    [anon_sym_continue] = ACTIONS(253),
    [anon_sym_converter] = ACTIONS(253),
    [anon_sym_defer] = ACTIONS(253),
    [anon_sym_distinct] = ACTIONS(253),
    [anon_sym_do] = ACTIONS(253),
    [anon_sym_elif] = ACTIONS(253),
    [anon_sym_else] = ACTIONS(253),
    [anon_sym_end] = ACTIONS(253),
    [anon_sym_enum] = ACTIONS(253),
    [anon_sym_except] = ACTIONS(253),
    [anon_sym_export] = ACTIONS(253),
    [anon_sym_finally] = ACTIONS(253),
    [anon_sym_for] = ACTIONS(253),
    [anon_sym_func] = ACTIONS(253),
    [anon_sym_if] = ACTIONS(253),
    [anon_sym_import] = ACTIONS(253),
    [anon_sym_include] = ACTIONS(253),
    [anon_sym_interface] = ACTIONS(253),
    [anon_sym_iterator] = ACTIONS(253),
    [anon_sym_macro] = ACTIONS(253),
    [anon_sym_method] = ACTIONS(253),
    [anon_sym_mixin] = ACTIONS(253),
    [anon_sym_nil] = ACTIONS(253),
    [anon_sym_object] = ACTIONS(253),
    [anon_sym_out] = ACTIONS(253),
    [anon_sym_proc] = ACTIONS(253),
    [anon_sym_ptr] = ACTIONS(253),
    [anon_sym_raise] = ACTIONS(253),
    [anon_sym_ref] = ACTIONS(253),
    [anon_sym_return] = ACTIONS(253),
    [anon_sym_template] = ACTIONS(253),
    [anon_sym_try] = ACTIONS(253),
    [anon_sym_tuple] = ACTIONS(253),
    [anon_sym_type] = ACTIONS(253),
    [anon_sym_when] = ACTIONS(253),
    [anon_sym_while] = ACTIONS(253),
    [anon_sym_yield] = ACTIONS(253),
    [aux_sym_IDENT_token1] = ACTIONS(253),
    [sym_INT_LIT] = ACTIONS(253),
    [sym_INT8_LIT] = ACTIONS(253),
    [sym_INT16_LIT] = ACTIONS(253),
    [sym_INT32_LIT] = ACTIONS(253),
    [sym_INT64_LIT] = ACTIONS(253),
    [sym_UINT_LIT] = ACTIONS(253),
    [sym_UINT8_LIT] = ACTIONS(253),
    [sym_UINT16_LIT] = ACTIONS(253),
    [sym_UINT32_LIT] = ACTIONS(253),
    [sym_UINT64_LIT] = ACTIONS(253),
    [sym_FLOAT_LIT] = ACTIONS(253),
    [sym_FLOAT32_LIT] = ACTIONS(253),
    [sym_FLOAT64_LIT] = ACTIONS(255),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(253),
    [sym_CHAR_LIT] = ACTIONS(255),
    [sym_STR_LIT] = ACTIONS(253),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(255),
    [sym_RSTR_LIT] = ACTIONS(255),
    [anon_sym_true] = ACTIONS(253),
    [anon_sym_false] = ACTIONS(253),
  },
  [110] = {
    [sym_normal_comment] = STATE(110),
    [anon_sym_let] = ACTIONS(367),
    [anon_sym_var] = ACTIONS(367),
    [anon_sym_using] = ACTIONS(367),
    [anon_sym_not] = ACTIONS(367),
    [anon_sym_discard] = ACTIONS(367),
    [anon_sym_BQUOTE] = ACTIONS(369),
    [aux_sym_symbol_token1] = ACTIONS(369),
    [aux_sym_operator_token1] = ACTIONS(367),
    [aux_sym_operator_token2] = ACTIONS(369),
    [aux_sym_operator_token3] = ACTIONS(369),
    [aux_sym_operator_token4] = ACTIONS(367),
    [aux_sym_operator_token5] = ACTIONS(367),
    [anon_sym_or] = ACTIONS(367),
    [anon_sym_xor] = ACTIONS(367),
    [anon_sym_and] = ACTIONS(367),
    [anon_sym_EQ_EQ] = ACTIONS(367),
    [anon_sym_LT_EQ] = ACTIONS(367),
    [anon_sym_LT] = ACTIONS(367),
    [anon_sym_GT_EQ] = ACTIONS(367),
    [anon_sym_GT] = ACTIONS(367),
    [anon_sym_BANG_EQ] = ACTIONS(367),
    [anon_sym_in] = ACTIONS(367),
    [anon_sym_notin] = ACTIONS(367),
    [anon_sym_is] = ACTIONS(367),
    [anon_sym_isnot] = ACTIONS(367),
    [anon_sym_of] = ACTIONS(367),
    [anon_sym_as] = ACTIONS(367),
    [anon_sym_from] = ACTIONS(367),
    [aux_sym_operator_token6] = ACTIONS(367),
    [anon_sym_DOT_DOT] = ACTIONS(367),
    [aux_sym_operator_token7] = ACTIONS(369),
    [anon_sym_AMP] = ACTIONS(367),
    [aux_sym_operator_token8] = ACTIONS(367),
    [anon_sym_PLUS] = ACTIONS(367),
    [anon_sym_DASH] = ACTIONS(367),
    [aux_sym_operator_token9] = ACTIONS(367),
    [anon_sym_STAR] = ACTIONS(367),
    [anon_sym_SLASH] = ACTIONS(367),
    [anon_sym_PERCENT] = ACTIONS(367),
    [anon_sym_div] = ACTIONS(367),
    [anon_sym_mod] = ACTIONS(367),
    [anon_sym_shl] = ACTIONS(367),
    [anon_sym_shr] = ACTIONS(367),
    [aux_sym_operator_token10] = ACTIONS(367),
    [anon_sym_static] = ACTIONS(367),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(367),
    [anon_sym_asm] = ACTIONS(367),
    [anon_sym_bind] = ACTIONS(367),
    [anon_sym_block] = ACTIONS(367),
    [anon_sym_break] = ACTIONS(367),
    [anon_sym_case] = ACTIONS(367),
    [anon_sym_cast] = ACTIONS(367),
    [anon_sym_concept] = ACTIONS(367),
    [anon_sym_const] = ACTIONS(367),
    [anon_sym_continue] = ACTIONS(367),
    [anon_sym_converter] = ACTIONS(367),
    [anon_sym_defer] = ACTIONS(367),
    [anon_sym_distinct] = ACTIONS(367),
    [anon_sym_do] = ACTIONS(367),
    [anon_sym_elif] = ACTIONS(367),
    [anon_sym_else] = ACTIONS(367),
    [anon_sym_end] = ACTIONS(367),
    [anon_sym_enum] = ACTIONS(367),
    [anon_sym_except] = ACTIONS(367),
    [anon_sym_export] = ACTIONS(367),
    [anon_sym_finally] = ACTIONS(367),
    [anon_sym_for] = ACTIONS(367),
    [anon_sym_func] = ACTIONS(367),
    [anon_sym_if] = ACTIONS(367),
    [anon_sym_import] = ACTIONS(367),
    [anon_sym_include] = ACTIONS(367),
    [anon_sym_interface] = ACTIONS(367),
    [anon_sym_iterator] = ACTIONS(367),
    [anon_sym_macro] = ACTIONS(367),
    [anon_sym_method] = ACTIONS(367),
    [anon_sym_mixin] = ACTIONS(367),
    [anon_sym_nil] = ACTIONS(367),
    [anon_sym_object] = ACTIONS(367),
    [anon_sym_out] = ACTIONS(367),
    [anon_sym_proc] = ACTIONS(367),
    [anon_sym_ptr] = ACTIONS(367),
    [anon_sym_raise] = ACTIONS(367),
    [anon_sym_ref] = ACTIONS(367),
    [anon_sym_return] = ACTIONS(367),
    [anon_sym_template] = ACTIONS(367),
    [anon_sym_try] = ACTIONS(367),
    [anon_sym_tuple] = ACTIONS(367),
    [anon_sym_type] = ACTIONS(367),
    [anon_sym_when] = ACTIONS(367),
    [anon_sym_while] = ACTIONS(367),
    [anon_sym_yield] = ACTIONS(367),
    [aux_sym_IDENT_token1] = ACTIONS(367),
    [sym_INT_LIT] = ACTIONS(367),
    [sym_INT8_LIT] = ACTIONS(367),
    [sym_INT16_LIT] = ACTIONS(367),
    [sym_INT32_LIT] = ACTIONS(367),
    [sym_INT64_LIT] = ACTIONS(367),
    [sym_UINT_LIT] = ACTIONS(367),
    [sym_UINT8_LIT] = ACTIONS(367),
    [sym_UINT16_LIT] = ACTIONS(367),
    [sym_UINT32_LIT] = ACTIONS(367),
    [sym_UINT64_LIT] = ACTIONS(367),
    [sym_FLOAT_LIT] = ACTIONS(367),
    [sym_FLOAT32_LIT] = ACTIONS(367),
    [sym_FLOAT64_LIT] = ACTIONS(369),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(367),
    [sym_CHAR_LIT] = ACTIONS(369),
    [sym_STR_LIT] = ACTIONS(367),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(369),
    [sym_RSTR_LIT] = ACTIONS(369),
    [anon_sym_true] = ACTIONS(367),
    [anon_sym_false] = ACTIONS(367),
  },
  [111] = {
    [sym_normal_comment] = STATE(111),
    [anon_sym_let] = ACTIONS(371),
    [anon_sym_var] = ACTIONS(371),
    [anon_sym_using] = ACTIONS(371),
    [anon_sym_not] = ACTIONS(371),
    [anon_sym_discard] = ACTIONS(371),
    [anon_sym_BQUOTE] = ACTIONS(373),
    [aux_sym_symbol_token1] = ACTIONS(373),
    [aux_sym_operator_token1] = ACTIONS(371),
    [aux_sym_operator_token2] = ACTIONS(373),
    [aux_sym_operator_token3] = ACTIONS(373),
    [aux_sym_operator_token4] = ACTIONS(371),
    [aux_sym_operator_token5] = ACTIONS(371),
    [anon_sym_or] = ACTIONS(371),
    [anon_sym_xor] = ACTIONS(371),
    [anon_sym_and] = ACTIONS(371),
    [anon_sym_EQ_EQ] = ACTIONS(371),
    [anon_sym_LT_EQ] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT_EQ] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_BANG_EQ] = ACTIONS(371),
    [anon_sym_in] = ACTIONS(371),
    [anon_sym_notin] = ACTIONS(371),
    [anon_sym_is] = ACTIONS(371),
    [anon_sym_isnot] = ACTIONS(371),
    [anon_sym_of] = ACTIONS(371),
    [anon_sym_as] = ACTIONS(371),
    [anon_sym_from] = ACTIONS(371),
    [aux_sym_operator_token6] = ACTIONS(371),
    [anon_sym_DOT_DOT] = ACTIONS(371),
    [aux_sym_operator_token7] = ACTIONS(373),
    [anon_sym_AMP] = ACTIONS(371),
    [aux_sym_operator_token8] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [aux_sym_operator_token9] = ACTIONS(371),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_div] = ACTIONS(371),
    [anon_sym_mod] = ACTIONS(371),
    [anon_sym_shl] = ACTIONS(371),
    [anon_sym_shr] = ACTIONS(371),
    [aux_sym_operator_token10] = ACTIONS(371),
    [anon_sym_static] = ACTIONS(371),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(371),
    [anon_sym_asm] = ACTIONS(371),
    [anon_sym_bind] = ACTIONS(371),
    [anon_sym_block] = ACTIONS(371),
    [anon_sym_break] = ACTIONS(371),
    [anon_sym_case] = ACTIONS(371),
    [anon_sym_cast] = ACTIONS(371),
    [anon_sym_concept] = ACTIONS(371),
    [anon_sym_const] = ACTIONS(371),
    [anon_sym_continue] = ACTIONS(371),
    [anon_sym_converter] = ACTIONS(371),
    [anon_sym_defer] = ACTIONS(371),
    [anon_sym_distinct] = ACTIONS(371),
    [anon_sym_do] = ACTIONS(371),
    [anon_sym_elif] = ACTIONS(371),
    [anon_sym_else] = ACTIONS(371),
    [anon_sym_end] = ACTIONS(371),
    [anon_sym_enum] = ACTIONS(371),
    [anon_sym_except] = ACTIONS(371),
    [anon_sym_export] = ACTIONS(371),
    [anon_sym_finally] = ACTIONS(371),
    [anon_sym_for] = ACTIONS(371),
    [anon_sym_func] = ACTIONS(371),
    [anon_sym_if] = ACTIONS(371),
    [anon_sym_import] = ACTIONS(371),
    [anon_sym_include] = ACTIONS(371),
    [anon_sym_interface] = ACTIONS(371),
    [anon_sym_iterator] = ACTIONS(371),
    [anon_sym_macro] = ACTIONS(371),
    [anon_sym_method] = ACTIONS(371),
    [anon_sym_mixin] = ACTIONS(371),
    [anon_sym_nil] = ACTIONS(371),
    [anon_sym_object] = ACTIONS(371),
    [anon_sym_out] = ACTIONS(371),
    [anon_sym_proc] = ACTIONS(371),
    [anon_sym_ptr] = ACTIONS(371),
    [anon_sym_raise] = ACTIONS(371),
    [anon_sym_ref] = ACTIONS(371),
    [anon_sym_return] = ACTIONS(371),
    [anon_sym_template] = ACTIONS(371),
    [anon_sym_try] = ACTIONS(371),
    [anon_sym_tuple] = ACTIONS(371),
    [anon_sym_type] = ACTIONS(371),
    [anon_sym_when] = ACTIONS(371),
    [anon_sym_while] = ACTIONS(371),
    [anon_sym_yield] = ACTIONS(371),
    [aux_sym_IDENT_token1] = ACTIONS(371),
    [sym_INT_LIT] = ACTIONS(371),
    [sym_INT8_LIT] = ACTIONS(371),
    [sym_INT16_LIT] = ACTIONS(371),
    [sym_INT32_LIT] = ACTIONS(371),
    [sym_INT64_LIT] = ACTIONS(371),
    [sym_UINT_LIT] = ACTIONS(371),
    [sym_UINT8_LIT] = ACTIONS(371),
    [sym_UINT16_LIT] = ACTIONS(371),
    [sym_UINT32_LIT] = ACTIONS(371),
    [sym_UINT64_LIT] = ACTIONS(371),
    [sym_FLOAT_LIT] = ACTIONS(371),
    [sym_FLOAT32_LIT] = ACTIONS(371),
    [sym_FLOAT64_LIT] = ACTIONS(373),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(371),
    [sym_CHAR_LIT] = ACTIONS(373),
    [sym_STR_LIT] = ACTIONS(371),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(373),
    [sym_RSTR_LIT] = ACTIONS(373),
    [anon_sym_true] = ACTIONS(371),
    [anon_sym_false] = ACTIONS(371),
  },
  [112] = {
    [sym_normal_comment] = STATE(112),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [113] = {
    [sym_normal_comment] = STATE(113),
    [anon_sym_let] = ACTIONS(375),
    [anon_sym_var] = ACTIONS(375),
    [anon_sym_using] = ACTIONS(375),
    [anon_sym_not] = ACTIONS(375),
    [anon_sym_discard] = ACTIONS(375),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [aux_sym_symbol_token1] = ACTIONS(377),
    [aux_sym_operator_token1] = ACTIONS(375),
    [aux_sym_operator_token2] = ACTIONS(377),
    [aux_sym_operator_token3] = ACTIONS(377),
    [aux_sym_operator_token4] = ACTIONS(375),
    [aux_sym_operator_token5] = ACTIONS(375),
    [anon_sym_or] = ACTIONS(375),
    [anon_sym_xor] = ACTIONS(375),
    [anon_sym_and] = ACTIONS(375),
    [anon_sym_EQ_EQ] = ACTIONS(375),
    [anon_sym_LT_EQ] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT_EQ] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_BANG_EQ] = ACTIONS(375),
    [anon_sym_in] = ACTIONS(375),
    [anon_sym_notin] = ACTIONS(375),
    [anon_sym_is] = ACTIONS(375),
    [anon_sym_isnot] = ACTIONS(375),
    [anon_sym_of] = ACTIONS(375),
    [anon_sym_as] = ACTIONS(375),
    [anon_sym_from] = ACTIONS(375),
    [aux_sym_operator_token6] = ACTIONS(375),
    [anon_sym_DOT_DOT] = ACTIONS(375),
    [aux_sym_operator_token7] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(375),
    [aux_sym_operator_token8] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [aux_sym_operator_token9] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_div] = ACTIONS(375),
    [anon_sym_mod] = ACTIONS(375),
    [anon_sym_shl] = ACTIONS(375),
    [anon_sym_shr] = ACTIONS(375),
    [aux_sym_operator_token10] = ACTIONS(375),
    [anon_sym_static] = ACTIONS(375),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(375),
    [anon_sym_asm] = ACTIONS(375),
    [anon_sym_bind] = ACTIONS(375),
    [anon_sym_block] = ACTIONS(375),
    [anon_sym_break] = ACTIONS(375),
    [anon_sym_case] = ACTIONS(375),
    [anon_sym_cast] = ACTIONS(375),
    [anon_sym_concept] = ACTIONS(375),
    [anon_sym_const] = ACTIONS(375),
    [anon_sym_continue] = ACTIONS(375),
    [anon_sym_converter] = ACTIONS(375),
    [anon_sym_defer] = ACTIONS(375),
    [anon_sym_distinct] = ACTIONS(375),
    [anon_sym_do] = ACTIONS(375),
    [anon_sym_elif] = ACTIONS(375),
    [anon_sym_else] = ACTIONS(375),
    [anon_sym_end] = ACTIONS(375),
    [anon_sym_enum] = ACTIONS(375),
    [anon_sym_except] = ACTIONS(375),
    [anon_sym_export] = ACTIONS(375),
    [anon_sym_finally] = ACTIONS(375),
    [anon_sym_for] = ACTIONS(375),
    [anon_sym_func] = ACTIONS(375),
    [anon_sym_if] = ACTIONS(375),
    [anon_sym_import] = ACTIONS(375),
    [anon_sym_include] = ACTIONS(375),
    [anon_sym_interface] = ACTIONS(375),
    [anon_sym_iterator] = ACTIONS(375),
    [anon_sym_macro] = ACTIONS(375),
    [anon_sym_method] = ACTIONS(375),
    [anon_sym_mixin] = ACTIONS(375),
    [anon_sym_nil] = ACTIONS(375),
    [anon_sym_object] = ACTIONS(375),
    [anon_sym_out] = ACTIONS(375),
    [anon_sym_proc] = ACTIONS(375),
    [anon_sym_ptr] = ACTIONS(375),
    [anon_sym_raise] = ACTIONS(375),
    [anon_sym_ref] = ACTIONS(375),
    [anon_sym_return] = ACTIONS(375),
    [anon_sym_template] = ACTIONS(375),
    [anon_sym_try] = ACTIONS(375),
    [anon_sym_tuple] = ACTIONS(375),
    [anon_sym_type] = ACTIONS(375),
    [anon_sym_when] = ACTIONS(375),
    [anon_sym_while] = ACTIONS(375),
    [anon_sym_yield] = ACTIONS(375),
    [aux_sym_IDENT_token1] = ACTIONS(375),
    [sym_INT_LIT] = ACTIONS(375),
    [sym_INT8_LIT] = ACTIONS(375),
    [sym_INT16_LIT] = ACTIONS(375),
    [sym_INT32_LIT] = ACTIONS(375),
    [sym_INT64_LIT] = ACTIONS(375),
    [sym_UINT_LIT] = ACTIONS(375),
    [sym_UINT8_LIT] = ACTIONS(375),
    [sym_UINT16_LIT] = ACTIONS(375),
    [sym_UINT32_LIT] = ACTIONS(375),
    [sym_UINT64_LIT] = ACTIONS(375),
    [sym_FLOAT_LIT] = ACTIONS(375),
    [sym_FLOAT32_LIT] = ACTIONS(375),
    [sym_FLOAT64_LIT] = ACTIONS(377),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(375),
    [sym_CHAR_LIT] = ACTIONS(377),
    [sym_STR_LIT] = ACTIONS(375),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(377),
    [sym_RSTR_LIT] = ACTIONS(377),
    [anon_sym_true] = ACTIONS(375),
    [anon_sym_false] = ACTIONS(375),
  },
  [114] = {
    [sym_normal_comment] = STATE(114),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [115] = {
    [sym_normal_comment] = STATE(115),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [116] = {
    [sym_normal_comment] = STATE(116),
    [anon_sym_let] = ACTIONS(249),
    [anon_sym_var] = ACTIONS(249),
    [anon_sym_using] = ACTIONS(249),
    [anon_sym_not] = ACTIONS(249),
    [anon_sym_discard] = ACTIONS(249),
    [anon_sym_BQUOTE] = ACTIONS(251),
    [aux_sym_operator_token1] = ACTIONS(249),
    [aux_sym_operator_token2] = ACTIONS(251),
    [aux_sym_operator_token3] = ACTIONS(251),
    [aux_sym_operator_token4] = ACTIONS(249),
    [aux_sym_operator_token5] = ACTIONS(249),
    [anon_sym_or] = ACTIONS(249),
    [anon_sym_xor] = ACTIONS(249),
    [anon_sym_and] = ACTIONS(249),
    [anon_sym_EQ_EQ] = ACTIONS(249),
    [anon_sym_LT_EQ] = ACTIONS(249),
    [anon_sym_LT] = ACTIONS(249),
    [anon_sym_GT_EQ] = ACTIONS(249),
    [anon_sym_GT] = ACTIONS(249),
    [anon_sym_BANG_EQ] = ACTIONS(249),
    [anon_sym_in] = ACTIONS(249),
    [anon_sym_notin] = ACTIONS(249),
    [anon_sym_is] = ACTIONS(249),
    [anon_sym_isnot] = ACTIONS(249),
    [anon_sym_of] = ACTIONS(249),
    [anon_sym_as] = ACTIONS(249),
    [anon_sym_from] = ACTIONS(249),
    [aux_sym_operator_token6] = ACTIONS(249),
    [anon_sym_DOT_DOT] = ACTIONS(249),
    [aux_sym_operator_token7] = ACTIONS(251),
    [anon_sym_AMP] = ACTIONS(249),
    [aux_sym_operator_token8] = ACTIONS(249),
    [anon_sym_PLUS] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(249),
    [aux_sym_operator_token9] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(249),
    [anon_sym_SLASH] = ACTIONS(249),
    [anon_sym_PERCENT] = ACTIONS(249),
    [anon_sym_div] = ACTIONS(249),
    [anon_sym_mod] = ACTIONS(249),
    [anon_sym_shl] = ACTIONS(249),
    [anon_sym_shr] = ACTIONS(249),
    [aux_sym_operator_token10] = ACTIONS(249),
    [anon_sym_static] = ACTIONS(249),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(249),
    [anon_sym_asm] = ACTIONS(249),
    [anon_sym_bind] = ACTIONS(249),
    [anon_sym_block] = ACTIONS(249),
    [anon_sym_break] = ACTIONS(249),
    [anon_sym_case] = ACTIONS(249),
    [anon_sym_cast] = ACTIONS(249),
    [anon_sym_concept] = ACTIONS(249),
    [anon_sym_const] = ACTIONS(249),
    [anon_sym_continue] = ACTIONS(249),
    [anon_sym_converter] = ACTIONS(249),
    [anon_sym_defer] = ACTIONS(249),
    [anon_sym_distinct] = ACTIONS(249),
    [anon_sym_do] = ACTIONS(249),
    [anon_sym_elif] = ACTIONS(249),
    [anon_sym_else] = ACTIONS(249),
    [anon_sym_end] = ACTIONS(249),
    [anon_sym_enum] = ACTIONS(249),
    [anon_sym_except] = ACTIONS(249),
    [anon_sym_export] = ACTIONS(249),
    [anon_sym_finally] = ACTIONS(249),
    [anon_sym_for] = ACTIONS(249),
    [anon_sym_func] = ACTIONS(249),
    [anon_sym_if] = ACTIONS(249),
    [anon_sym_import] = ACTIONS(249),
    [anon_sym_include] = ACTIONS(249),
    [anon_sym_interface] = ACTIONS(249),
    [anon_sym_iterator] = ACTIONS(249),
    [anon_sym_macro] = ACTIONS(249),
    [anon_sym_method] = ACTIONS(249),
    [anon_sym_mixin] = ACTIONS(249),
    [anon_sym_nil] = ACTIONS(249),
    [anon_sym_object] = ACTIONS(249),
    [anon_sym_out] = ACTIONS(249),
    [anon_sym_proc] = ACTIONS(249),
    [anon_sym_ptr] = ACTIONS(249),
    [anon_sym_raise] = ACTIONS(249),
    [anon_sym_ref] = ACTIONS(249),
    [anon_sym_return] = ACTIONS(249),
    [anon_sym_template] = ACTIONS(249),
    [anon_sym_try] = ACTIONS(249),
    [anon_sym_tuple] = ACTIONS(249),
    [anon_sym_type] = ACTIONS(249),
    [anon_sym_when] = ACTIONS(249),
    [anon_sym_while] = ACTIONS(249),
    [anon_sym_yield] = ACTIONS(249),
    [aux_sym_IDENT_token1] = ACTIONS(249),
    [sym_INT_LIT] = ACTIONS(249),
    [sym_INT8_LIT] = ACTIONS(249),
    [sym_INT16_LIT] = ACTIONS(249),
    [sym_INT32_LIT] = ACTIONS(249),
    [sym_INT64_LIT] = ACTIONS(249),
    [sym_UINT_LIT] = ACTIONS(249),
    [sym_UINT8_LIT] = ACTIONS(249),
    [sym_UINT16_LIT] = ACTIONS(249),
    [sym_UINT32_LIT] = ACTIONS(249),
    [sym_UINT64_LIT] = ACTIONS(249),
    [sym_FLOAT_LIT] = ACTIONS(249),
    [sym_FLOAT32_LIT] = ACTIONS(249),
    [sym_FLOAT64_LIT] = ACTIONS(251),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(249),
    [sym_CHAR_LIT] = ACTIONS(251),
    [sym_STR_LIT] = ACTIONS(249),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(251),
    [sym_RSTR_LIT] = ACTIONS(251),
    [sym_GENERALIZED_STR_LIT] = ACTIONS(249),
    [anon_sym_true] = ACTIONS(249),
    [anon_sym_false] = ACTIONS(249),
  },
  [117] = {
    [sym_normal_comment] = STATE(117),
    [anon_sym_let] = ACTIONS(247),
    [anon_sym_var] = ACTIONS(247),
    [anon_sym_using] = ACTIONS(247),
    [anon_sym_not] = ACTIONS(247),
    [anon_sym_discard] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [aux_sym_symbol_token1] = ACTIONS(245),
    [aux_sym_operator_token1] = ACTIONS(247),
    [aux_sym_operator_token2] = ACTIONS(245),
    [aux_sym_operator_token3] = ACTIONS(245),
    [aux_sym_operator_token4] = ACTIONS(247),
    [aux_sym_operator_token5] = ACTIONS(247),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_xor] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_in] = ACTIONS(247),
    [anon_sym_notin] = ACTIONS(247),
    [anon_sym_is] = ACTIONS(247),
    [anon_sym_isnot] = ACTIONS(247),
    [anon_sym_of] = ACTIONS(247),
    [anon_sym_as] = ACTIONS(247),
    [anon_sym_from] = ACTIONS(247),
    [aux_sym_operator_token6] = ACTIONS(247),
    [anon_sym_DOT_DOT] = ACTIONS(247),
    [aux_sym_operator_token7] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [aux_sym_operator_token8] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [aux_sym_operator_token9] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_div] = ACTIONS(247),
    [anon_sym_mod] = ACTIONS(247),
    [anon_sym_shl] = ACTIONS(247),
    [anon_sym_shr] = ACTIONS(247),
    [aux_sym_operator_token10] = ACTIONS(247),
    [anon_sym_static] = ACTIONS(247),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(247),
    [anon_sym_asm] = ACTIONS(247),
    [anon_sym_bind] = ACTIONS(247),
    [anon_sym_block] = ACTIONS(247),
    [anon_sym_break] = ACTIONS(247),
    [anon_sym_case] = ACTIONS(247),
    [anon_sym_cast] = ACTIONS(247),
    [anon_sym_concept] = ACTIONS(247),
    [anon_sym_const] = ACTIONS(247),
    [anon_sym_continue] = ACTIONS(247),
    [anon_sym_converter] = ACTIONS(247),
    [anon_sym_defer] = ACTIONS(247),
    [anon_sym_distinct] = ACTIONS(247),
    [anon_sym_do] = ACTIONS(247),
    [anon_sym_elif] = ACTIONS(247),
    [anon_sym_else] = ACTIONS(247),
    [anon_sym_end] = ACTIONS(247),
    [anon_sym_enum] = ACTIONS(247),
    [anon_sym_except] = ACTIONS(247),
    [anon_sym_export] = ACTIONS(247),
    [anon_sym_finally] = ACTIONS(247),
    [anon_sym_for] = ACTIONS(247),
    [anon_sym_func] = ACTIONS(247),
    [anon_sym_if] = ACTIONS(247),
    [anon_sym_import] = ACTIONS(247),
    [anon_sym_include] = ACTIONS(247),
    [anon_sym_interface] = ACTIONS(247),
    [anon_sym_iterator] = ACTIONS(247),
    [anon_sym_macro] = ACTIONS(247),
    [anon_sym_method] = ACTIONS(247),
    [anon_sym_mixin] = ACTIONS(247),
    [anon_sym_nil] = ACTIONS(247),
    [anon_sym_object] = ACTIONS(247),
    [anon_sym_out] = ACTIONS(247),
    [anon_sym_proc] = ACTIONS(247),
    [anon_sym_ptr] = ACTIONS(247),
    [anon_sym_raise] = ACTIONS(247),
    [anon_sym_ref] = ACTIONS(247),
    [anon_sym_return] = ACTIONS(247),
    [anon_sym_template] = ACTIONS(247),
    [anon_sym_try] = ACTIONS(247),
    [anon_sym_tuple] = ACTIONS(247),
    [anon_sym_type] = ACTIONS(247),
    [anon_sym_when] = ACTIONS(247),
    [anon_sym_while] = ACTIONS(247),
    [anon_sym_yield] = ACTIONS(247),
    [aux_sym_IDENT_token1] = ACTIONS(247),
    [sym_INT_LIT] = ACTIONS(247),
    [sym_INT8_LIT] = ACTIONS(247),
    [sym_INT16_LIT] = ACTIONS(247),
    [sym_INT32_LIT] = ACTIONS(247),
    [sym_INT64_LIT] = ACTIONS(247),
    [sym_UINT_LIT] = ACTIONS(247),
    [sym_UINT8_LIT] = ACTIONS(247),
    [sym_UINT16_LIT] = ACTIONS(247),
    [sym_UINT32_LIT] = ACTIONS(247),
    [sym_UINT64_LIT] = ACTIONS(247),
    [sym_FLOAT_LIT] = ACTIONS(247),
    [sym_FLOAT32_LIT] = ACTIONS(247),
    [sym_FLOAT64_LIT] = ACTIONS(245),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(247),
    [sym_CHAR_LIT] = ACTIONS(245),
    [sym_STR_LIT] = ACTIONS(247),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(245),
    [sym_RSTR_LIT] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(247),
  },
  [118] = {
    [sym_normal_comment] = STATE(118),
    [anon_sym_let] = ACTIONS(247),
    [anon_sym_var] = ACTIONS(247),
    [anon_sym_using] = ACTIONS(247),
    [anon_sym_not] = ACTIONS(247),
    [anon_sym_discard] = ACTIONS(247),
    [anon_sym_BQUOTE] = ACTIONS(245),
    [aux_sym_symbol_token1] = ACTIONS(245),
    [aux_sym_operator_token1] = ACTIONS(247),
    [aux_sym_operator_token2] = ACTIONS(245),
    [aux_sym_operator_token3] = ACTIONS(245),
    [aux_sym_operator_token4] = ACTIONS(247),
    [aux_sym_operator_token5] = ACTIONS(247),
    [anon_sym_or] = ACTIONS(247),
    [anon_sym_xor] = ACTIONS(247),
    [anon_sym_and] = ACTIONS(247),
    [anon_sym_EQ_EQ] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(247),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(247),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_BANG_EQ] = ACTIONS(247),
    [anon_sym_in] = ACTIONS(247),
    [anon_sym_notin] = ACTIONS(247),
    [anon_sym_is] = ACTIONS(247),
    [anon_sym_isnot] = ACTIONS(247),
    [anon_sym_of] = ACTIONS(247),
    [anon_sym_as] = ACTIONS(247),
    [anon_sym_from] = ACTIONS(247),
    [aux_sym_operator_token6] = ACTIONS(247),
    [anon_sym_DOT_DOT] = ACTIONS(247),
    [aux_sym_operator_token7] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [aux_sym_operator_token8] = ACTIONS(247),
    [anon_sym_PLUS] = ACTIONS(247),
    [anon_sym_DASH] = ACTIONS(247),
    [aux_sym_operator_token9] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(247),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(247),
    [anon_sym_div] = ACTIONS(247),
    [anon_sym_mod] = ACTIONS(247),
    [anon_sym_shl] = ACTIONS(247),
    [anon_sym_shr] = ACTIONS(247),
    [aux_sym_operator_token10] = ACTIONS(247),
    [anon_sym_static] = ACTIONS(247),
    [aux_sym_normal_comment_token1] = ACTIONS(3),
    [anon_sym_addr] = ACTIONS(247),
    [anon_sym_asm] = ACTIONS(247),
    [anon_sym_bind] = ACTIONS(247),
    [anon_sym_block] = ACTIONS(247),
    [anon_sym_break] = ACTIONS(247),
    [anon_sym_case] = ACTIONS(247),
    [anon_sym_cast] = ACTIONS(247),
    [anon_sym_concept] = ACTIONS(247),
    [anon_sym_const] = ACTIONS(247),
    [anon_sym_continue] = ACTIONS(247),
    [anon_sym_converter] = ACTIONS(247),
    [anon_sym_defer] = ACTIONS(247),
    [anon_sym_distinct] = ACTIONS(247),
    [anon_sym_do] = ACTIONS(247),
    [anon_sym_elif] = ACTIONS(247),
    [anon_sym_else] = ACTIONS(247),
    [anon_sym_end] = ACTIONS(247),
    [anon_sym_enum] = ACTIONS(247),
    [anon_sym_except] = ACTIONS(247),
    [anon_sym_export] = ACTIONS(247),
    [anon_sym_finally] = ACTIONS(247),
    [anon_sym_for] = ACTIONS(247),
    [anon_sym_func] = ACTIONS(247),
    [anon_sym_if] = ACTIONS(247),
    [anon_sym_import] = ACTIONS(247),
    [anon_sym_include] = ACTIONS(247),
    [anon_sym_interface] = ACTIONS(247),
    [anon_sym_iterator] = ACTIONS(247),
    [anon_sym_macro] = ACTIONS(247),
    [anon_sym_method] = ACTIONS(247),
    [anon_sym_mixin] = ACTIONS(247),
    [anon_sym_nil] = ACTIONS(247),
    [anon_sym_object] = ACTIONS(247),
    [anon_sym_out] = ACTIONS(247),
    [anon_sym_proc] = ACTIONS(247),
    [anon_sym_ptr] = ACTIONS(247),
    [anon_sym_raise] = ACTIONS(247),
    [anon_sym_ref] = ACTIONS(247),
    [anon_sym_return] = ACTIONS(247),
    [anon_sym_template] = ACTIONS(247),
    [anon_sym_try] = ACTIONS(247),
    [anon_sym_tuple] = ACTIONS(247),
    [anon_sym_type] = ACTIONS(247),
    [anon_sym_when] = ACTIONS(247),
    [anon_sym_while] = ACTIONS(247),
    [anon_sym_yield] = ACTIONS(247),
    [aux_sym_IDENT_token1] = ACTIONS(247),
    [sym_INT_LIT] = ACTIONS(247),
    [sym_INT8_LIT] = ACTIONS(247),
    [sym_INT16_LIT] = ACTIONS(247),
    [sym_INT32_LIT] = ACTIONS(247),
    [sym_INT64_LIT] = ACTIONS(247),
    [sym_UINT_LIT] = ACTIONS(247),
    [sym_UINT8_LIT] = ACTIONS(247),
    [sym_UINT16_LIT] = ACTIONS(247),
    [sym_UINT32_LIT] = ACTIONS(247),
    [sym_UINT64_LIT] = ACTIONS(247),
    [sym_FLOAT_LIT] = ACTIONS(247),
    [sym_FLOAT32_LIT] = ACTIONS(247),
    [sym_FLOAT64_LIT] = ACTIONS(245),
    [sym_CUSTOM_NUMERIC_LIT] = ACTIONS(247),
    [sym_CHAR_LIT] = ACTIONS(245),
    [sym_STR_LIT] = ACTIONS(247),
    [aux_sym_TRIPLESTR_LIT_token1] = ACTIONS(245),
    [sym_RSTR_LIT] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(247),
    [anon_sym_false] = ACTIONS(247),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(386), 1,
      aux_sym_operator_token1,
    ACTIONS(389), 1,
      aux_sym_operator_token2,
    ACTIONS(392), 1,
      aux_sym_operator_token3,
    ACTIONS(401), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_DOT_DOT,
    ACTIONS(410), 1,
      aux_sym_operator_token7,
    STATE(26), 1,
      sym_operatorB,
    ACTIONS(381), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(395), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(398), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(413), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    STATE(119), 2,
      sym_normal_comment,
      aux_sym__simpleExpr_repeat1,
    ACTIONS(379), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_COMMENT_token1,
    ACTIONS(416), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(419), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(422), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(404), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(383), 9,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [86] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(425), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(120), 1,
      sym_normal_comment,
    ACTIONS(369), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(367), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [143] = 20,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(429), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    STATE(26), 1,
      sym_operatorB,
    STATE(121), 1,
      sym_normal_comment,
    STATE(122), 1,
      aux_sym__simpleExpr_repeat1,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(427), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_COMMENT_token1,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 9,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [230] = 20,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    ACTIONS(461), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym_operatorB,
    STATE(119), 1,
      aux_sym__simpleExpr_repeat1,
    STATE(122), 1,
      sym_normal_comment,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(459), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_COMMENT_token1,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 9,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [317] = 20,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    STATE(26), 1,
      sym_operatorB,
    STATE(119), 1,
      aux_sym__simpleExpr_repeat1,
    STATE(123), 1,
      sym_normal_comment,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(459), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(461), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 8,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [404] = 20,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    STATE(26), 1,
      sym_operatorB,
    STATE(123), 1,
      aux_sym__simpleExpr_repeat1,
    STATE(124), 1,
      sym_normal_comment,
    ACTIONS(427), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(429), 3,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 8,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [491] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(125), 1,
      sym_normal_comment,
    ACTIONS(463), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(465), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [545] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(126), 1,
      sym_normal_comment,
    ACTIONS(467), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(469), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [599] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(127), 1,
      sym_normal_comment,
    ACTIONS(361), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(359), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [653] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(128), 1,
      sym_normal_comment,
    ACTIONS(377), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(375), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [707] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(129), 1,
      sym_normal_comment,
    ACTIONS(245), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(247), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [761] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(130), 1,
      sym_normal_comment,
    ACTIONS(471), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(473), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [815] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(131), 1,
      sym_normal_comment,
    ACTIONS(475), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(477), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [869] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(132), 1,
      sym_normal_comment,
    ACTIONS(479), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(481), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [923] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(133), 1,
      sym_normal_comment,
    ACTIONS(379), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(381), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [977] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(134), 1,
      sym_normal_comment,
    ACTIONS(483), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(485), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1031] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(135), 1,
      sym_normal_comment,
    ACTIONS(373), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(371), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1085] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(136), 1,
      sym_normal_comment,
    ACTIONS(365), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(363), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1139] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(137), 1,
      sym_normal_comment,
    ACTIONS(245), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(247), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1193] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(138), 1,
      sym_normal_comment,
    ACTIONS(487), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(489), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1247] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(139), 1,
      sym_normal_comment,
    ACTIONS(491), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(493), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1301] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(140), 1,
      sym_normal_comment,
    ACTIONS(495), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(497), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1355] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(141), 1,
      sym_normal_comment,
    ACTIONS(499), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(501), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1409] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(142), 1,
      sym_normal_comment,
    ACTIONS(503), 19,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
      aux_sym_COMMENT_token1,
    ACTIONS(505), 24,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1463] = 20,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(427), 1,
      sym__DEDENT,
    ACTIONS(429), 1,
      anon_sym_not,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    STATE(23), 1,
      sym_operatorB,
    STATE(143), 1,
      sym_normal_comment,
    STATE(146), 1,
      aux_sym__simpleExpr_repeat1,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 8,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [1547] = 19,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(427), 1,
      sym__DEDENT,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    STATE(23), 1,
      sym_operatorB,
    STATE(144), 1,
      sym_normal_comment,
    STATE(145), 1,
      aux_sym__simpleExpr_repeat1,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 9,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [1629] = 19,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    ACTIONS(459), 1,
      sym__DEDENT,
    STATE(23), 1,
      sym_operatorB,
    STATE(145), 1,
      sym_normal_comment,
    STATE(147), 1,
      aux_sym__simpleExpr_repeat1,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 9,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [1711] = 20,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(433), 1,
      aux_sym_operator_token1,
    ACTIONS(435), 1,
      aux_sym_operator_token2,
    ACTIONS(437), 1,
      aux_sym_operator_token3,
    ACTIONS(443), 1,
      anon_sym_and,
    ACTIONS(447), 1,
      anon_sym_DOT_DOT,
    ACTIONS(449), 1,
      aux_sym_operator_token7,
    ACTIONS(459), 1,
      sym__DEDENT,
    ACTIONS(461), 1,
      anon_sym_not,
    STATE(23), 1,
      sym_operatorB,
    STATE(146), 1,
      sym_normal_comment,
    STATE(147), 1,
      aux_sym__simpleExpr_repeat1,
    ACTIONS(439), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(441), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(451), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    ACTIONS(453), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(455), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(457), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(445), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(431), 8,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [1795] = 18,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(379), 1,
      sym__DEDENT,
    ACTIONS(386), 1,
      aux_sym_operator_token1,
    ACTIONS(389), 1,
      aux_sym_operator_token2,
    ACTIONS(392), 1,
      aux_sym_operator_token3,
    ACTIONS(401), 1,
      anon_sym_and,
    ACTIONS(407), 1,
      anon_sym_DOT_DOT,
    ACTIONS(410), 1,
      aux_sym_operator_token7,
    STATE(23), 1,
      sym_operatorB,
    ACTIONS(395), 2,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
    ACTIONS(398), 2,
      anon_sym_or,
      anon_sym_xor,
    ACTIONS(413), 2,
      anon_sym_AMP,
      aux_sym_operator_token8,
    STATE(147), 2,
      sym_normal_comment,
      aux_sym__simpleExpr_repeat1,
    ACTIONS(416), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
    ACTIONS(419), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
    ACTIONS(422), 4,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(404), 6,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
    ACTIONS(383), 9,
      anon_sym_not,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
  [1875] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(507), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(148), 1,
      sym_normal_comment,
    ACTIONS(369), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(367), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1928] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(149), 1,
      sym_normal_comment,
    ACTIONS(503), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(505), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [1978] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(150), 1,
      sym_normal_comment,
    ACTIONS(467), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(469), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2028] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(151), 1,
      sym_normal_comment,
    ACTIONS(365), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(363), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2078] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(152), 1,
      sym_normal_comment,
    ACTIONS(245), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(247), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2128] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(153), 1,
      sym_normal_comment,
    ACTIONS(491), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(493), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2178] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(154), 1,
      sym_normal_comment,
    ACTIONS(377), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(375), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2228] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(155), 1,
      sym_normal_comment,
    ACTIONS(245), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(247), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2278] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(156), 1,
      sym_normal_comment,
    ACTIONS(463), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(465), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2328] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(157), 1,
      sym_normal_comment,
    ACTIONS(483), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(485), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2378] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(158), 1,
      sym_normal_comment,
    ACTIONS(487), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(489), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2428] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(159), 1,
      sym_normal_comment,
    ACTIONS(499), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(501), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2478] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(160), 1,
      sym_normal_comment,
    ACTIONS(379), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(381), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2528] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(161), 1,
      sym_normal_comment,
    ACTIONS(475), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(477), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2578] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(162), 1,
      sym_normal_comment,
    ACTIONS(479), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(481), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2628] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(163), 1,
      sym_normal_comment,
    ACTIONS(471), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(473), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2678] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(164), 1,
      sym_normal_comment,
    ACTIONS(495), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(497), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2728] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(165), 1,
      sym_normal_comment,
    ACTIONS(361), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(359), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2778] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(166), 1,
      sym_normal_comment,
    ACTIONS(373), 17,
      sym__DEDENT,
      aux_sym_operator_token2,
      aux_sym_operator_token3,
      anon_sym_or,
      anon_sym_xor,
      anon_sym_and,
      anon_sym_in,
      anon_sym_notin,
      anon_sym_isnot,
      anon_sym_of,
      anon_sym_as,
      anon_sym_from,
      aux_sym_operator_token7,
      anon_sym_div,
      anon_sym_mod,
      anon_sym_shl,
      anon_sym_shr,
    ACTIONS(371), 22,
      anon_sym_not,
      aux_sym_operator_token1,
      aux_sym_operator_token4,
      aux_sym_operator_token5,
      anon_sym_EQ_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_BANG_EQ,
      anon_sym_is,
      aux_sym_operator_token6,
      anon_sym_DOT_DOT,
      anon_sym_AMP,
      aux_sym_operator_token8,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_operator_token9,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      aux_sym_operator_token10,
  [2828] = 10,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(7), 1,
      anon_sym_discard,
    ACTIONS(509), 1,
      ts_builtin_sym_end,
    STATE(167), 1,
      sym_normal_comment,
    STATE(168), 1,
      aux_sym_module_repeat1,
    STATE(195), 1,
      sym_discardStmt,
    STATE(234), 1,
      sym_simpleStmt,
    STATE(238), 1,
      sym_stmt,
    STATE(240), 1,
      sym_complexOrSimpleStmt,
    ACTIONS(5), 3,
      anon_sym_let,
      anon_sym_var,
      anon_sym_using,
  [2861] = 9,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(516), 1,
      anon_sym_discard,
    STATE(195), 1,
      sym_discardStmt,
    STATE(234), 1,
      sym_simpleStmt,
    STATE(238), 1,
      sym_stmt,
    STATE(240), 1,
      sym_complexOrSimpleStmt,
    STATE(168), 2,
      sym_normal_comment,
      aux_sym_module_repeat1,
    ACTIONS(513), 3,
      anon_sym_let,
      anon_sym_var,
      anon_sym_using,
  [2892] = 8,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(7), 1,
      anon_sym_discard,
    STATE(169), 1,
      sym_normal_comment,
    STATE(195), 1,
      sym_discardStmt,
    STATE(234), 1,
      sym_simpleStmt,
    STATE(240), 1,
      sym_complexOrSimpleStmt,
    STATE(244), 1,
      sym_stmt,
    ACTIONS(5), 3,
      anon_sym_let,
      anon_sym_var,
      anon_sym_using,
  [2919] = 8,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(519), 1,
      aux_sym_COMMENT_token1,
    ACTIONS(522), 1,
      aux_sym_IDENT_token1,
    ACTIONS(525), 1,
      sym__DEDENT,
    STATE(173), 1,
      sym_IDENT,
    STATE(187), 1,
      sym_identColonEquals,
    STATE(170), 2,
      sym_normal_comment,
      aux_sym_complexOrSimpleStmt_repeat1,
    STATE(253), 2,
      sym_variable,
      sym_COMMENT,
  [2946] = 9,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(527), 1,
      aux_sym_COMMENT_token1,
    ACTIONS(529), 1,
      aux_sym_IDENT_token1,
    ACTIONS(531), 1,
      sym__DEDENT,
    STATE(170), 1,
      aux_sym_complexOrSimpleStmt_repeat1,
    STATE(171), 1,
      sym_normal_comment,
    STATE(173), 1,
      sym_IDENT,
    STATE(187), 1,
      sym_identColonEquals,
    STATE(253), 2,
      sym_variable,
      sym_COMMENT,
  [2975] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(527), 1,
      aux_sym_COMMENT_token1,
    STATE(172), 1,
      sym_normal_comment,
    STATE(190), 1,
      sym_COMMENT,
    ACTIONS(533), 5,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      aux_sym_IDENT_token1,
  [2995] = 8,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_COLON,
    ACTIONS(541), 1,
      anon_sym_EQ,
    STATE(173), 1,
      sym_normal_comment,
    STATE(176), 1,
      aux_sym_identColonEquals_repeat1,
    STATE(181), 1,
      sym_comma,
    ACTIONS(535), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3021] = 8,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(527), 1,
      aux_sym_COMMENT_token1,
    ACTIONS(529), 1,
      aux_sym_IDENT_token1,
    STATE(171), 1,
      aux_sym_complexOrSimpleStmt_repeat1,
    STATE(173), 1,
      sym_IDENT,
    STATE(174), 1,
      sym_normal_comment,
    STATE(187), 1,
      sym_identColonEquals,
    STATE(253), 2,
      sym_variable,
      sym_COMMENT,
  [3047] = 9,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(529), 1,
      aux_sym_IDENT_token1,
    ACTIONS(543), 1,
      aux_sym_COMMENT_token1,
    ACTIONS(545), 1,
      sym__INDENT,
    STATE(173), 1,
      sym_IDENT,
    STATE(175), 1,
      sym_normal_comment,
    STATE(187), 1,
      sym_identColonEquals,
    STATE(197), 1,
      sym_COMMENT,
    STATE(245), 1,
      sym_variable,
  [3075] = 8,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_EQ,
    STATE(176), 1,
      sym_normal_comment,
    STATE(177), 1,
      aux_sym_identColonEquals_repeat1,
    STATE(183), 1,
      sym_comma,
    ACTIONS(547), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3101] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      sym_comma,
    STATE(177), 2,
      sym_normal_comment,
      aux_sym_identColonEquals_repeat1,
    ACTIONS(553), 4,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [3121] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(560), 1,
      anon_sym_not,
    STATE(178), 2,
      sym_normal_comment,
      aux_sym_typeDesc_repeat1,
    ACTIONS(558), 4,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [3138] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(565), 1,
      aux_sym_COMMENT_token1,
    STATE(179), 1,
      sym_normal_comment,
    STATE(198), 1,
      sym_COMMENT,
    ACTIONS(563), 4,
      anon_sym_let,
      anon_sym_var,
      anon_sym_using,
      anon_sym_discard,
  [3157] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(180), 1,
      sym_normal_comment,
    ACTIONS(567), 6,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
      aux_sym_COMMENT_token1,
  [3172] = 7,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(529), 1,
      aux_sym_IDENT_token1,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(551), 1,
      anon_sym_EQ,
    STATE(181), 1,
      sym_normal_comment,
    STATE(189), 1,
      sym_IDENT,
    ACTIONS(547), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3195] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(571), 1,
      anon_sym_not,
    STATE(178), 1,
      aux_sym_typeDesc_repeat1,
    STATE(182), 1,
      sym_normal_comment,
    ACTIONS(569), 4,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [3214] = 7,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(529), 1,
      aux_sym_IDENT_token1,
    ACTIONS(575), 1,
      anon_sym_COLON,
    ACTIONS(577), 1,
      anon_sym_EQ,
    STATE(183), 1,
      sym_normal_comment,
    STATE(189), 1,
      sym_IDENT,
    ACTIONS(573), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3237] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(571), 1,
      anon_sym_not,
    STATE(182), 1,
      aux_sym_typeDesc_repeat1,
    STATE(184), 1,
      sym_normal_comment,
    ACTIONS(579), 4,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [3256] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(185), 1,
      sym_normal_comment,
    ACTIONS(369), 5,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [3270] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(186), 1,
      sym_normal_comment,
    ACTIONS(558), 5,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_not,
  [3284] = 6,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(583), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_colcom,
    STATE(187), 1,
      sym_normal_comment,
    STATE(233), 1,
      sym_colonBody,
    ACTIONS(581), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3304] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(188), 1,
      sym_normal_comment,
    ACTIONS(511), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_var,
      anon_sym_using,
      anon_sym_discard,
  [3318] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(189), 1,
      sym_normal_comment,
    ACTIONS(553), 5,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_EQ,
  [3332] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(190), 1,
      sym_normal_comment,
    ACTIONS(585), 5,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      aux_sym_IDENT_token1,
  [3346] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(191), 1,
      sym_normal_comment,
    ACTIONS(349), 5,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
      aux_sym_IDENT_token1,
  [3360] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(589), 1,
      anon_sym_EQ,
    STATE(192), 1,
      sym_normal_comment,
    ACTIONS(587), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3375] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(193), 1,
      sym_normal_comment,
    ACTIONS(349), 4,
      anon_sym_let,
      anon_sym_var,
      anon_sym_using,
      anon_sym_discard,
  [3388] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(593), 1,
      anon_sym_EQ,
    STATE(194), 1,
      sym_normal_comment,
    ACTIONS(591), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3403] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(527), 1,
      aux_sym_COMMENT_token1,
    STATE(195), 1,
      sym_normal_comment,
    STATE(241), 1,
      sym_COMMENT,
    ACTIONS(595), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3420] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(577), 1,
      anon_sym_EQ,
    STATE(196), 1,
      sym_normal_comment,
    ACTIONS(573), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3435] = 6,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(529), 1,
      aux_sym_IDENT_token1,
    STATE(173), 1,
      sym_IDENT,
    STATE(187), 1,
      sym_identColonEquals,
    STATE(197), 1,
      sym_normal_comment,
    STATE(237), 1,
      sym_variable,
  [3454] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(198), 1,
      sym_normal_comment,
    ACTIONS(597), 4,
      anon_sym_let,
      anon_sym_var,
      anon_sym_using,
      anon_sym_discard,
  [3467] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(601), 1,
      anon_sym_EQ,
    STATE(199), 1,
      sym_normal_comment,
    ACTIONS(599), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3482] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(605), 1,
      anon_sym_EQ,
    STATE(200), 1,
      sym_normal_comment,
    ACTIONS(603), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3497] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(609), 1,
      anon_sym_EQ,
    STATE(201), 1,
      sym_normal_comment,
    ACTIONS(607), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3512] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(202), 1,
      sym_normal_comment,
    ACTIONS(611), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_COMMENT_token1,
  [3524] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(203), 1,
      sym_normal_comment,
    ACTIONS(525), 3,
      sym__DEDENT,
      aux_sym_COMMENT_token1,
      aux_sym_IDENT_token1,
  [3536] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(617), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(204), 1,
      sym_normal_comment,
    STATE(211), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3552] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(619), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(205), 1,
      sym_normal_comment,
    STATE(225), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3568] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(206), 1,
      sym_normal_comment,
    ACTIONS(621), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3580] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(207), 1,
      sym_normal_comment,
    ACTIONS(623), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_COMMENT_token1,
  [3592] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(208), 1,
      sym_normal_comment,
    ACTIONS(607), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3604] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(625), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(209), 1,
      sym_normal_comment,
    STATE(219), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3620] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(627), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(205), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
    STATE(210), 1,
      sym_normal_comment,
  [3636] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(629), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(211), 1,
      sym_normal_comment,
    STATE(225), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3652] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(212), 1,
      sym_normal_comment,
    ACTIONS(603), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3664] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(213), 1,
      sym_normal_comment,
    ACTIONS(631), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3676] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(633), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(214), 1,
      sym_normal_comment,
    STATE(225), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3692] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(533), 1,
      aux_sym_IDENT_token1,
    ACTIONS(543), 1,
      aux_sym_COMMENT_token1,
    STATE(215), 1,
      sym_normal_comment,
    STATE(272), 1,
      sym_COMMENT,
  [3708] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(216), 1,
      sym_normal_comment,
    ACTIONS(599), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3720] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(635), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(217), 1,
      sym_normal_comment,
    STATE(223), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3736] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(218), 1,
      sym_normal_comment,
    ACTIONS(637), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3748] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(639), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(219), 1,
      sym_normal_comment,
    STATE(225), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3764] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(220), 1,
      sym_normal_comment,
    ACTIONS(641), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3776] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(221), 1,
      sym_normal_comment,
    ACTIONS(573), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3788] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(222), 1,
      sym_normal_comment,
    ACTIONS(643), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_COMMENT_token1,
  [3800] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(645), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(223), 1,
      sym_normal_comment,
    STATE(225), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3816] = 5,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(615), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(647), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(214), 1,
      aux_sym_TRIPLESTR_LIT_repeat1,
    STATE(224), 1,
      sym_normal_comment,
  [3832] = 4,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(649), 1,
      aux_sym_TRIPLESTR_LIT_token2,
    ACTIONS(652), 1,
      aux_sym_TRIPLESTR_LIT_token3,
    STATE(225), 2,
      sym_normal_comment,
      aux_sym_TRIPLESTR_LIT_repeat1,
  [3846] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(558), 1,
      sym__DEDENT,
    ACTIONS(654), 1,
      anon_sym_not,
    STATE(226), 2,
      sym_normal_comment,
      aux_sym_typeDesc_repeat1,
  [3860] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(227), 1,
      sym_normal_comment,
    ACTIONS(591), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3872] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(569), 1,
      sym__DEDENT,
    ACTIONS(657), 1,
      anon_sym_not,
    STATE(226), 1,
      aux_sym_typeDesc_repeat1,
    STATE(228), 1,
      sym_normal_comment,
  [3888] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(229), 1,
      sym_normal_comment,
    ACTIONS(659), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3900] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(230), 1,
      sym_normal_comment,
    ACTIONS(587), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      anon_sym_COLON,
  [3912] = 5,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(579), 1,
      sym__DEDENT,
    ACTIONS(657), 1,
      anon_sym_not,
    STATE(228), 1,
      aux_sym_typeDesc_repeat1,
    STATE(231), 1,
      sym_normal_comment,
  [3928] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(232), 1,
      sym_normal_comment,
    ACTIONS(661), 3,
      sym__NEWLINE,
      anon_sym_SEMI,
      aux_sym_COMMENT_token1,
  [3940] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(233), 1,
      sym_normal_comment,
    ACTIONS(663), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3951] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(234), 1,
      sym_normal_comment,
    ACTIONS(665), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3962] = 4,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(529), 1,
      aux_sym_IDENT_token1,
    STATE(189), 1,
      sym_IDENT,
    STATE(235), 1,
      sym_normal_comment,
  [3975] = 3,
    ACTIONS(613), 1,
      aux_sym_normal_comment_token1,
    STATE(236), 1,
      sym_normal_comment,
    ACTIONS(667), 2,
      aux_sym_TRIPLESTR_LIT_token2,
      aux_sym_TRIPLESTR_LIT_token3,
  [3986] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(237), 1,
      sym_normal_comment,
    ACTIONS(669), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [3997] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(238), 1,
      sym_normal_comment,
    ACTIONS(671), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [4008] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(239), 1,
      sym_normal_comment,
    ACTIONS(567), 2,
      sym__DEDENT,
      anon_sym_not,
  [4019] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(240), 1,
      sym_normal_comment,
    ACTIONS(673), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [4030] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(241), 1,
      sym_normal_comment,
    ACTIONS(675), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [4041] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(242), 1,
      sym_normal_comment,
    ACTIONS(558), 2,
      sym__DEDENT,
      anon_sym_not,
  [4052] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(243), 1,
      sym_normal_comment,
    ACTIONS(677), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [4063] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(244), 1,
      sym_normal_comment,
    ACTIONS(679), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [4074] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    STATE(245), 1,
      sym_normal_comment,
    ACTIONS(681), 2,
      sym__NEWLINE,
      anon_sym_SEMI,
  [4085] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(683), 1,
      sym__DEDENT,
    STATE(246), 1,
      sym_normal_comment,
  [4095] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(685), 1,
      sym__DEDENT,
    STATE(247), 1,
      sym_normal_comment,
  [4105] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(687), 1,
      sym__DEDENT,
    STATE(248), 1,
      sym_normal_comment,
  [4115] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(689), 1,
      sym__DEDENT,
    STATE(249), 1,
      sym_normal_comment,
  [4125] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(349), 1,
      aux_sym_IDENT_token1,
    STATE(250), 1,
      sym_normal_comment,
  [4135] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(691), 1,
      sym__DEDENT,
    STATE(251), 1,
      sym_normal_comment,
  [4145] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(693), 1,
      sym__NEWLINE,
    STATE(252), 1,
      sym_normal_comment,
  [4155] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(695), 1,
      sym__NEWLINE,
    STATE(253), 1,
      sym_normal_comment,
  [4165] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(697), 1,
      sym__DEDENT,
    STATE(254), 1,
      sym_normal_comment,
  [4175] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(699), 1,
      sym__DEDENT,
    STATE(255), 1,
      sym_normal_comment,
  [4185] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(701), 1,
      sym__DEDENT,
    STATE(256), 1,
      sym_normal_comment,
  [4195] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(703), 1,
      sym__NEWLINE,
    STATE(257), 1,
      sym_normal_comment,
  [4205] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(705), 1,
      sym__DEDENT,
    STATE(258), 1,
      sym_normal_comment,
  [4215] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(707), 1,
      sym__DEDENT,
    STATE(259), 1,
      sym_normal_comment,
  [4225] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(709), 1,
      sym__NEWLINE,
    STATE(260), 1,
      sym_normal_comment,
  [4235] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(711), 1,
      sym__DEDENT,
    STATE(261), 1,
      sym_normal_comment,
  [4245] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(713), 1,
      sym__DEDENT,
    STATE(262), 1,
      sym_normal_comment,
  [4255] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(715), 1,
      sym__DEDENT,
    STATE(263), 1,
      sym_normal_comment,
  [4265] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(717), 1,
      sym__DEDENT,
    STATE(264), 1,
      sym_normal_comment,
  [4275] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(719), 1,
      sym__DEDENT,
    STATE(265), 1,
      sym_normal_comment,
  [4285] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(721), 1,
      sym__DEDENT,
    STATE(266), 1,
      sym_normal_comment,
  [4295] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(723), 1,
      sym__DEDENT,
    STATE(267), 1,
      sym_normal_comment,
  [4305] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(725), 1,
      sym__NEWLINE,
    STATE(268), 1,
      sym_normal_comment,
  [4315] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(727), 1,
      sym__DEDENT,
    STATE(269), 1,
      sym_normal_comment,
  [4325] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(729), 1,
      sym__DEDENT,
    STATE(270), 1,
      sym_normal_comment,
  [4335] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(731), 1,
      sym__NEWLINE,
    STATE(271), 1,
      sym_normal_comment,
  [4345] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(585), 1,
      aux_sym_IDENT_token1,
    STATE(272), 1,
      sym_normal_comment,
  [4355] = 3,
    ACTIONS(3), 1,
      aux_sym_normal_comment_token1,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    STATE(273), 1,
      sym_normal_comment,
  [4365] = 1,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(119)] = 0,
  [SMALL_STATE(120)] = 86,
  [SMALL_STATE(121)] = 143,
  [SMALL_STATE(122)] = 230,
  [SMALL_STATE(123)] = 317,
  [SMALL_STATE(124)] = 404,
  [SMALL_STATE(125)] = 491,
  [SMALL_STATE(126)] = 545,
  [SMALL_STATE(127)] = 599,
  [SMALL_STATE(128)] = 653,
  [SMALL_STATE(129)] = 707,
  [SMALL_STATE(130)] = 761,
  [SMALL_STATE(131)] = 815,
  [SMALL_STATE(132)] = 869,
  [SMALL_STATE(133)] = 923,
  [SMALL_STATE(134)] = 977,
  [SMALL_STATE(135)] = 1031,
  [SMALL_STATE(136)] = 1085,
  [SMALL_STATE(137)] = 1139,
  [SMALL_STATE(138)] = 1193,
  [SMALL_STATE(139)] = 1247,
  [SMALL_STATE(140)] = 1301,
  [SMALL_STATE(141)] = 1355,
  [SMALL_STATE(142)] = 1409,
  [SMALL_STATE(143)] = 1463,
  [SMALL_STATE(144)] = 1547,
  [SMALL_STATE(145)] = 1629,
  [SMALL_STATE(146)] = 1711,
  [SMALL_STATE(147)] = 1795,
  [SMALL_STATE(148)] = 1875,
  [SMALL_STATE(149)] = 1928,
  [SMALL_STATE(150)] = 1978,
  [SMALL_STATE(151)] = 2028,
  [SMALL_STATE(152)] = 2078,
  [SMALL_STATE(153)] = 2128,
  [SMALL_STATE(154)] = 2178,
  [SMALL_STATE(155)] = 2228,
  [SMALL_STATE(156)] = 2278,
  [SMALL_STATE(157)] = 2328,
  [SMALL_STATE(158)] = 2378,
  [SMALL_STATE(159)] = 2428,
  [SMALL_STATE(160)] = 2478,
  [SMALL_STATE(161)] = 2528,
  [SMALL_STATE(162)] = 2578,
  [SMALL_STATE(163)] = 2628,
  [SMALL_STATE(164)] = 2678,
  [SMALL_STATE(165)] = 2728,
  [SMALL_STATE(166)] = 2778,
  [SMALL_STATE(167)] = 2828,
  [SMALL_STATE(168)] = 2861,
  [SMALL_STATE(169)] = 2892,
  [SMALL_STATE(170)] = 2919,
  [SMALL_STATE(171)] = 2946,
  [SMALL_STATE(172)] = 2975,
  [SMALL_STATE(173)] = 2995,
  [SMALL_STATE(174)] = 3021,
  [SMALL_STATE(175)] = 3047,
  [SMALL_STATE(176)] = 3075,
  [SMALL_STATE(177)] = 3101,
  [SMALL_STATE(178)] = 3121,
  [SMALL_STATE(179)] = 3138,
  [SMALL_STATE(180)] = 3157,
  [SMALL_STATE(181)] = 3172,
  [SMALL_STATE(182)] = 3195,
  [SMALL_STATE(183)] = 3214,
  [SMALL_STATE(184)] = 3237,
  [SMALL_STATE(185)] = 3256,
  [SMALL_STATE(186)] = 3270,
  [SMALL_STATE(187)] = 3284,
  [SMALL_STATE(188)] = 3304,
  [SMALL_STATE(189)] = 3318,
  [SMALL_STATE(190)] = 3332,
  [SMALL_STATE(191)] = 3346,
  [SMALL_STATE(192)] = 3360,
  [SMALL_STATE(193)] = 3375,
  [SMALL_STATE(194)] = 3388,
  [SMALL_STATE(195)] = 3403,
  [SMALL_STATE(196)] = 3420,
  [SMALL_STATE(197)] = 3435,
  [SMALL_STATE(198)] = 3454,
  [SMALL_STATE(199)] = 3467,
  [SMALL_STATE(200)] = 3482,
  [SMALL_STATE(201)] = 3497,
  [SMALL_STATE(202)] = 3512,
  [SMALL_STATE(203)] = 3524,
  [SMALL_STATE(204)] = 3536,
  [SMALL_STATE(205)] = 3552,
  [SMALL_STATE(206)] = 3568,
  [SMALL_STATE(207)] = 3580,
  [SMALL_STATE(208)] = 3592,
  [SMALL_STATE(209)] = 3604,
  [SMALL_STATE(210)] = 3620,
  [SMALL_STATE(211)] = 3636,
  [SMALL_STATE(212)] = 3652,
  [SMALL_STATE(213)] = 3664,
  [SMALL_STATE(214)] = 3676,
  [SMALL_STATE(215)] = 3692,
  [SMALL_STATE(216)] = 3708,
  [SMALL_STATE(217)] = 3720,
  [SMALL_STATE(218)] = 3736,
  [SMALL_STATE(219)] = 3748,
  [SMALL_STATE(220)] = 3764,
  [SMALL_STATE(221)] = 3776,
  [SMALL_STATE(222)] = 3788,
  [SMALL_STATE(223)] = 3800,
  [SMALL_STATE(224)] = 3816,
  [SMALL_STATE(225)] = 3832,
  [SMALL_STATE(226)] = 3846,
  [SMALL_STATE(227)] = 3860,
  [SMALL_STATE(228)] = 3872,
  [SMALL_STATE(229)] = 3888,
  [SMALL_STATE(230)] = 3900,
  [SMALL_STATE(231)] = 3912,
  [SMALL_STATE(232)] = 3928,
  [SMALL_STATE(233)] = 3940,
  [SMALL_STATE(234)] = 3951,
  [SMALL_STATE(235)] = 3962,
  [SMALL_STATE(236)] = 3975,
  [SMALL_STATE(237)] = 3986,
  [SMALL_STATE(238)] = 3997,
  [SMALL_STATE(239)] = 4008,
  [SMALL_STATE(240)] = 4019,
  [SMALL_STATE(241)] = 4030,
  [SMALL_STATE(242)] = 4041,
  [SMALL_STATE(243)] = 4052,
  [SMALL_STATE(244)] = 4063,
  [SMALL_STATE(245)] = 4074,
  [SMALL_STATE(246)] = 4085,
  [SMALL_STATE(247)] = 4095,
  [SMALL_STATE(248)] = 4105,
  [SMALL_STATE(249)] = 4115,
  [SMALL_STATE(250)] = 4125,
  [SMALL_STATE(251)] = 4135,
  [SMALL_STATE(252)] = 4145,
  [SMALL_STATE(253)] = 4155,
  [SMALL_STATE(254)] = 4165,
  [SMALL_STATE(255)] = 4175,
  [SMALL_STATE(256)] = 4185,
  [SMALL_STATE(257)] = 4195,
  [SMALL_STATE(258)] = 4205,
  [SMALL_STATE(259)] = 4215,
  [SMALL_STATE(260)] = 4225,
  [SMALL_STATE(261)] = 4235,
  [SMALL_STATE(262)] = 4245,
  [SMALL_STATE(263)] = 4255,
  [SMALL_STATE(264)] = 4265,
  [SMALL_STATE(265)] = 4275,
  [SMALL_STATE(266)] = 4285,
  [SMALL_STATE(267)] = 4295,
  [SMALL_STATE(268)] = 4305,
  [SMALL_STATE(269)] = 4315,
  [SMALL_STATE(270)] = 4325,
  [SMALL_STATE(271)] = 4335,
  [SMALL_STATE(272)] = 4345,
  [SMALL_STATE(273)] = 4355,
  [SMALL_STATE(274)] = 4365,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discardStmt, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(118),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(109),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(86),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(84),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(84),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(87),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(88),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(89),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(90),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(91),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(92),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(92),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(93),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(94),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(95),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(96),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(117),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(110),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(113),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(113),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(224),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 2), SHIFT_REPEAT(111),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_KEYW, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_KEYW, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operatorB, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operatorB, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(104),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_primary_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(102),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(102),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(101),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(100),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(115),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(114),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(108),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(108),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(116),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(107),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(98),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 2), SHIFT_REPEAT(112),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(91),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(86),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(84),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(84),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(87),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(88),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(85),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(105),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(92),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(92),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(93),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(94),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(95),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat2, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat2, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_COMMENT, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_COMMENT, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_primary_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_primary_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRIPLESTR_LIT, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIPLESTR_LIT, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TRIPLESTR_LIT, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIPLESTR_LIT, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_IDENT, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_IDENT, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BOOL_LIT, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BOOL_LIT, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(70),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(75),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(75),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(64),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(72),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(67),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(69),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(70),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(71),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(71),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(65),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(66),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(68),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 2), SHIFT_REPEAT(68),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simpleExpr, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simpleExpr, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simpleExpr, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simpleExpr, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 5),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identOrLiteral, 1),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identOrLiteral, 1),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generalizedLit, 1),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generalizedLit, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 4),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 4),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_GENERALIZED_TRIPLESTR_LIT, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__simpleExpr_repeat1, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__simpleExpr_repeat1, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(175),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complexOrSimpleStmt_repeat1, 2), SHIFT_REPEAT(268),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complexOrSimpleStmt_repeat1, 2), SHIFT_REPEAT(185),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complexOrSimpleStmt_repeat1, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identColonEquals_repeat1, 2),
  [555] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identColonEquals_repeat1, 2), SHIFT_REPEAT(215),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_typeDesc_repeat1, 2),
  [560] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeDesc_repeat1, 2), SHIFT_REPEAT(31),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colcom, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDesc, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typeDesc, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 5),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleStmt, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colcom, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 6),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 7),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 8),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discardStmt, 3),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 9),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discardStmt, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 12),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 10),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 11),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discardStmt, 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [649] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_TRIPLESTR_LIT_repeat1, 2), SHIFT_REPEAT(236),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_TRIPLESTR_LIT_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_typeDesc_repeat1, 2), SHIFT_REPEAT(30),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identColonEquals, 13),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discardStmt, 5),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complexOrSimpleStmt, 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_TRIPLESTR_LIT_repeat1, 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complexOrSimpleStmt, 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simpleStmt, 2),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complexOrSimpleStmt, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_colonBody, 2),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complexOrSimpleStmt, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [733] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_normal_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_nim_external_scanner_create(void);
void tree_sitter_nim_external_scanner_destroy(void *);
bool tree_sitter_nim_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_nim_external_scanner_serialize(void *, char *);
void tree_sitter_nim_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_nim_external_scanner_create,
      tree_sitter_nim_external_scanner_destroy,
      tree_sitter_nim_external_scanner_scan,
      tree_sitter_nim_external_scanner_serialize,
      tree_sitter_nim_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
