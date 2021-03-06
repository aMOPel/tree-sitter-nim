const PREC = {
  float: 2,
  raw_string: 3,

  lit: 2,
  keyword: 3,

  op0: 0,
  op1: 1,
  op2: 2,
  op3: 3,
  op4: 4,
  op5: 5,
  op6: 6,
  op7: 7,
  op8: 8,
  op9: 9,
  op10: 10,
  unary: 11,
}

module.exports = grammar({
  name: 'Nim',

  // word: $ => $.IDENT,
  inline: $ => [
  ],

  rules: {
    module: $ => repeat($._definition),
    _definition: $ => choice(
      // $.declColonEquals,
      // $.complexOrSimpleStmt,
      $.generalizedLit,
      $.literal,
      // $.IDENT,
      // $.symbol,
      // $.OPR,
      $.OP0,
      $.OP1,
      $.OP2,
      $.OP3,
      $.OP4,
      $.OP5,
      $.OP6,
      $.OP7,
      $.OP8,
      $.OP9,
      $.OP10,
    ),

    literal: $ => prec(PREC.lit, choice(
      $.INT_LIT,
      $.INT8_LIT,
      $.INT16_LIT,
      $.INT32_LIT,
      $.INT64_LIT,
      $.UINT_LIT,
      $.UINT8_LIT,
      $.UINT16_LIT,
      $.UINT32_LIT,
      $.UINT64_LIT,
      $.FLOAT_LIT,
      $.FLOAT32_LIT,
      $.FLOAT64_LIT,
      $.CHAR_LIT,
      $.STR_LIT,
      $.RSTR_LIT,
      $.TRIPLESTR_LIT,
      $.CUSTOM_NUMERIC_LIT,
      $.NIL,
    )),

    generalizedLit: $ => choice(
      $.GENERALIZED_STR_LIT,
      $.GENERALIZED_TRIPLESTR_LIT,
    ),

    // symbol: $ => token(choice(
    //   seq(
    //     '`',
    //     repeat1(choice(
    //       /\s/,
    //       keywords(),
    //       identifier(),
    //       literal(),
    //       prec.left(repeat1(choice(
    //         operators(),
    //         /[\(\)\[\]\{\}]/
    //       ))),
    //     )),
    //     '`',
    //   ),
    //   identifier(),
    //   keywords(),
    // )),

    DOTLIKEOP: $ => prec(PREC.op6, dotlikeop()),
    OPR: $ => operator_signs(),
    OP0: $ => op0(),
    OP1: $ => op1(),
    OP2: $ => op2(),
    OP3: $ => op3(),
    OP4: $ => op4(),
    OP5: $ => op5(),
    OP6: $ => op6(),
    OP7: $ => op7(),
    OP8: $ => op8(),
    OP9: $ => op9(),
    OP10: $ => op10(),

    IDENT: $ => identifier(),

    INT_LIT: $ => int_lit(),
    INT8_LIT: $ => int8_lit(),
    INT16_LIT: $ => int16_lit(),
    INT32_LIT: $ => int32_lit(),
    INT64_LIT: $ => int64_lit(),

    UINT_LIT: $ => uint_lit(),
    UINT8_LIT: $ => uint8_lit(),
    UINT16_LIT: $ => uint16_lit(),
    UINT32_LIT: $ => uint32_lit(),
    UINT64_LIT: $ => uint64_lit(),

    FLOAT_LIT: $ => float_lit(),
    FLOAT32_LIT: $ => float32_lit(),
    FLOAT64_LIT: $ => float64_lit(),

    // TODO: doesn't account for the exception of predefined type suffixes (i/u8-64)
    CUSTOM_NUMERIC_LIT: $ => custom_numeric_lit(),

    /* TODO: 
     * "A character literal that does not end in ' is interpreted as ' if there is a
     * preceeding backtick token. There must be no whitespace between the preceeding
     * backtick token and the character literal. This special case ensures that a
     * declaration like proc `'customLiteral`(s: string) is valid.
     * proc `'customLiteral`(s: string) is the same as proc `'\''customLiteral`(s: string)."
     */
    CHAR_LIT: $ => char_lit(),
    STR_LIT: $ => str_lit(),
    // TODO: TRIPLESTR_LIT continues matching when it's not closed, instead of throwing an error
    TRIPLESTR_LIT: $ => triplestr_lit(),
    RSTR_LIT: $ => rstr_lit(),

    GENERALIZED_STR_LIT: $ => generalized_str_lit(),
    GENERALIZED_TRIPLESTR_LIT: $ => generalized_triplestr_lit(),

    NIL: $ => nil(),


    // complexOrSimpleStmt: $ => choice(
    //   seq(
    //     choice(
    //       'let',
    //       'var',
    //       'using',
    //     ),
    //     $.variable,
    //   ),
    // ),
    // variable: $ => seq(
    //   choice(
    //     // $.varTuple,
    //     $.identColonEquals,
    //   ),
    //   optional($.colonBody),
    //   // $.indAndComment,
    // ),
    // // varTuple: $ => '',
    // 
    // identColonEquals: $ => prec.right(seq(
    //   $.IDENT,
    //   repeat(
    //     seq(
    //       ',',
    //       $.IDENT,
    //     ),
    //   ),
    //   optional(','),
    //   optional(
    //     seq(
    //       ':',
    //       $.typeDesc
    //     ),
    //   ),
    //   optional(
    //     seq(
    //       '=',
    //       $.expr,
    //     ),
    //   ),
    // )),
    //
    // colonBody: $ => seq(
    //   ':',
    //   $.stmt,
    // ),
    //
    // stmt: $ => 'stmt',
    //
    // expr: $ => 'expr',
    //
    // typeDesc: $ => 'type',
    // indAndComment: $ => '',
    // declColonEquals: $ => prec.left(seq(
    //   $.identWithPragma,
    //   repeat(
    //     seq(
    //       ',',
    //       $.identWithPragma
    //     ),
    //   ),
    //   optional(','),
    //   optional(
    //     seq(
    //       ':',
    //       $.typeDesc
    //     )
    //   ),
    //   optional(
    //     seq(
    //       '=',
    //       $.expr,
    //     )
    //   )
    // )),
    // // optInd: $ => optional(/[\t\v ]*/),
    // typeDesc: $ => 'int',
    // identWithPragma: $ => /\w+/,
    // expr: $ => 'expr',
    // _letter: $ => /[a-zA-Z\x80-\xff]/,
    // _digit: $ => /[0-9]/,

  }
});

function signed_int() {
  return /\'(i|I)/
}

function unsigned_int() {
  return /\'(u|U)/
}

function hex_lit() { return /0(x|X)[0-9A-Fa-f](_?[0-9A-Fa-f])*/ }
function dec_lit() { return /[0-9](_?[0-9])*/ }
function oct_lit() { return /0o[0-7](_?[0-7])*/ }
function bin_lit() { return /0(b|B)[01](_?[01])*/ }

/* TODO: 
 * "For the unary_minus rule there are further restrictions that are not covered
 * in the formal grammar. For - to be part of the number literal its immediately
 * preceeding character has to be in the set 
 * {' ', '\t', '\n', '\r', ',', ';', '(', '[', '{'}.
 * This set was designed to cover most cases in a natural manner."
 */
function unary_minus() { return field('unary_minus', '-') }

function int_lit() {
  return token(seq(
      optional(unary_minus()),
      choice(
        hex_lit(),
        dec_lit(),
        oct_lit(),
        bin_lit(),
      ),
    ))
}

function float_lit() {
  return token(prec(PREC.float, seq(
    optional(unary_minus()),
    dec_lit(),
    choice(
      seq(
        '.',
        dec_lit(),
        optional(exponent()),
      ),
      exponent(),
    ),
  )))
}

function exponent() { return field('exp', seq(/(e|E)(\+|\-)?/, dec_lit())) }
function float32_suffix() { return /(f|F)(32)?/ }
function float64_suffix() { return /((f|F)64)|d|D/ }

function int8_lit() { return token(seq(int_lit(), signed_int(), '8')) }
function int16_lit() { return token(seq(int_lit(), signed_int(), '16')) }
function int32_lit() { return token(seq(int_lit(), signed_int(), '32')) }
function int64_lit() { return token(seq(int_lit(), signed_int(), '64')) }

function uint_lit() { return token(seq(int_lit(), unsigned_int())) }
function uint8_lit() { return token(seq(int_lit(), unsigned_int(), '8')) }
function uint16_lit() { return token(seq(int_lit(), unsigned_int(), '16')) }
function uint32_lit() { return token(seq(int_lit(), unsigned_int(), '32')) }
function uint64_lit() { return token(seq(int_lit(), unsigned_int(), '64')) }

function float32_lit() {
  return token(prec(PREC.float, choice(
  seq(
    hex_lit(),
    '\'',
    float32_suffix(),
  ),
  seq(
    choice(
      float_lit(),
      dec_lit(),
      oct_lit(),
      bin_lit(),
    ),
    optional('\''),
    float32_suffix(),
  ),
)))
}

function float64_lit() {
  return token(prec(PREC.float, choice(
  seq(
    hex_lit(),
    '\'',
    float64_suffix(),
  ),
  seq(
    choice(
      float_lit(),
      dec_lit(),
      oct_lit(),
      bin_lit(),
    ),
    optional('\''),
    float64_suffix(),
  ),
)))
}

// TODO: doesn't account for the exception of predefined type suffixes (i/u8-64)
function custom_numeric_lit() {
  return token(seq(
  choice(
    int_lit(),
    float_lit(),
  ),
  '\'',
  field('identifier', identifier()),
))
}

/* TODO: 
 * "A character literal that does not end in ' is interpreted as ' if there is a
 * preceeding backtick token. There must be no whitespace between the preceeding
 * backtick token and the character literal. This special case ensures that a
 * declaration like proc `'customLiteral`(s: string) is valid.
 * proc `'customLiteral`(s: string) is the same as proc `'\''customLiteral`(s: string)."
 */
function char_lit() {
  return token(seq(
  '\'',
  choice(
    /[^\n']/,
    field('esc_seq',
      seq( '\\', choice(
          /[rcnlftv\\"'abe]/,
          /x[0-9a-fA-F]{2}/,
          /[0-9]{1,3}/,
        )))),
  '\'',
))
}

function str_lit() {
  return token(seq(
  '"',
  repeat(choice(
    /[^\n\r"]/,
    field('esc_seq',
      seq('\\', choice(
        /[prcnlftv\\"'abe]/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/,
        /[0-9]{1,3}/,
      ))))),
  '"',
))
}

// TODO: TRIPLESTR_LIT continues matching when it's not closed, instead of throwing an error
function triplestr_lit() {
  return seq(
  /(r|R)?"""/,
  repeat(/./),
  /"""[^"]/,
)
}

function rstr_lit() {
  return token(seq(
  /(r|R)".[^"]/,
  repeat(/[^\r\n"]|""/),
  '"',
))
}

function generalized_str_lit() {
  return token(seq(
  identifier(),
  /".[^"]/, // to disambiguate from GENERALIZED_TRIPLESTR_LIT
  repeat(/[^\r\n"]|""/),
  '"',
))
}

function generalized_triplestr_lit() {
  return seq(
  identifier(),
  '"""',
  repeat(/./),
  /"""[^"]/,
)
}

function nil() { return 'nil' }

function literal() {
  return choice(
    int_lit(),
    int8_lit(),
    int16_lit(),
    int32_lit(),
    int64_lit(),
    uint_lit(),
    uint8_lit(),
    uint16_lit(),
    uint32_lit(),
    uint64_lit(),
    float_lit(),
    float32_lit(),
    float64_lit(),
    char_lit(),
    str_lit(),
    rstr_lit(),
    triplestr_lit(),
    // generalized_str_lit(),
    // generalized_triplestr_lit(),
    custom_numeric_lit(),
    nil(),
)
}

//-------------------------------------------------------------------------------

function identifier() { return /[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/ }

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
