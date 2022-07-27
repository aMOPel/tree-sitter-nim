const PREC = {
  float: 2,
  raw_string: 3,

  lit: 4,
  keyword: -1,
  comment: 100,
  stmt: 30,

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


  inline: $ => [
    // $._section,
    $._simpleStmt,
    $._complexStmt,
    $._suite,
  ],

  
  // conflicts: $ => [
  //   [$.elifStmt, $.stmt],
  // ],

  extras: $ => [
    $.normal_comment,
    $.doc_comment,
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
    module: $ => repeat(
      $.stmt,
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
      $._simpleStmts,
      $._complexStmt,
    ),


    _simpleStmts: $ => seq(
      sep_repeat1($._simpleStmt, ';'),
      prec(-100, $._newline),
    ),

    _simpleStmt: $ => seq(
      choice(
        prec(0, choice(
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
          // $.commentStmt,
        )), 
        prec(-100, $.exprStmt),
      ), 
      // optional($.comment),
    ),

    expr: $ => choice(
      prec(2, choice(
        // $.blockExpr,
        // $.ifExpr,
        // $.whenExpr,
        // $.caseExpr,
        // $.forExpr,
        // $.tryExpr,
      )),
      prec(1, $._simpleExpr),
    ),

    _complexStmt: $ => choice(
      // choice(
        $.ifStmt,
        prec(-1, $.inlineIfStmt),
        $.whenStmt,
        prec(-1, $.inlineWhenStmt),
        $.caseStmt,
        $.whileStmt,
        $.tryStmt,
        prec(-1, $.inlineTryStmt),
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
      // ),
      // prec(-2, seq(
      //   sep_repeat1($._simpleStmt, ';'),
      //   $._newline,
      // )),
    ),

    declaration: $ => choice(
      $.typeDef,
      $.constant,
      $.variable,
    ),

    _suite: $ => choice(
      alias($._simpleStmts, $.block),
      seq($._indent, $.block),
      alias($._newline, $.block)
    ),

    block: $ => seq(
      repeat($.stmt),
      $._dedent
    ),

    typeDef: $ => seq(
      alias('type', $.keyw),
      section($, seq(
        $._identVisDot,
        optional($.pragma),
        optional($.genericParamList),
        optional($.pragma),
        '=',
        $.typeDesc,
      )),
    ),

    constant: $ => seq(
      alias('const', $.keyw),
      section($, seq(
        choice(
          prec(0, $.varTuple),
          prec(-1, seq(
            $._identWithPragma,
            optional(seq(
              $._colon,
              $.typeDesc,
            )),
            '=',
            $.expr,
          )),
        ),
      )),
    ),

    variable: $ => seq(
      alias(choice('let', 'var', 'using'), $.keyw),
      section($, seq(
        choice(
          prec(0, $.varTuple),
          prec(-1, $.declColonEquals),
        ),
        optional($.colonBody),
        // $.indAndComment,
      )),
    ),

    varTuple: $ => seq(
      '(',
      sep_repeat1($._identWithPragma, $._comma),
      ')',
      '=',
      $.expr,
    ),

    identColonEquals: $ => prec.right(2, seq(
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

    typeDesc: $ => prec.left(1, seq(
      $._simpleExpr,
      optional(seq(
        alias('not', $.keyw), 
        $.nil_lit
      )),
    )),

    paramTypeDesc: $ => prec.right(seq(
      $._simpleExpr,
      optional($.paramConstraint),
      optional(seq(
        alias('not', $.keyw), 
        $.nil_lit
      )),
    )),

    pragma: $ => prec.left(seq(
      '{.',
      repeat(
        seq(
          $.exprColonEqExpr,
          optional($._comma),
        ),
      ),
      choice('.}', '}'),
    )),

    exprColonEqExpr: $ => prec.left(seq(
      $.expr,
      optional(seq(
        choice(':', '='),
        $.expr,
      ))
    )),

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

    fromStmt: $ => seq(
      alias('from', $.keyw),
      sep_repeat1(
        $.expr,
        $._comma,
        false
      ),
      $.importStmt,
    ),

    includeStmt: $ => seq(
      alias('include', $.keyw),
      sep_repeat1(
        $.expr,
        $._comma,
        false
      ),
    ),

    ifStmt: $ => seq(
      alias('if', $.keyw),
      $._condStmt,
    ),

    whenStmt: $ => seq(
      alias('when', $.keyw),
      $._condStmt,
    ),

    _condStmt: $ => prec.left(seq(
      $.expr,
      $._colcom,
      $._suite,
      repeat($.elifStmt),
      optional($.elseStmt),
    )),

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
    inlineIfStmt: $ => seq(
      alias('if', $.keyw),
      $._inlineCondStmt,
    ),

    inlineWhenStmt: $ => seq(
      alias('when', $.keyw),
      $._inlineCondStmt,
    ),

    _inlineCondStmt: $ => prec.left(seq(
      $.expr,
      $._colcom,
      inlineSimpleStmts($,
        choice(
          alias($._inlineElifStmt, $.elifStmt),
          alias($._inlineElseStmt, $.elseStmt),
          $._newline
        )
      ),
      // repeat(alias($._inlineElifStmt, $.elifStmt)),
      // optional(alias($._inlineElseStmt, $.elseStmt)),
    )),

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

    _branches: $ => prec.left(seq(
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

    // TODO: some edge cases done work
    bindStmt: $ => prec.right(seq(
      alias('bind', $.keyw), 
      optInd($, sep_repeat1($.qualifiedIdent, $._comma))
    )),

    mixinStmt: $ => prec.right(seq(
      alias('mixin', $.keyw), 
      optInd($, sep_repeat1($.qualifiedIdent, $._comma))
    )),

    qualifiedIdent: $ => seq(
      $.symbol,
      optional(seq(
        '.',
        optInd($, $.symbol),
      )),
    ),

    exprStmt: $ => seq(
      $._simpleExpr,
      optional(choice(
        prec(2, seq(
          '=',
          optInd($, seq($.expr, optional($.colonBody)))
        )),
        // prec(1,
        //
        //   sep_repeat1(
        //     $.expr,
        //     $._comma,
        //   ),
        //   // $.postExprBlocks,
        // ),
      )),
    ),

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
      $.primary,
      repeat(seq($.operatorB, optInd($, $.primary))),
      // optional($.pragma),
    )),

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

    paramList: $ => seq(
      '(',
      sep_repeat(
        $.paramColonEquals,
        choice($._comma, $._semicolon),
      ),
      ')',
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

    paramConstraint: $ => seq(
      '{',
      $.expr,
      '}',
    ),


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

    // use seq(optional($.paramList), optional($.paramListSuffix)) instead of
    // paramListSuffix or paramListArrow from grammar
    paramListSuffix: $ => seq(
      choice(':', '->'),
      $.typeDesc
    ),

    genericParamList: $ => seq(
      '[',
      sep_repeat(
        $.genericParam,
        choice($._comma, $._semicolon),
      ),
      ']',
    ),

    exprList: $ => sep_repeat1( $.expr, $._comma),

    primary: $ => choice(
      prec(0, choice(
        // seq(
        //   $.operatorB,
        //   $.primary,
        //   repeat($.primarySuffix),
        // ),
        $.tupleDecl,
      //   $.routineExpr,
        $.enumDecl,
        $.objectDecl,
      //   $.conceptDecl,
      //   seq(
      //     'bind',
      //     $.primary,
      //   ),
        seq(
          // gotta make sure it doesn't confuse this 'var' with the declaration 'var'
          alias(choice(token(prec(-1, 'var')), 'out', 'ref', 'ptr', 'distinct'), $.keyw),
          $.primary,
        ),
      )),
      prec(-1, seq(
        repeat($.operator),
        $._identOrLiteral,
        // $.primarySuffix,
      )),
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

    objectDecl: $ => prec.right(seq(
      alias('object', $.keyw),
      optional($.pragma),
      optional(seq(
        alias('of', $.keyw),
        $.typeDesc,
      )),
      optional($.objectPart),
    )),

    objectPart: $ => seq(
      $._indent,
      repeat1(choice(
        // $.objectWhen,
        // $.objectCase,
        alias('nil', $.keyw),
        alias('discard', $.keyw),
        $.declColonEquals,
      )),
      $._dedent,
    ),

    // objectWhen: $ => seq(
    //   alias('when', $.keyw),
    //
    //   
    // ),

    // TODO: 
    // objectCase: $ => seq(
    //   alias(token(prec(-1, 'case')), $.keyw),
    //   $._identWithPragma,
    //   ':',
    //   $.typeDesc,
    //   optional(':'),
    //   $._newline,
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
    //   alias('of', $.keyw),
    //   $.exprList,
    //   $._colcom,
    //   $.objectPart,
    // ),
    //
    // objectElif: $ => seq(
    //   alias('elif', $.keyw),
    //   $.expr,
    //   $._colcom,
    //   $.objectPart,
    // ),
    //
    // objectElse: $ => seq(
    //   alias('else', $.keyw),
    //   $._colcom,
    //   $.objectPart,
    // ),
    //
    _identWithPragma: $ => prec.right(seq(
      $._identVis,
      optional($.pragma),
    )),

    _identWithPragmaDot: $ => prec.left(seq(
      $._identVisDot,
      optional($.pragma),
    )),

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

    _identOrLiteral: $ => prec(1, choice(
      $.literal,
      $.generalizedLit,
      $.symbol,
      // $.par,
      // $.arrayConstr,
      // $.setOrTableConstr,
      $.tupleConstr,
      // $.castExpr,
    )),

    tupleConstr: $ => seq(
      '(',
      sep_repeat($.exprColonEqExpr, $._comma),
      ')',
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
      $.nil_lit,
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
          // $.keyw,
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
      // prec(-1, $.keyw),
    ),


    operator: $ => choice($._operators, prec(PREC.unary, 'static')),
    operatorB: $ => $._operators,


    doc_comment: $ => token(prec(-5, /##.*/)),

    normal_comment: $ => token(prec(-5, /#[^#].*/)),

    // keyw: $ => prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')),
    // KEYW: $ => prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'nil', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')),

    opr: $ => choice(
        /[+\-*/<>@$~&%|!?^\\]/, // no . = :
        /[=+\-*/<>@$~&%|!?^\\][=+\-*/<>@$~&%|!?^.:\\]/, // no ::
        /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.\\]/, // no ::
        /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.:\\][=+\-*/<>@$~&%|!?^.:\\]+/,
    ),
    _op0: $ => prec(PREC.op0, choice(/[\-~=]>/, /[=+\-*/<>@$~&%|!?^:\\][=+\-*/<>@$~&%|!?^.:\\]*[\-~=]>/, )) ,
    _op1: $ => prec(PREC.op1, choice( /[+\-*/@$&%|^:\\][=+\-*/<>@$~&%|!?^.:\\]*=/)) ,
    _op2: $ => prec(PREC.op2, choice(
      /[@:?][=+\-*\/<>@$~&%|!?^.\\]/, //no :: or :
      /[@:?][=+\-*\/<>@$~&%|!?^.:\\][=+\-*\/<>@$~&%|!?^.:\\]+/,
    )) ,
    _op3: $ => prec(PREC.op3, choice('or', 'xor')) ,
    _op4: $ => prec(PREC.op4, choice('and')) ,
    // token(prec( because 'of' and 'from' can be used in other contexts
    _op5: $ => prec(PREC.op5, token(prec(-100, choice('==', '<=', '<', '>=', '>', '!=', 'in', 'notin', 'is', 'isnot', 'not', 'of', 'as', 'from',
      /[=<>!][=+\-*\/<>@$~&%|!?^.:\\]+/, //no =
    )))) ,
    _op6: $ => prec(PREC.op6, choice(
      '..',
      $._dotlikeop,
    )),
    _dotlikeop: $ => token(seq(
      '.',
      choice(
        /[=+\-*\/<>@$~&%|!?^:\\]/,
        /[=+\-*\/<>@$~&%|!?^.:\\][=+\-*\/<>@$~&%|!?^.:\\]+/
      ),
    )) ,
    _op7: $ => prec(PREC.op7, choice('&',
      /&[=+\-*\/<>@$~&%|!?^.:\\]+/,
    )) ,
    _op8: $ => prec(PREC.op8, choice('+', '-', '|', '~',
      /[+\-~|][=+\-*\/<>@$~&%|!?^.:\\]+/,
    )) ,
    _op9: $ => prec(PREC.op9, choice('*', '/', '%', 'div', 'mod', 'shl', 'shr',
      /[*%/\\][=+\-*\/<>@$~&%|!?^.:\\]+/
    )) ,
    _op10: $ => prec(PREC.op10, choice(
      /[\$\^][=+\-*\/<>@$~&%|!?^.:\\]*/
    )) ,

    _operators: $ => choice($._op0, $._op1, $._op2, $._op3, $._op4, $._op5, $._op6, $._op7, $._op8, $._op9, $._op10),


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

    nil_lit: $ => 'nil',
    bool_lit: $ => choice('true', 'false'),

  }
});




//-------------------------------------------------------------------------------

// function keywords() { return prec(PREC.keyword, choice('addr', 'and', 'as', 'asm', 'bind', 'block', 'break', 'case', 'cast', 'concept', 'const', 'continue', 'converter', 'defer', 'discard', 'distinct', 'div', 'do', 'elif', 'else', 'end', 'enum', 'except', 'export', 'finally', 'for', 'from', 'func', 'if', 'import', 'in', 'include', 'interface', 'is', 'isnot', 'iterator', 'let', 'macro', 'method', 'mixin', 'mod', 'nil', 'not', 'notin', 'object', 'of', 'or', 'out', 'proc', 'ptr', 'raise', 'ref', 'return', 'shl', 'shr', 'static', 'template', 'try', 'tuple', 'type', 'using', 'var', 'when', 'while', 'xor', 'yield')) }
// function parKeywords() { return prec(PREC.keyword, choice('discard' , 'include' , 'if' , 'while' , 'case' , 'try', 'finally' , 'except' , 'for' , 'block' , 'const' , 'let')) }


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

function section($, content) {
  return prec.right(choice(
    // seq(
      // optional($.comment),
    content,
    // ),
    seq(
      $._indent,
      repeat1(seq(
        choice(
          content,
          // $.comment,
        ),
        // $._samedent,
      )),
      $._dedent,
    ),
  ))
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

function inlineSimpleStmts($, closing_pattern) {
  return prec.left(seq(
    sep_repeat1($._simpleStmt, ';'),
    closing_pattern,
  ))
}
