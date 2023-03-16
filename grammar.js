const Trailing = {
  Allowed: 'Allowed',
  Required: 'Required',
  Forbidden: 'Forbidden',
};

const PREC = {}

const TOKEN_PREC = {
  regex_string_prefix: 1, // > generalized_string_prefix

  comment: -4,
  multi_comment: -3,
  doc_comment: -2,
  multi_doc_comment: -1,

}

const DYNAMIC_PREC = {}

module.exports = grammar({
  name: 'nim',

  extras: $ => [
    $.comment,
    $.doc_comment,
    $.multi_comment,
    $.multi_doc_comment,
    /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $._samedent,
    $._dedent,
    $._multi_string_content,
    $._interpolation_start,
    $._multi_string_end,
  ],

  word: $ => $.identifier,

  rules: {

    // ========================================================================
    // central rules

    module: $ => repeat(
      $.stmt,
    ),

    stmt: $ => choice(
      $._simple_stmts,
      // $._complex_stmt,
      // parentheses($.stmt),
    ),

    _simple_stmts: $ => seq(
      sep_repeat1($._simple_stmt, ';'),
      $._newline,
    ),

    _simple_stmt: $ => choice(
      // $.return_stmt,
      // $.raise_stmt,
      // $.yield_stmt,
      // $.discard_stmt,
      // $.break_stmt,
      // $.continue_stmt,
      // $.pragma_stmt,
      // $.import_stmt,
      // $.importExcept_stmt,
      // $.export_stmt,
      // $.from_stmt,
      // $.include_stmt,
      $.expr_stmt,
      $.assign_stmt,
    ), 

    // ========================================================================
    // statements

    expr_stmt: $ => seq(
      $._simple_expr,
    ),

    assign_stmt: $ => seq(
      $._simple_expr,
      '=',
      $.expr
    ),

    // ========================================================================
    // expressions

    expr: $ => choice(
      // $._complex_expr,
      $._simple_expr,
    ),

    // _complex_expr: $ => choice(
    //   $.block_expr,
    //   $.if_expr,
    //   $.when_expr,
    //   $.case_expr,
    //   $.for_expr,
    //   $.try_expr,
    //   parentheses($._complex_expr),
    // ),

    // TODO: use structure from c grammar for expr and for operators?
    _simple_expr: $ => choice(
      prec.left(seq(
        sep_repeat1(
          $.primary,
          $.operator,
          Trailing.Forbidden,
        ),
      )),
      parentheses($._simple_expr),
    ),

    primary: $ => choice(
      prec.left(choice(
        seq(
          choice(
            $._symbol_lit_constr,
          ),
        ),
      )),
      parentheses($.primary),
    ),

    _symbol_lit_constr: $ => choice(
      $.literal,
      $.symbol,
      $.constructor,
    ),

    // ========================================================================
    // operators

    _op0: $ => choice(
      /[\-~=]>/,
      /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.:\\]*[\-~=]>/,
    ),

    _op1: $ => choice(
      /[+\-*/@$&%|^:\\][=+\-*/<>@$~&%|!?^.:\\]*=/,
    ),

    // TODO: If a unary operator's first character is @ it is a sigil-like operator which binds stronger than a primarySuffix: @x.abc is parsed as (@x).abc whereas $x.abc is parsed as $(x.abc).
    _op2: $ => choice('@',
      /[@:?][=+\-*\/<>@$~&%|!?^.\\]/, //no :: or :
      /[@:?][=+\-*\/<>@$~&%|!?^.:\\][=+\-*\/<>@$~&%|!?^.:\\]+/,
    ),

    _op3: $ => alias(choice('or', 'xor'), $.keyw),

    _op4: $ => alias(choice('and'), $.keyw),

    // token(prec( because 'of' and 'from' can be used in other contexts
    _op5: $ => choice(
      alias(choice('in', 'notin', 'is', 'isnot', 'not', 'of', 'as', 'from'), $.keyw),
      '==', '<=', '<', '>=', '>', '!=',
      /[=<>!][=+\-*\/<>@$~&%|!?^.:\\]+/, //no =
    ),

    _op6: $ => choice('..', $._dotlikeOp),

    _dotlikeOp: $ => token(seq(
      '.',
      choice(
        /[=+\-*\/<>@$~&%|!?^:\\]/, // no ..
        /[=+\-*\/<>@$~&%|!?^.:\\][=+\-*\/<>@$~&%|!?^.:\\]+/,
      ),
    )),

    _op7: $ => choice(
      '&',
      /&[=+\-*\/<>@$~&%|!?^.:\\]+/,
    ),

    _op8: $ => choice(
      '+', '-', '|', '~',
      /[+\-~|][=+\-*\/<>@$~&%|!?^.:\\]+/,
    ),

    _op9: $ => choice(
      alias(choice('div', 'mod', 'shl', 'shr'), $.keyw),
      '*', '/', '%', 
      /[*%/\\][=+\-*\/<>@$~&%|!?^.:\\]+/,
    ),

    _op10: $ => choice(
      /[\$\^][=+\-*\/<>@$~&%|!?^.:\\]*/
    ),

    operator: $ => choice(
      $._op0,
      $._op1,
      $._op2,
      $._op3,
      $._op4,
      $._op5,
      $._op6,
      $._op7,
      $._op8,
      $._op9,
      $._op10
    ),

    // ========================================================================
    // identifier

    symbol: $ => choice(
      $.ticked_identifier,
      $.identifier,
    ),

    ticked_identifier: $ => seq(
      field('open', '`'),
      token.immediate(/[^`]*/),
      field('close', token.immediate('`')),
    ),

    identifier: $ => identifier(),

    // ========================================================================
    // constructors

    constructor: $ => choice(
      $.array_constr,
      $.object_constr,
      $.tuple_constr,
      $.set_constr,
      $.table_constr,
    ),

    array_constr: $ => seq(
      field('open', '['),
      sep_repeat(
        seq(
          optional(seq(
            $.expr,
            ':',
          )),
          $.expr,
        ),
        ',',
      ),
      field('close', ']'),
    ),

    object_constr: $ => seq(
      $.symbol,
      field('open', token.immediate('(')),
      sep_repeat(
        $._mandatory_symbol_colon_expr,
        ',',
        Trailing.Allowed,
      ),
      field('close', ')'),
    ),

    tuple_constr: $ => seq(
      field('open', '('),
      optional(choice(
        // single element doesn't need a trailing comma if using named fields
        $._mandatory_symbol_colon_expr,
        seq(
          $._symbol_colon_expr, // single element needs a trailing comma
          ',',
          sep_repeat(
            $._symbol_colon_expr,
            ',',
          ),
        ),
      )),
      field('close', ')'),
    ),

    set_constr: $ => seq(
      field('open', '{'),
      optional(sep_repeat1(
        $.expr,
        ',',
        Trailing.Allowed,
      )),
      field('close', '}'),
    ),

    table_constr: $ => seq(
      field('open', '{'),
      choice(
        sep_repeat1(
          seq(
            $.expr,
            ':',
            $.expr,
          ),
          ',',
          Trailing.Allowed,
        ),
        ':', // empty table {:}
      ),
      field('close', '}'),
    ),

    _symbol_colon_expr: $ => seq(
      optional(seq(
        $.symbol,
        ':',
      )),
      $.expr,
    ),

    _mandatory_symbol_colon_expr: $ => seq(
      $.symbol,
      ':',
      $.expr,
    ),

    
    // ========================================================================
    // litarals
    
    literal: $ => choice(
      $.int_lit,
      $.float_lit,
      $.char_lit,
      $.string_lit,
      $.interpolated_string_lit,
      $.interpolated_multi_string_lit,
      $.raw_string_lit,
      $.multi_string_lit,
      $.nil_lit,
      $.bool_lit,
    ),

    int_lit: $ => seq(
      choice(
        hex_lit(),
        dec_lit(),
        oct_lit(),
        bin_lit(),
      ),
      optional(choice(
        $.int_suffix,
        $.float_suffix,
        $.custom_numeric_lit_suffix,
      )),
    ),

    float_lit: $ => seq(
      dec_lit(),
      choice(
        seq(
          token.immediate(seq('.', dec_lit())),
          optional($.exponent),
        ),
        $.exponent,
      ),
      optional(choice(
        $.float_suffix,
        $.custom_numeric_lit_suffix,
      )),
    ),

    int_suffix: $ => token.immediate(/'?([iI](8|16|32|64)|[uU](8|16|32|64)?)/),

    float_suffix: $ => token.immediate(/'?([fF](32|64)?|[dD])/),

    custom_numeric_lit_suffix: $ => token.immediate(seq(
      '\'',
      identifier()
    )),

    exponent: $ => token.immediate(seq(
      /[eE][+\-]?/,
      dec_lit(),
    )),

    /* TODO: 
     * "A character literal that does not end in ' is interpreted as ' if there is a
     * preceeding backtick token. There must be no whitespace between the preceeding
     * backtick token and the character literal. This special case ensures that a
     * declaration like proc `'customLiteral`(s: string) is valid.
     * proc `'customLiteral`(s: string) is the same as proc `'\''customLiteral`(s: string)."
     */
    char_lit: $ => seq(
      field('open', '\''),
      choice(
        token.immediate(/[^\n\r']/),
        $.char_esc_seq,
      ),
      field('close', token.immediate('\'')),
    ),

    char_esc_seq: $ => token.immediate(seq(
      '\\', 
      choice(
        /[rcnlftv\\"'abe]/,
        /x[0-9a-fA-F]{2}/,
        /[0-9]{1,3}/,
      ),
    )),

    string_lit: $ => seq(
      field('open', '"'),
      repeat(choice(
        token.immediate(/[^\n\r"]/),
        $.str_esc_seq,
      )),
      field('close', token.immediate('"')),
    ),

    str_esc_seq: $ => token.immediate(seq(
      '\\',
      choice(
        /[prcnlftv\\"'abe]/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/,
        /[0-9]{1,3}/,
      ),
    )),

    multi_string_lit: $ => seq(
      choice(
        seq(
          choice(
            $.raw_string_prefix,
            $.regex_string_prefix,
            $.sql_string_prefix,
            $.generalized_string_prefix,
          ),
          field('open', token.immediate('"""')),
        ),
        field('open', '"""'),
      ),
      alias(repeat($._multi_string_content), $.content),
      // TODO: _multi_string_end matches all consecutive " at the end, not only the last 3
      field('close', alias($._multi_string_end, '"""')),
    ),

    raw_string_lit: $ => seq(
      choice(
        $.raw_string_prefix,
        $.regex_string_prefix,
        $.sql_string_prefix,
        $.generalized_string_prefix,
      ),
      seq(
        field('open', token.immediate('"')),
        alias(optional(token.immediate(/[^\r\n"]([^\r\n"]|"")*/)), $.content),
        field('close', token.immediate('"')),
      ),
    ),

    raw_string_prefix: $ => choice('r', 'R'),

    regex_string_prefix: $ => token(prec(TOKEN_PREC.regex_string_prefix,
      /[rR][eE][xX]?/
    )),

    sql_string_prefix: $ => token(prec(TOKEN_PREC.regex_string_prefix,
      /[sS][qQ][lL]/
    )),

    generalized_string_prefix: $ => $.symbol,

    // &"" is a str_lit but fmt"" is a generalized_str_lit and thus raw
    interpolated_string_lit: $ => choice(
      seq(
        alias('&', $.interpolated_string_prefix),
        field('open', '"'),
        repeat(choice(
          token.immediate(/[^\n\r"]/),
          $.str_esc_seq,
          $.string_interpolation,
        )),
        field('close', token.immediate('"')),
      ),
      seq(
        alias('fmt', $.interpolated_string_prefix),
        field('open', token.immediate('"')),
        optional(seq(
          token.immediate(/[^\r\n"]/), // to disambiguate from GENERALIZED_TRIPLESTR_LIT
          repeat(choice(
            token.immediate(/[^\r\n"]|""/),
            $.string_interpolation,
          )),
        )),
        field('close', token.immediate('"')),
      ),
    ),

    string_interpolation: $ => seq(
      field('open', token.immediate('{')),
      $.expr,
      repeat(token.immediate(' ')),
      field('close', token.immediate('}')),
    ),

    interpolated_multi_string_lit: $ => seq(
      choice(
        seq(
          alias('&', $.interpolated_string_prefix),
          field('open', '"""'),
        ),
        seq(
          alias('fmt', $.interpolated_string_prefix),
          field('open', token.immediate('"""')),
        ),
      ),
      repeat(choice(
        $.multi_string_interpolation,
        $._multi_string_content,
      )),
      field('close', alias($._multi_string_end, '"""')),
    ),

    multi_string_interpolation: $ => seq(
      field('open', alias($._interpolation_start, '{')),
      $.expr,
      repeat(token.immediate(' ')),
      field('close', token.immediate('}')),
    ),

    nil_lit: $ => 'nil',

    bool_lit: $ => choice('true', 'false'),

    // ========================================================================
    // comments

    comment: $ => seq(
      field('comment_prefix', token(prec(TOKEN_PREC.comment, '#'))),
      alias(token.immediate(/.*/), $.content),
    ),

    // TODO: nested multi_comment
    multi_comment: $ => seq(
      field('open', token(prec(TOKEN_PREC.multi_comment, '#['))),
      alias(repeat(/./), $.content),
      field('close', ']#'),
    ),

    doc_comment: $ => seq(
      token(prec(TOKEN_PREC.doc_comment, '##')),
      alias(token.immediate(/.*/), $.content),
    ),

    // TODO: nested multi_doc_comment
    multi_doc_comment: $ => seq(
      field('open', token(prec(TOKEN_PREC.multi_doc_comment, '##['))),
      alias(repeat(/./), $.content),
      field('close', ']##'),
    ),

  }
});

//-------------------------------------------------------------------------------
// utilities

function sep_repeat1(content, separator, trailing=Trailing.Allowed) {
  if (trailing === Trailing.Allowed) {                               
    return seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
      optional(separator),
    )
  } else if (trailing === Trailing.Required) {
    return seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
      separator,
    )
  } else if (trailing === Trailing.Forbidden) {
    return seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
    )
  }
}

function sep_repeat(content, separator, trailing=Trailing.Allowed) {
  if (trailing === Trailing.Allowed) {                               
    return optional(seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
      optional(separator),
    ))
  } else if (trailing === Trailing.Required) {
    return optional(seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
      separator,
    ))
  } else if (trailing === Trailing.Forbidden) {
    return optional(seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
    ))
  }
}

function parentheses(content) {
  return seq(
    field('open', '('),
    alias(content, "nested"),
    field('close', ')'),
  )
}

// I chose this structure, because dec_lit appears in multiple places, 
// and if I put these as normal grammar rules, then I can't use the token.immediate() 
// function in float_lit anylonger
function hex_lit() { return /0[xX][0-9A-Fa-f](_?[0-9A-Fa-f])*/ }
function dec_lit() { return /[0-9](_?[0-9])*/ }
function oct_lit() { return /0o[0-7](_?[0-7])*/ }
function bin_lit() { return /0[bB][01](_?[01])*/ }
function identifier() { return /[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/ }
