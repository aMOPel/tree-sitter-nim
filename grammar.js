const PREC = {}

const TOKEN_PREC = {}

const DYNAMIC_PREC = {}

module.exports = grammar({
  name: 'nim',

  rules: {

    // ========================================================================
    // central rules

    module: $ => repeat(
      $.literal,
    ),

    // ========================================================================
    // litarals
    
    literal: $ => choice(
      seq($.int_lit, optional(choice($.int_suffix, $.float_suffix))),
      seq($.float_lit, optional($.float_suffix)),
      // $.custom_numeric_lit,
      // $.char_lit,
      // $.str_lit,
      // $.interpolated_str_lit,
      // $.interpolated_triplestr_lit,
      // $.generalized_str_lit,
      // $.generalized_triplestr_lit,
      // $.rstr_lit,
      // $.triplestr_lit,
      // $.nil_lit,
      // $.bool_lit,
    ),

    int_lit: $ => choice(
      hex_lit(),
      dec_lit(),
      oct_lit(),
      bin_lit(),
    ),

    int_suffix: $ => token.immediate(choice(
      /'?[iI](8|16|32|64)/,
      /'?[uU](8|16|32|64)?/,
    )),

    float_lit: $ => {
      function exponent() {
        return token(seq(
          /[eE][+\-]?/,
          dec_lit(),
        ))
      }

      return seq(
        dec_lit(),
        token.immediate(choice(
          token(seq(
            '.',
            dec_lit(),
            optional(exponent()),
          )),
          exponent(),
        )),
      )
    },

    float_suffix: $ => token.immediate(/'?([fF](32|64)?|[dD])/),

  }
});

//-------------------------------------------------------------------------------
// utilities

const Trailing = {
  Allowed: 'Allowed',
  Required: 'Required',
  Forbidden: 'Forbidden',
};

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
