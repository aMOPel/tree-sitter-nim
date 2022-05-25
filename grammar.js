const PREC = {
  unary: 11,
  float: 2,
  raw_string: 3,
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
      $.literal,
      // $.IDENT,
    ),

    literal: $ => choice(
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
      $.STR_LIT,
      $.RSTR_LIT,
      $.TRIPLESTR_LIT,
      $.CHAR_LIT,
      // $._CUSTOM_NUMERIC_LIT,
      // $._NIL,
    ),

    // IDENT: $ => /[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/,

    INT_LIT: $ => int_lit(),
    INT8_LIT: $ => token(seq(int_lit(), signed_int(), '8')),
    INT16_LIT: $ => token(seq(int_lit(), signed_int(), '16')),
    INT32_LIT: $ => token(seq(int_lit(), signed_int(), '32')),
    INT64_LIT: $ => token(seq(int_lit(), signed_int(), '64')),

    UINT_LIT: $ => token(seq(int_lit(), unsigned_int())),
    UINT8_LIT: $ => token(seq(int_lit(), unsigned_int(), '8')),
    UINT16_LIT: $ => token(seq(int_lit(), unsigned_int(), '16')),
    UINT32_LIT: $ => token(seq(int_lit(), unsigned_int(), '32')),
    UINT64_LIT: $ => token(seq(int_lit(), unsigned_int(), '64')),

    FLOAT_LIT: $ => float_lit(),

    FLOAT32_LIT: $ => token(prec(PREC.float, choice(
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
    ))),
    
    FLOAT64_LIT: $ => token(prec(PREC.float, choice(
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
    ))),

    // TODO: TRIPLESTR_LIT continues matching when it's not closed, instead of throwing an error
    TRIPLESTR_LIT: $ => seq(
      '"""',
      repeat(/./),
      /"""[^"]/,
    ),

    RSTR_LIT: $ => seq(
      /(r|R)"/,
      repeat(/[^"]|""/),
      '"',
    ),

    // GENERALIZED_STR_LIT: $ => seq(
    //   token.immediate(seq(
    //   /(r|R)"/,
    //   repeat(/[^"]|""/),
    //   '"',
    // ),
    
    CHAR_LIT: $ => token(seq(
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
    )),

    STR_LIT: $ => token(seq(
      '"',
      repeat(choice(
        /[^\n"]/,
        field('esc_seq',
          seq('\\', choice(
            /[prcnlftv\\"'abe]/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /u\{[0-9a-fA-F]+\}/,
            /[0-9]{1,3}/,
          ))))),
      '"',
    )),

    // CUSTOM_NUMERIC_LIT: $ => ,
    // NIL: $ => ,

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
