const Trailing = {
  Allowed: 'Allowed',
  Required: 'Required',
  Forbidden: 'Forbidden',
};

const PREC = {}

const TOKEN_PREC = {
  regex_string_prefix: 1, // > generalized_string_prefix
}

const DYNAMIC_PREC = {}

module.exports = grammar({
  name: 'nim',

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

    module: $ => prec.left(repeat(seq(
      $.literal,
      /[\n\r\s]/,
    ))),

    expr: $ => choice(
      $.literal,
      $.symbol,
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
            $.generalized_string_prefix,
          ),
          field('open', token.immediate('"""')),
        ),
        field('open', '"""'),
      ),
      repeat($._multi_string_content),
      // TODO: _multi_string_end matches all consecutive " at the end, not only the last 3
      field('close', alias($._multi_string_end, '"""')),
    ),

    raw_string_lit: $ => seq(
      choice(
        $.raw_string_prefix,
        $.regex_string_prefix,
        $.generalized_string_prefix,
      ),
      seq(
        field('open', token.immediate('"')),
        optional(token.immediate(/[^\r\n"]([^\r\n"]|"")*/)),
        field('close', token.immediate('"')),
      ),
    ),

    raw_string_prefix: $ => choice('r', 'R'),

    regex_string_prefix: $ => token(prec(TOKEN_PREC.regex_string_prefix,
      /[rR][eE][xX]?/
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

// I chose this structure, because dec_lit appears in multiple places, 
// and if I put these as normal grammar rules, then I can't use the token.immediate() 
// function in float_lit anylonger
function hex_lit() { return /0[xX][0-9A-Fa-f](_?[0-9A-Fa-f])*/ }
function dec_lit() { return /[0-9](_?[0-9])*/ }
function oct_lit() { return /0o[0-7](_?[0-7])*/ }
function bin_lit() { return /0[bB][01](_?[01])*/ }
function identifier() { return /[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/ }
