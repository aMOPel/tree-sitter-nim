// rules:
// TODO: par
// TODO: conceptDecl
// TODO: objectDecl
// TODO: complex expressions (ifExpr, ...)
// TODO: postExprBlocks, doBlock
// TODO: cmdCall
// DONE: routineExpr
// DONE: castExpr
// TODO: arbitrary parentheses around stmts and exprs
// TODO: std/strformat interpolation

// polish
// TODO: corner cases marked with TODO
// TODO: reevaluate necessity of optInd() (and other utility funcs) in individual cases

const PREC = {
  simpleStmtsNewline: -100,

  inlineStmts: -1,
  fromStmt: 1, // >op5
  interpolated_str_lit: 1, // >op7
}

const TOKEN_PREC = {
  par: -1,
  tupleConstr: 1,

  comment: -4,
  multilineComment: -3,
  docComment: -2,
  multilineDocComment: -1,

  conceptOf: 100,
}

const DYNAMIC_PREC = {
  _primaryKeyw: -1,
  typeDef: 1,
  bindStmt: 2,
  patternBind: -1,
  setOrTableConstr: 1,
}

module.exports = grammar({
  name: 'nim',

  inline: $ => [
    $._simpleStmt,
    $._complexStmt,
    $._suite,
  ],

  
  conflicts: $ => [
    [$.bindStmt, $._primaryKeyw],
    [$.variable, $._primaryKeyw],
    [$.typeDef, $._primaryKeyw],
    [$.patternBind, $.setOrTableConstr],
  ],

  extras: $ => [
    $.comment,
    $.docComment,
    $.multilineComment,
    $.multilineDocComment,
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

  word: $ => $.ident,
  
  rules: {

    // ========================================================================
    // central rules

    module: $ => repeat(
      $.stmt,
    ),

    stmt: $ => choice(
      $._simpleStmts,
      $._complexStmt,
    ),

    _simpleStmts: $ => seq(
      sep_repeat1($._simpleStmt, ';'),
      prec(PREC.simpleStmtsNewline, $._newline),
    ),

    _simpleStmt: $ => choice(
      $.returnStmt,
      $.raiseStmt,
      $.yieldStmt,
      $.discardStmt,
      $.breakStmt,
      $.continueStmt,
      $.pragmaStmt,
      $.importStmt,
      $.importExceptStmt,
      $.exportStmt,
      $.fromStmt,
      $.includeStmt,
      $.exprStmt,
    ), 

    expr: $ => choice(
      // choice(
      //   $.blockExpr,
      //   $.ifExpr,
      //   $.whenExpr,
      //   $.caseExpr,
      //   $.forExpr,
      //   $.tryExpr,
      // ),
      $._simpleExpr,
    ),

    _complexStmt: $ => choice(
      $.ifStmt,
      prec(PREC.inlineStmts, $.inlineIfStmt),
      $.whenStmt,
      prec(PREC.inlineStmts, $.inlineWhenStmt),
      $.caseStmt,
      $.whileStmt,
      $.tryStmt,
      prec(PREC.inlineStmts, $.inlineTryStmt),
      $.tryExceptStmt,
      $.tryFinallyStmt,
      $.forStmt,
      $.blockStmt,
      $.staticStmt,
      $.deferStmt,
      $.asmStmt,
      $.bindStmt,
      $.mixinStmt,
      $.routine,
      $.declaration,
    ),

    // ========================================================================
    // declarations

    declaration: $ => choice(
      $.typeDef,
      $.variable,
    ),

    typeDef: $ => seq(
      alias(prec.dynamic(DYNAMIC_PREC.typeDef, 'type'), $.keyw),
      section($, seq(
        $._identVisDot,
        optional($.pragma),
        optional($.genericParamList),
        optional($.pragma),
        '=',
        $.typeDesc,
      )),
    ),

    variable: $ => seq(
      alias(choice('const', 'let', 'var', 'using'), $.keyw),
      section($, seq(
        choice(
          $.varTuple,
          $.declColonEquals,
        ),
        optional($.colonBody),
      )),
    ),

    varTuple: $ => seq(
      '(',
      sep_repeat1($._identWithPragma, $._comma),
      ')',
      '=',
      $.expr,
    ),

    tupleDecl: $ => seq(
      alias('tuple', $.keyw),
      choice(
        seq(
          '[',
          sep_repeat(
            $.identColonEquals,
            choice($._comma, $._semicolon)
          ),
          ']',
        ),
        seq(
          $._indent,
          repeat1($.identColonEquals),
          $._dedent,
        ),
      ),
    ),

    enumDecl: $ => prec.right(seq(
      alias('enum', $.keyw),
      sep_repeat1(
        // declColonEquals is a superset of the actual grammar here
        $.declColonEquals,
        // $.symbol,
        // optional($.pragma),
        // optional(seq(
        //   '=',
        //   $.expr
        // )),
        optional($._comma),
      ),
    )),

    // objectDecl: $ => prec.right(seq(
    //   alias('object', $.keyw),
    //   optional($.pragma),
    //   optional(seq(
    //     alias(token(prec(-1, 'of')), $.keyw),
    //     $.typeDesc,
    //   )),
    //   optional($.objectPart),
    // )),
    //
    // objectPart: $ => section($,
    //   choice(
    //     prec(0, $.objectWhen),
    //     prec(-1, $.objectCase),
    //     prec(-2, alias('nil', $.keyw)),
    //     prec(-3, alias('discard', $.keyw)),
    //     prec(-4, $.declColonEquals),
    //   ),
    // ),
    //
    // objectWhen: $ => prec.right(seq(
    //   alias(token(prec(-1, 'when')), $.keyw),
    //   $.expr,
    //   $._colcom,
    //   $.objectPart,
    //   repeat($.objectElif),
    //   optional($.objectElse),
    // )),
    //
    // // TODO: this works, but it slows down the parser compilation immensely
    // objectCase: $ => seq(
    //   alias(token(prec(-1, 'case')), $.keyw),
    //   $._identWithPragma,
    //   ':',
    //   $.typeDesc,
    //   optional(':'),
    //   // $._newline,
    //   $.objectBranches,
    // ),
    //
    // objectBranches: $ => prec.left(seq(
    //   repeat1($.objectBranch),
    //   repeat($.objectElif),
    //   optional($.objectElse),
    // )),
    //
    // objectBranch: $ => seq(
    //   alias(token(prec(-1, 'of')), $.keyw),
    //   $.exprList,
    //   $._colcom,
    //   $.objectPart,
    // ),
    //
    // objectElif: $ => seq(
    //   alias(token(prec(-1, 'elif')), $.keyw),
    //   $.expr,
    //   $._colcom,
    //   $.objectPart,
    // ),
    //
    // objectElse: $ => seq(
    //   alias(token(prec(-1, 'else')), $.keyw),
    //   $._colcom,
    //   $.objectPart,
    // ),

    // conceptDecl: $ => seq(
    //   alias('concept', $.keyw),
    //   sep_repeat(
    //     $.primary,
    //     ',',
    //   ),
    //   optional($.pragma),
    //   optional(seq(
    //     alias(token(prec(TOKEN_PREC.conceptOf, 'of')), $.keyw),
    //     sep_repeat($.typeDesc, ','),
    //   )),
    //   $._newline,
    //   $._suite,
    // ),

    // ========================================================================
    // simple statements 

    returnStmt: $ => seq(
      alias('return', $.keyw), 
      optional(optInd($, $.expr)),
    ),

    raiseStmt: $ => seq(
      alias('raise', $.keyw), 
      optional(optInd($, $.expr)),
    ),

    yieldStmt: $ => seq(
      alias('yield', $.keyw), 
      optional(optInd($, $.expr)),
    ),

    discardStmt: $ => seq(
      alias('discard', $.keyw), 
      optional(
        optInd($, $.expr),
      ),
    ),

    breakStmt: $ => seq(
      alias('break', $.keyw), 
      optional(optInd($, $.expr)),
    ),

    continueStmt: $ => seq(
      alias('continue', $.keyw), 
      optional(optInd($, $.expr)),
    ),

    pragmaStmt: $ => seq(
      $.pragma,
      optional(seq(
        ':',
        $._suite,
      )),
    ),

    importStmt: $ => prec.left(seq(
      alias('import', $.keyw),
      sep_repeat1(
        $.expr,
        $._comma,
        false
      ),
      optional($.importExceptStmt),
    )),

    importExceptStmt: $ => seq(
      alias('except', $.keyw),
      sep_repeat1(
        $.expr,
        $._comma,
        false
      ),
    ),

    exportStmt: $ => prec.left(seq(
      alias('export', $.keyw),
      sep_repeat1(
        $.expr,
        $._comma,
        false
      ),
      optional($.importExceptStmt),
    )),

    fromStmt: $ => prec(PREC.fromStmt, seq(
      alias('from', $.keyw),
      sep_repeat1(
        $.expr,
        $._comma,
        false
      ),
      $.importStmt,
    )),

    includeStmt: $ => seq(
      alias('include', $.keyw),
      sep_repeat1(
        $.expr,
        $._comma,
        false
      ),
    ),

    // ========================================================================
    // complex statements 

    ifStmt: $ => seq(
      alias('if', $.keyw),
      $._condStmt,
    ),

    whenStmt: $ => seq(
      alias('when', $.keyw),
      $._condStmt,
    ),

    _condStmt: $ => seq(
      $.expr,
      $._colcom,
      $._suite,
      repeat($.elifStmt),
      optional($.elseStmt),
    ),

    elifStmt: $ => seq(
      alias('elif', $.keyw), 
      $.expr,
      $._colcom,
      $._suite,
    ),

    elseStmt: $ => seq(
      alias('else', $.keyw), 
      $._colcom,
      $._suite,
    ),

    // this is kinda a nasty hack, but I'm so happy it works, couldn't find another way
    // it's necessary because the $.simpleStmts end in $._newline, that doesn't fly for inline statements. 
    // However removing the $._newline from $.simpleStmts leads to a great deal of problems
    // TODO: this doesn't handle a hybrid case, where some ifs and elifs are on the same line and some aren't
    inlineIfStmt: $ => seq(
      alias('if', $.keyw),
      $._inlineCondStmt,
    ),

    inlineWhenStmt: $ => seq(
      alias('when', $.keyw),
      $._inlineCondStmt,
    ),

    _inlineCondStmt: $ => seq(
      $.expr,
      $._colcom,
      inlineSimpleStmts($,
        choice(
          alias($._inlineElifStmt, $.elifStmt),
          alias($._inlineElseStmt, $.elseStmt),
          $._newline
        )
      ),
    ),

    _inlineElifStmt: $ => seq(
      alias('elif', $.keyw),
      $.expr,
      $._colcom,
      inlineSimpleStmts($,
        choice(
          alias($._inlineElifStmt, $.elifStmt),
          alias($._inlineElseStmt, $.elseStmt),
          $._newline
        )
      ),
    ),

    _inlineElseStmt: $ => seq(
      alias('else', $.keyw),
      $._colcom,
      inlineSimpleStmts($, $._newline),
    ),

    caseStmt: $ => seq(
      alias('case', $.keyw),
      $.expr,
      optional($._colcom),
      $._newline,
      $._branches,
    ),

    _branches: $ => prec.right(seq(
      repeat1($.ofBranch),
      repeat($.elifStmt),
      optional($.elseStmt),
    )),

    ofBranch: $ => seq(
      alias('of', $.keyw),
      $.exprList,
      $._colcom,
      $._suite,
    ),

    whileStmt: $ => seq(
      alias('while', $.keyw),
      $.expr,
      $._colcom,
      $._suite,
    ),

    tryStmt: $ => seq(
      alias('try', $.keyw),
      $._colcom,
      $._suite,
    ),

    tryExceptStmt: $ => seq(
      alias('except', $.keyw),
      optional($.exprList),
      $._colcom,
      $._suite
    ),

    tryFinallyStmt: $ => seq(
      alias('finally', $.keyw),
      $._colcom,
      $._suite
    ),

    inlineTryStmt: $ => seq(
      alias('try', $.keyw),
      $._colcom,
      inlineSimpleStmts($, choice(
        alias($.inlineTryExceptStmt, $.tryExceptStmt),
        alias($.inlineTryFinallyStmt, $.tryFinallyStmt),
        $._newline,
      )),
    ),

    inlineTryExceptStmt: $ => seq(
      alias('except', $.keyw),
      optional($.exprList),
      $._colcom,
      inlineSimpleStmts($, choice(
        alias($.inlineTryExceptStmt, $.tryExceptStmt),
        alias($.inlineTryFinallyStmt, $.tryFinallyStmt),
        $._newline,
      )),
    ),

    inlineTryFinallyStmt: $ => seq(
      alias('finally', $.keyw),
      $._colcom,
      $._suite,
    ),

    forStmt: $ => seq(
      alias('for', $.keyw), 
      sep_repeat1($._identWithPragma, $._comma),
      alias('in', $.keyw), 
      $.expr,
      $._colcom,
      $._suite,
    ),

    blockStmt: $ => seq(
      alias('block', $.keyw), 
      optional($.symbol),
      $._colcom,
      $._suite,
    ),

    staticStmt: $ => seq(
      alias('static', $.keyw), 
      $._colcom,
      $._suite,
    ),

    deferStmt: $ => seq(
      alias('defer', $.keyw), 
      $._colcom,
      $._suite,
    ),

    asmStmt: $ => seq(
      alias('asm', $.keyw), 
      optional($.pragma),
      choice(
        $.str_lit,
        $.rstr_lit,
        $.triplestr_lit,
      ),
    ),

    // TODO: some edge cases don't work
    bindStmt: $ => prec.right(seq(
      alias(prec.dynamic(DYNAMIC_PREC.bindStmt, 'bind'), $.keyw), 
      optInd($, sep_repeat1($.primary, $._comma))
    )),

    mixinStmt: $ => prec.right(seq(
      alias('mixin', $.keyw), 
      optInd($, sep_repeat1($.primary, $._comma))
    )),

    exprStmt: $ => seq(
      $._simpleExpr,
      optional(choice(
        seq(
          '=',
          optInd($, seq($.expr, optional($.colonBody)))
        ),
        // seq(
        //   sep_repeat1(
        //     $.expr,
        //     $._comma,
        //   ),
        //   $.postExprBlocks,
        // ),
      )),
    ),

    // ========================================================================
    // routine

    routine: $ => prec.right(seq(
      alias(choice(
        'proc',
        'method',
        'func',
        'iterator',
        'macro',
        'template',
        'converter',
      ), $.keyw),
      alias($._identVis, $.ident),
      optional($.pattern),
      optional($.genericParamList),
      seq(optional($.paramList), optional($.paramListSuffix)),
      optional($.pragma),
      optional(seq(
        '=',
        $._suite,
      )),
    )),

    pattern: $ => seq(
      '{',
      choice(
        inlineSimpleStmts($, '}'),
        seq($._suite, '}')
      ),
    ),

    genericParam: $ => prec.left(seq(
      sep_repeat1(
        $.symbol,
        $._comma,
      ),
      optional(seq(
        $._colon,
        $.expr,
      )),
      optional(seq(
        '=',
        optInd($, $.expr),
      )),
    )),

    genericParamList: $ => seq(
      '[',
      sep_repeat(
        $.genericParam,
        choice($._comma, $._semicolon),
      ),
      ']',
    ),

    paramList: $ => seq(
      '(',
      sep_repeat(
        $.paramColonEquals,
        choice($._comma, $._semicolon),
      ),
      ')',
    ),

    // use seq(optional($.paramList), optional($.paramListSuffix)) instead of
    // paramListColon or paramListArrow from grammar
    paramListSuffix: $ => seq(
      choice(':', '->'),
      $.typeDesc
    ),

    paramColonEquals: $ => prec.right(seq(
      sep_repeat1(
        $._identWithPragma,
        $._comma,
      ),
      optional(seq(
        ':',
        alias($.paramTypeDesc, $.typeDesc),
      )),
      optional(seq(
        '=',
        $.expr,
      )),
      
    )),

    // TODO: primarySuffix hijacking paramConstraint
    paramConstraint: $ => seq(
      '{',
      $.expr,
      '}',
    ),

    // ========================================================================
    // expressions

    // blockExpr: $ => seq(
    //   alias('block', $.keyw), 
    //   optional($.symbol),
    //   $._colcom,
    //   $.stmt,
    // ),
    //
    // ifExpr: $ => seq(
    //   'if',
    //   $._condExpr,
    // ),
    //
    // // TODO: _suite needs to match all on one line ifStmt etc.
    // _condExpr: $ => seq(
    //   $.expr,
    //   $._colcom,
    //   $._suite,
    //   repeat($.elifStmt),
    //   $.elseStmt,
    // ),
    //
    //
    // whenExpr: $ => alias($.whenStmt, 'when'),
    // whenExpr: $ => prec.left(seq(
    //   'when',
    //   $.expr,
    //   $._colcom,
    //   $._suite,
    //   optInd($, seq(
    //     repeat($.elifStmt),
    //     optional($.elseStmt),
    //   )),
    // )),

    // caseExpr: $ => seq(
    //   'case',
    //   $.expr,
    //   optional($._colcom),
    //   $._newline,
    //   optInd($, $._branches),
    // ),
    //
    // forExpr: $ => alias($.forStmt, 'for'),

    // tryExpr: $ => (seq(
    //   alias('try', $.keyw),
    //   $._colcom,
    //   $.stmt,
    //   repeat(optInd($, seq(
    //     alias('except', $.keyw), 
    //     $.exprList,
    //     $._colcom,
    //     $.stmt,
    //   ))),
    //   optional(optInd($, seq(
    //     alias('finally', $.keyw),
    //     $._colcom,
    //     $.stmt,
    //   ))),
    // )),

    _simpleExpr: $ => prec.left(seq(
      sep_repeat1(
        $.primary,
        $.operator,
        false,
      ),
      optional($.pragma),
    )),

    // ========================================================================
    // tidbits

    declColonEquals: $ => prec.right(seq(
      sep_repeat1(
        $._identWithPragma,
        $._comma,
      ),
      optional(seq(
        ':',
        $.typeDesc,
      )),
      optional(seq(
        '=',
        $.expr,
      )),
      
    )),

    identColonEquals: $ => prec.right(seq(
      sep_repeat1($.ident, $._comma),
      optional(seq(
        ':',
        optInd($, $.typeDesc)
      )),
      optional(seq(
        '=',
        optInd($, $.expr)
      )),
    )),

    typeDesc: $ => prec.right(seq(
      $._simpleExpr,
      optional(seq(
        alias('not', $.keyw), 
        $.nil_lit
      )),
    )),

    paramTypeDesc: $ => seq(
      $._simpleExpr,
      optional($.paramConstraint),
      optional(seq(
        alias('not', $.keyw), 
        $.nil_lit
      )),
    ),

    pragma: $ => seq(
      '{.',
      repeat(
        seq(
          $.exprColonEqExpr,
          optional($._comma),
        ),
      ),
      choice('.}', '}'),
    ),

    exprColonEqExpr: $ => seq(
      $.expr,
      optional(seq(
        choice(':', '='),
        $.expr,
      ))
    ),

    exprColonEqExprList: $ => sep_repeat1(
      alias($.exprColonEqExpr, 'exprColonEqExpr'),
      $._comma,
    ),

    colonBody: $ => seq(
      $._colcom,
      $._suite,
      // optional($.postExprBlocks),
    ),

    postExprBlocks: $ => seq(
      ':',
      optional($._suite),
      repeat(choice(
        $.doBlock,
        // seq(alias('of', $.keyw), $.exprList, ':', $._suite),
        // seq(alias('elif', $.keyw), $.expr, ':', $._suite),
        // seq(alias('except', $.keyw), $.exprList, ':', $._suite),
        // seq(alias('finally', $.keyw), ':', $._suite),
        // seq(alias('else', $.keyw), ':', $._suite),
      )),
    ),

    doBlock: $ => seq(
      alias('do', $.keyw),
      seq(
        optional($.paramList),
        optional($.paramListSuffix),
      ),
      optional($.pragma),
      $._colcom,
      $._suite,
    ),

    exprList: $ => sep_repeat1( $.expr, $._comma),

    // ========================================================================
    // primary

    primary: $ => prec.left(choice(
      seq(
        repeat($.primaryPrefix),
        choice(
          $.tupleDecl,
          $.routineExpr,
          $.enumDecl,
          // $.objectDecl,
          // $.conceptDecl,
          $._identOrLiteral,
        ),
        repeat($.primarySuffix),
      ),
      // TODO: fckn cmdCall
      // prec(-100, seq(
      //   $._identOrLiteral,
      //   $.cmdCall,
      // )),
    )),

    primaryPrefix: $ => choice(
      $._primaryKeyw,
      $.prefixOperator,
    ),

    _primaryKeyw: $ => alias(
      prec.dynamic(DYNAMIC_PREC._primaryKeyw, choice(
        'bind',
        'static',
        'var',
        'ref',
        'ptr',
        'distinct',
        'out',
        'type',
      )),
      $.keyw,
    ),

    prefixOperator: $ => $.operator,

    primarySuffix: $ => choice(
      $.functionCall,
      $.qualifiedSuffix,
      $.indexSuffix,
      $.patternBind,
      // TODO: exprStmt also can do a cmdCall?
      // $.cmdCall,
    ),

    functionCall: $ => seq(
      '(',
      optional($.exprColonEqExprList),
      ')',
    ),

    // TODO: `a.:a` matches as primary operator primary
    qualifiedSuffix: $ => prec.right(seq(
      choice(
        '.',
        $._dotlikeOp,
      ),
      $.symbol,
      // TODO: is this necessary?
      // optional($.generalizedLit),
    )),

    indexSuffix: $ => seq(
      token.immediate(choice('[', '[:')),
      optional($.exprColonEqExprList),
      ']',
    ),

    // I think it's this: https://nim-lang.org/docs/manual_experimental.html#pattern-operators-the-nim-operator
    patternBind: $ => prec.dynamic(DYNAMIC_PREC.patternBind, seq(
      '{',
      optional($.exprColonEqExprList),
      '}',
    )),

    cmdCall: $ => $.expr,

    // ========================================================================
    // identifier

    _identWithPragma: $ => prec.right(seq(
      $._identVis,
      optional($.pragma),
    )),

    _identWithPragmaDot: $ => seq(
      $._identVisDot,
      optional($.pragma),
    ),

    _identVisDot: $ => seq(
      $.symbol,
      optional(seq(
        '.',
        $.symbol,
      )),
      optional($.opr)
    ),

    _identVis: $ => seq(
      $.symbol,
      optional($.opr),
    ),

    _identOrLiteral: $ => choice(
      $.literal,
      $.generalizedLit,
      $.tupleConstr,
      // $.par,
      $.symbol,
      $.arrayConstr,
      $.setOrTableConstr,
      $.castExpr,
    ),

    castExpr: $ => seq(
      'cast',
      '[',
      $.typeDesc,
      ']',
      '(',
      $.expr,
      ')'
    ),

    routineExpr: $ => prec.right(seq(
      alias(choice('proc', 'func', 'iterator'), $.keyw),
      seq(optional($.paramList), optional($.paramListSuffix)),
      optional($.pragma),
      optional(seq('=', $._suite)),
    )),

    // par: $ => prec.dynamic(TOKEN_PREC.par, seq(
    //   alias('(', $.openParen),
    //   $._suite,
    //   alias(')', $.closeParen),
    // )),

    symbol: $ => choice(
      seq(
        '`',
        repeat1(choice(
          $.ident,
          $.literal,
          prec.left(repeat1(choice(
            $.operator,
            /[\(\)\[\]\{\}]/
          ))),
        )),
        '`',
      ),
      $.ident,
    ),

    ident: $ => /[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/,

    // ========================================================================
    // constructors

    arrayConstr: $ => seq(
      '[',
      optional($.exprColonEqExprList),
      ']',
    ),

    setOrTableConstr: $ => seq(
      prec.dynamic(DYNAMIC_PREC.setOrTableConstr, '{'),
      optional(choice(
        $.exprColonEqExprList,
        ':', // empty table {:}
      )),
      '}',
    ),

    tupleConstr: $ => seq(
      '(',
      optional($.exprColonEqExprList),
      ')',
    ),

    // ========================================================================
    // literals

    literal: $ => choice(
      seq($.int_lit, optional(choice($.int_suffix, $.float_suffix))),
      seq($.float_lit, optional($.float_suffix)),
      $.custom_numeric_lit,
      $.char_lit,
      $.str_lit,
      $.interpolated_str_lit,
      $.interpolated_triplestr_lit,
      $.rstr_lit,
      $.triplestr_lit,
      $.nil_lit,
      $.bool_lit,
    ),

    generalizedLit: $ => choice(
      $.generalized_str_lit,
      $.generalized_triplestr_lit,
    ),

    int_lit: $ => choice(
      hex_lit(),
      dec_lit(),
      oct_lit(),
      bin_lit(),
    ),

    int_suffix: $ => token.immediate(choice(
      seq(
        optional('\''),
        token.immediate(choice('i', 'I')),
        token.immediate(choice('8', '16', '32', '64')),
      ),
      seq(
        optional('\''),
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
      alias(token.immediate(/'[a-zA-Z\x80-\xff](_?[a-zA-Z0-9\x80-\xff])*/,), $.customNumericLitSuffix),
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

    char_esc_seq: $ => token(seq(
      '\\', 
      choice(
      /[rcnlftv\\"'abe]/,
      /x[0-9a-fA-F]{2}/,
      /[0-9]{1,3}/,
    ))),

    str_lit: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^\n\r"]/),
        $.str_esc_seq,
      )),
      token.immediate('"'),
    ),

    str_esc_seq: $ => token(seq(
      '\\',
      choice(
        /[prcnlftv\\"'abe]/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/,
        /[0-9]{1,3}/,
      ),
    )),

    // TODO: TRIPLESTR_LIT continues matching when it's not closed, instead of throwing an error
    triplestr_lit: $ => seq(
      /[rR]?"""/,
      repeat($._multi_string_content),
      $._multi_string_end,
    ),

    rstr_lit: $ => choice(
      /[rR]""/,
      seq(
        /[rR]"[^\r\n"]/,
        token.immediate(repeat(/[^\r\n"]|""/)),
        token.immediate('"'),
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
      repeat($._multi_string_content),
      $._multi_string_end,
    ),

    // &"" is a str_lit but fmt"" is a generalized_str_lit and thus raw
    interpolated_str_lit: $ => choice(
      prec(PREC.interpolated_str_lit, seq(
        '&',
        '"',
        repeat(choice(
          token.immediate(/[^\n\r"]/),
          $.str_esc_seq,
          seq(
            token.immediate('{'),
            $.expr,
            token.immediate('}'),
          ),
        )),
        token.immediate('"'),
      )),
      seq(
        'fmt',
        token.immediate(/".[^"]/), // to disambiguate from GENERALIZED_TRIPLESTR_LIT
        repeat(choice(
          token.immediate(/[^\r\n"]|""/),
          seq(
            token.immediate('{'),
            $.expr,
            token.immediate('}'),
          ),
        )),
        token.immediate('"'),
      ),
    ),

    interpolated_triplestr_lit: $ => seq(
      choice(
        prec(PREC.interpolated_str_lit, seq(
          '&',
          '"""',
        )),
        'fmt"""',
      ),
      repeat(choice(
        seq(
          $._interpolation_start,
          $.expr,
          token.immediate('}'),
        ),
      $._multi_string_content,
      )),
      $._multi_string_end,
    ),

    nil_lit: $ => 'nil',

    bool_lit: $ => choice('true', 'false'),

    // ========================================================================
    // operators

    operator: $ => $._operators,

    opr: $ => choice(
        /[+\-*/<>@$~&%|!?^\\]/, // no . = :
        /[=+\-*/<>@$~&%|!?^\\][=+\-*/<>@$~&%|!?^.:\\]/, // no ::
        /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.\\]/, // no ::
        /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.:\\][=+\-*/<>@$~&%|!?^.:\\]+/,
    ),

    _op0: $ => choice(
      /[\-~=]>/,
      /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.:\\]*[\-~=]>/,
    ),

    _op1: $ => choice(
      /[+\-*/@$&%|^:\\][=+\-*/<>@$~&%|!?^.:\\]*=/,
    ),

    _op2: $ => choice(
      /[@:?][=+\-*\/<>@$~&%|!?^.\\]/, //no :: or :
      /[@:?][=+\-*\/<>@$~&%|!?^.:\\][=+\-*\/<>@$~&%|!?^.:\\]+/,
    ),

    _op3: $ => choice('or', 'xor'),

    _op4: $ => choice('and'),

    // token(prec( because 'of' and 'from' can be used in other contexts
    _op5: $ => choice(
      'in', 'notin', 'is', 'isnot', 'not', 'of', 'as', 'from',
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
      'div', 'mod', 'shl', 'shr',
      '*', '/', '%', 
      /[*%/\\][=+\-*\/<>@$~&%|!?^.:\\]+/,
    ),

    _op10: $ => choice(
      /[\$\^][=+\-*\/<>@$~&%|!?^.:\\]*/
    ),

    _operators: $ => choice($._op0, $._op1, $._op2, $._op3, $._op4, $._op5, $._op6, $._op7, $._op8, $._op9, $._op10),

    // ========================================================================
    // utilities

    // _suite and block are stolen from the tree-sitter-python repo and help
    // with the indent dedent block matching. _suite is used, where stmt is used
    // in the grammar spec
    _suite: $ => choice(
      alias($._simpleStmts, $.block),
      seq($._indent, $.block),
      alias($._newline, $.block)
    ),

    block: $ => seq(
      repeat($.stmt),
      $._dedent
    ),

    // ========================================================================
    // delimiters

    // I just keep them around for easier compatability with the grammar spec
    _comma: $ => ',',
    _semicolon: $ => ';',
    _colon: $ => ':',
    _colcom: $ => ':',

    // ========================================================================
    // comments

    comment: $ => token(prec(TOKEN_PREC.comment, seq(
      '#',
      token.immediate(/[^#].*/),
    ))),

    // TODO: nested multilineComment
    multilineComment: $ => seq(
      token(prec(TOKEN_PREC.multilineComment, '#[')),
      repeat(/./),
      ']#',
    ),

    docComment: $ => token(prec(TOKEN_PREC.docComment, seq(
      '##',
      token.immediate(/.*/),
    ))),

    // TODO: nested multilineDocComment
    multilineDocComment: $ => seq(
      token(prec(TOKEN_PREC.multilineDocComment, '##[')),
      repeat(/./),
      ']##',
    ),

  }
});




//-------------------------------------------------------------------------------

// function keywords() { return prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'nil', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')) }
// function parKeywords() { return prec(PREC.keyword, choice('discard' , 'include' , 'if' , 'while' , 'case' , 'try', 'finally' , 'except' , 'for' , 'block' , 'const' , 'let')) }
// keyw: $ => prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')),
// KEYW: $ => prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'nil', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')),

function optInd($, content) {
  return choice(
    seq(
      $._indent,
      content,
      $._dedent
    ),
    content,
  )
}

function optPar($, content) {
  return choice(
    seq(
      $._indent,
      content,
    ),
    seq(
      // $._samedent,
      content,
    ),
    content,
  )
}

// TODO: arbitrary  parentheses, unfinished idea
function optParen($, content) {
  return choice(
    content,
    seq(
      alias('(', $.openParen),
      content,
      alias(')', $.closeParen),
    )
  )
}

function section($, content) {
  return choice(
    content,
    seq(
      $._indent,
      repeat1(content),
      $._dedent,
    ),
  )
}

function sep_repeat1(content, separator, allow_trailing=true) {
  if (allow_trailing) {
    return seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
      optional(separator),
    )
  } else {
    return seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
    )
  }
}

function sep_repeat(content, separator, allow_trailing=true) {
  if (allow_trailing) {
    return optional(seq(
      content,
      repeat(seq(
        separator,
        content,
      )),
      optional(separator),
    ))
  } else {
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

/* TODO: 
 * "For the unary_minus rule there are further restrictions that are not covered
 * in the formal grammar. For - to be part of the number literal its immediately
 * preceeding character has to be in the set 
 * {' ', '\t', '\n', '\r', ',', ';', '(', '[', '{'}.
 * This set was designed to cover most cases in a natural manner."
 */
// function unary_minus() { return prec(PREC.unary, /[ \t\n\r,;\(\[\{][-\+]/,) }

// this special structure is trying to solve the problem that complex inline stmts
// like: `if true: discard 0; discard 1 else: discard 1` break with the current
// structure of _simpleStmts. Since it requires _newline to determine the end.
// With this structure you can provide the closing pattern, for example for
// `if true: discard 0; discard 1` the closing pattern would be the else branch 
// `else: discard 1`
function inlineSimpleStmts($, closing_pattern) {
  return prec.left(seq(
    sep_repeat1($._simpleStmt, ';'),
    closing_pattern,
  ))
}
