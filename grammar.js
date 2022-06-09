const PREC = {
  float: 2,
  raw_string: 3,

  lit: 4,
  keyword: 3,
  comment: 100,

  op0: 10,
  op1: 11,
  op2: 12,
  op3: 13,
  op4: 14,
  op5: 15,
  op6: 16,
  op7: 17,
  op8: 18,
  op9: 19,
  op10: 20,
  unary: 21,
}

module.exports = grammar({
  name: 'nim',


  // inline: $ => [
  //   $._section,
  // ],
  //
  
  // conflicts: $ => [
  //   [$.tryExpr,],
  // ],

  extras: $ => [
    $.normal_comment,
    /[\s\f\uFEFF\u2060\u200B]|\r?\n/,
  ],

  externals: $ => [
    $._newline,
    $._indent,
    $._samedent,
    $._dedent,
    $._multi_string_content,
    $._multi_string_end,
  ],

  word: $ => $.ident,
  
  rules: {
    module: $ => sep_repeat(
      $.stmt,
      choice( ';', $._samedent,),
    ),

    _comma: $ => seq(
      ',',
      // optional($.comment)
    ),
    _semicolon: $ => seq(
      ';',
      // optional($.comment)
    ),
    _colon: $ => seq(
      ':',
      // optional($.comment)
    ),
    _colcom: $ => seq(
      ':',
      // optional($.comment)
    ),

    stmt: $ => choice(
      prec.left(2, seq(
        $._indent,
        sep_repeat1(
          $._complexOrSimpleStmt,
          choice(';', $._samedent),
        ),
        $._dedent,
      )),
      prec.left(1, 
        sep_repeat1($._simpleStmt, ';'),
      ),
    ),

    expr: $ => choice(
      prec(2, choice(
        $.blockExpr,
        $.ifExpr,
        $.whenExpr,
        // $.caseStmt,
        $.forExpr,
        $.tryExpr,
      )),
      prec(1, $._simpleExpr),
    ),

    _complexOrSimpleStmt: $ => choice(
      prec(2, choice(
        // $.ifStmt,
        // $.whenStmt,
        // $.whileStmt,
        // $.tryStmt,
        // $.forStmt,
        // $.blockStmt,
        // $.staticStmt,
        // $.deferStmt,
        // $.asmStmt,
        // $.bingStmt,
        // $.mixinStmt,
        // seq('proc', $.routine),
        // seq('method', $.routine),
        // seq('func', $.routine),
        // seq('iterator', $.routine),
        // seq('macro', $.routine),
        // seq('template', $.routine),
        // seq('converter', $.routine),
        // seq('type', section($.typeDef)),
        // seq('const', section($.constant)),
        seq(
          choice(
            alias('let', $.keyw), 
            alias('var', $.keyw), 
            alias('using', $.keyw), 
          ),
          section($, $.variable),
        ),
      )),
      prec(1, $._simpleStmt),
    ),

    variable: $ => seq(
      choice(
        // $.varTuple,
        $.identColonEquals,
      ),
      optional($.colonBody),
      // $.indAndComment,
    ),

    identColonEquals: $ => prec.right(seq(
      $.ident,
      repeat(seq($._comma, $.ident)),
      optional($._comma),
      optional(seq(
        ':',
        optInd($, $.typeDesc)
      )),
      optional(seq(
        '=',
        optInd($, $.expr)
      )),
    )),

    typeDesc: $ => prec.left(seq(
      $._simpleExpr,
      repeat(seq(
        alias('not', $.keyw), 
        $.expr
      )),
    )),

    colonBody: $ => seq(
      $._colcom,
      $.stmt,
      // optional($.postExprBlocks),
    ),

    _simpleStmt: $ => prec.left(seq(
      choice(
        prec(2, choice(
          // $.returnStmt,
          // $.raiseStmt,
          // $.yieldStmt,
          $.discardStmt,
          // $.breakStmt,
          // $.continueStmt,
          // $.pragmaStmt,
          // $.importStmt,
          // $.exportStmt,
          // $.fromStmt,
          // $.includeStmt,
          // $.commentStmt,
        )), 
        prec(1, $.exprStmt),
      ), 
      // optional($.comment),
    )),

    discardStmt: $ => prec.left(seq(
      alias('discard', $.keyw), 
      optional(
        optInd($, $.expr),
      ),
    )),

    forStmt: $ => seq(
      alias('for', $.keyw), 
      sep_repeat1($._identWithPragma, $._comma),
      alias('in', $.keyw), 
      $.expr,
      $._colcom,
      $.stmt,
    ),

    exprStmt: $ => prec.left(seq(
      $._simpleExpr,
      optional(choice(
        prec(2, seq(
          '=',
          optInd($, seq($.expr, optional($.colonBody)))
        )),
        prec(1, seq(
          $.expr,
          // repeat(
          //   $._comma,
          //   $.postExprBlocks,
          // ),
        )),
      )),
    )),

    blockExpr: $ => seq(
      alias('block', $.keyw), 
      optional($.symbol),
      $._colcom,
      $.stmt,
    ),

    ifExpr: $ => seq(
      alias('if', $.keyw), 
      $.condExpr,
    ),

    whenExpr: $ => seq(
      alias('when', $.keyw), 
      $.condExpr,
    ),

    forExpr: $ => alias($.forStmt, 'for'),

    tryExpr: $ => (seq(
      alias('try', $.keyw),
      $._colcom,
      $.stmt,
      repeat(optInd($, seq(
        alias('except', $.keyw), 
        $.exprList,
        $._colcom,
        $.stmt,
      ))),
      optional(optInd($, seq(
        alias('finally', $.keyw),
        $._colcom,
        $.stmt,
      ))),
    )),

    condExpr: $ => seq(
      $.expr,
      $._colcom,
      $.expr,
      repeat(optInd($, seq(
        alias('elif', $.keyw), 
        $.expr,
        $._colcom,
        $.expr,
      ))),
      optInd($, seq(
        alias('else', $.keyw), 
        $._colcom,
        $.expr,
      )),
    ),

    _simpleExpr: $ => prec.left(seq(
      $.primary,
      repeat(seq($.operatorB, optInd($, $.primary))),
      // optional($.pragma),
    )),

    exprList: $ => sep_repeat1( $.expr, $._comma),

    primary: $ => choice(
      choice(
        // seq(
        //   $.operatorB,
        //   $.primary,
        //   repeat($.primarySuffix),
        // ),
      //   $.tupleDecl,
      //   $.routineExpr,
      //   $.enumDecl,
      //   $.objectDecl,
      //   $.conceptDecl,
      //   seq(
      //     'bind',
      //     $.primary,
      //   ),
      //   seq(
      //     choice('var', 'out', 'ref', 'ptr', 'distinct'),
      //     $.primary,
      //   ),
      ),
      seq(
        repeat($.operator),
        $._identOrLiteral,
        // $.primarySuffix,
      ),
    ),

    _identWithPragma: $ => seq(
      $._identVis,
      // optional($.pragma),
    ),

    _identVis: $ => seq(
      $.symbol,
      optional($.opr),
    ),

    _identOrLiteral: $ => choice(
      $.literal,
      $.generalizedLit,
      // $.symbol,
      // $.par,
      // $.arrayConstr,
      // $.setOrTableConstr,
      // $.tuplesConstr,
      // $.castExpr,
    ),

    literal: $ => choice(
      seq($.int_lit, optional(choice($.int_suffix, $.float_suffix))),
      seq($.float_lit, optional($.float_suffix)),
      // alias($.float32_lit, $.float_lit),
      // alias($.float64_lit, $.float_lit),
      $.custom_numeric_lit,
      $.char_lit,
      $.str_lit,
      $.rstr_lit,
      $.triplestr_lit,
      $.nil,
      $.bool_lit,
    ),

    generalizedLit: $ => choice(
      $.generalized_str_lit,
      $.generalized_triplestr_lit,
    ),

    symbol: $ => choice(
      seq(
        '`',
        repeat1(choice(
          // /\s/,
          $.keyw,
          $.ident,
          $.literal,
          prec.left(repeat1(choice(
            $.operatorB,
            /[\(\)\[\]\{\}]/
          ))),
        )),
        '`',
      ),
      $.ident,
      $.keyw
    ),


    operator: $ => choice(operators(), 'static'),
    operatorB: $ => operators(),


    comment: $ => seq(
      /##.*/,
      $._newline,
    ),

    normal_comment: $ => token(prec(-5, seq(
      /#[^#].*/,
    ))),

    keyw: $ => prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')),
    // KEYW: $ => prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'nil', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')),

    dotlikeop: $ => prec(PREC.op6, dotlikeop()),
    opr: $ => operator_signs(),
    op0: $ => op0(),
    op1: $ => op1(),
    op2: $ => op2(),
    op3: $ => op3(),
    op4: $ => op4(),
    op5: $ => op5(),
    op6: $ => op6(),
    op7: $ => op7(),
    op8: $ => op8(),
    op9: $ => op9(),
    op10: $ => op10(),

    ident: $ => /[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/,

    int_lit: $ => choice(
      hex_lit(),
      dec_lit(),
      oct_lit(),
      bin_lit(),
    ),

    int_suffix: $ => token.immediate(choice(
      seq(
        '\'',
        token.immediate(choice('i', 'I')),
        token.immediate(choice('8', '16', '32', '64')),
      ),
      seq(
        '\'',
        token.immediate(choice('u', 'U')),
        token.immediate(optional(choice('8', '16', '32', '64'))),
      ),
    )),

    float_lit: $ => {
      function exponent() {
        return seq(
          choice('e', 'E'),
          token.immediate(optional(choice('+', '-'))),
          token.immediate(dec_lit()),
        )
      }

      return seq(
        dec_lit(),
        token.immediate(choice(
          seq(
            '.',
            token.immediate(dec_lit()),
            token.immediate(optional(exponent())),
          ),
          exponent(),
        )),
      )
    },

    float_suffix: $ => token.immediate(seq(
      optional('\''),
      choice(
        seq(
          token.immediate(choice('f', 'F')),
          token.immediate(optional(choice('32', '64'))),
        ),
        choice('d', 'D'),
      )
    )),

    // TODO: doesn't account for the exception of predefined type suffixes (i/u8-64)
    custom_numeric_lit: $ => seq(
      choice(
        $.int_lit,
        $.float_lit,
      ),
      token.immediate(/'[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/,),
    ),

    /* TODO: 
     * "A character literal that does not end in ' is interpreted as ' if there is a
     * preceeding backtick token. There must be no whitespace between the preceeding
     * backtick token and the character literal. This special case ensures that a
     * declaration like proc `'customLiteral`(s: string) is valid.
     * proc `'customLiteral`(s: string) is the same as proc `'\''customLiteral`(s: string)."
     */
    char_lit: $ => seq(
      '\'',
      choice(
        /[^\n\r']/,
        $.char_esc_seq,
      ),
      '\'',
    ),

    char_esc_seq: $ => token(prec(1, seq(
      '\\', 
      choice(
      /[rcnlftv\\"'abe]/,
      /x[0-9a-fA-F]{2}/,
      /[0-9]{1,3}/,
    )))),

    str_lit: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^\n\r"]/),
        $.str_esc_seq,
      )),
      token.immediate('"'),
    ),

    str_esc_seq: $ => token(prec(1, seq(
      '\\',
      choice(
        /[prcnlftv\\"'abe]/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/,
        /[0-9]{1,3}/,
      ),
    ))),

    // TODO: TRIPLESTR_LIT continues matching when it's not closed, instead of throwing an error
      // TODO: do strings with externals, like python
    triplestr_lit: $ => seq(
      optional(choice('r', 'R')),
      '"""',
      repeat( $._multi_string_content),
      $._multi_string_end,
    ),

    rstr_lit: $ => seq(
      choice('r', 'R'),
      choice(
        seq(
          token.immediate('"'),
          token.immediate('"'),
        ),
        seq(
          token.immediate(/"[^\r\n"]/),
          token.immediate(repeat(/[^\r\n"]|""/)),
          token.immediate('"'),
        ),
      ),
    ),

    generalized_str_lit: $ => seq(
      $.ident,
      token.immediate(/".[^"]/), // to disambiguate from GENERALIZED_TRIPLESTR_LIT
      token.immediate(repeat(/[^\r\n"]|""/)),
      token.immediate('"'),
    ),

    generalized_triplestr_lit: $ => seq(
      $.ident,
      token.immediate('"""'),
      repeat( $._multi_string_content),
      $._multi_string_end,
    ),

    nil: $ => 'nil',
    bool_lit: $ => choice('true', 'false'),

  }
});




//-------------------------------------------------------------------------------

function keywords() { return prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'nil', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')) }
function parKeywords() { return prec(PREC.keyword, choice('discard' , 'include' , 'if' , 'while' , 'case' , 'try', 'finally' , 'except' , 'for' , 'block' , 'const' , 'let')) }

function operator_signs() { return choice(
  /[+\-*/<>@$~&%|!?^\\]/, // no . = :
  /[=+\-*/<>@$~&%|!?^\\][=+\-*/<>@$~&%|!?^.:\\]/, // no ::
  /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.\\]/, // no ::
  /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.:\\][=+\-*/<>@$~&%|!?^.:\\]+/,
)}

function arrow_like_operators() {return choice(
  /[\-~=]>/,
  /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.:\\]*[\-~=]>/,
)}


function assignment_operators() {return choice(
  /[+\-*/@$&%|^:\\][=+\-*/<>@$~&%|!?^.:\\]*=/,
)}

function dotlikeop() {return token(seq(
  '.',
  choice(
    /[=+\-*\/<>@$~&%|!?^:\\]/,
    /[=+\-*\/<>@$~&%|!?^.:\\][=+\-*\/<>@$~&%|!?^.:\\]+/
  ),
))}

function op0() { return prec(PREC.op0, arrow_like_operators()) }
function op1() { return prec(PREC.op1, assignment_operators()) }
function op2() { return prec(PREC.op2, choice(
  /[@:?][=+\-*\/<>@$~&%|!?^.\\]/, //no :: or :
  /[@:?][=+\-*\/<>@$~&%|!?^.:\\][=+\-*\/<>@$~&%|!?^.:\\]+/,
)) }
function op3() { return prec(PREC.op3, choice('or', 'xor')) }
function op4() { return prec(PREC.op4, choice('and')) }
function op5() { return prec(PREC.op5, choice('==', '<=', '<', '>=', '>', '!=', 'in', 'notin', 'is', 'isnot', 'not', 'of', 'as', 'from',
  /[=<>!][=+\-*\/<>@$~&%|!?^.:\\]+/, //no =
)) }
function op6() { return prec(PREC.op6, choice('..', dotlikeop())) }
function op7() { return prec(PREC.op7, choice('&',
  /&[=+\-*\/<>@$~&%|!?^.:\\]+/,
)) }
function op8() { return prec(PREC.op8, choice('+', '-',
  /[+\-~|][=+\-*\/<>@$~&%|!?^.:\\]+/,
)) }
function op9() { return prec(PREC.op9, choice('*', '/', '%', 'div', 'mod', 'shl', 'shr',
  /[*%/\\][=+\-*\/<>@$~&%|!?^.:\\]+/
)) }
function op10() { return prec(PREC.op10, choice(
  /[$^][=+\-*\/<>@$~&%|!?^.:\\]+/
)) }

function operators() {return choice(op0(), op1(), op2(), op3(), op4(), op5(), op6(), op7(), op8(), op9(), )}

function optInd($, content) {
  return seq(
    // optional($.comment),
    choice(
      seq(
        $._indent,
        content,
        $._dedent
      ),
      content,
    )
  )
}

function section($, content) {
  return prec.left(choice(
    seq(
      // optional($.comment),
      content,
    ),
    seq(
      $._indent,
      repeat1(seq(
        choice(
          content,
          // $.comment,
        ),
        $._samedent,
      )),
      $._dedent,
    ),
  ))
}

function sep_repeat1(content, separator) {
  return seq(
    content,
    repeat(seq(
      separator,
      content,
    )),
    optional(separator),
  )
}

function sep_repeat(content, separator) {
  return optional(seq(
    content,
    repeat(seq(
      separator,
      content,
    )),
    optional(separator),
  ))
}

function hex_lit() { return /0[xX][0-9A-Fa-f](_?[0-9A-Fa-f])*/ }
function dec_lit() { return /[0-9](_?[0-9])*/ }
function oct_lit() { return /0o[0-7](_?[0-7])*/ }
function bin_lit() { return /0[bB][01](_?[01])*/ }

/* TODO: 
 * "For the unary_minus rule there are further restrictions that are not covered
 * in the formal grammar. For - to be part of the number literal its immediately
 * preceeding character has to be in the set 
 * {' ', '\t', '\n', '\r', ',', ';', '(', '[', '{'}.
 * This set was designed to cover most cases in a natural manner."
 */
// function unary_minus() { return prec(PREC.unary, /[ \t\n\r,;\(\[\{][-\+]/,) }
