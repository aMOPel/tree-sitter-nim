(keyw) @keyword             ; various keywords
(primary (symbol) @variable)

(comment)
@comment               ; line and block comments

(docComment)
@comment.documentation ; comments documenting code

(ERROR)
@error                 ; syntax/parser errors

;@none                  ; completely disable the highlight

(pragma)
@preproc               ; various preprocessor directives & shebangs

; TODO: maybe put pragma definitions or macro definitions here
;@define                ; preprocessor definition directives

(declaration (variable (declColonEquals "=" @operator)))
(exprStmt "=" @operator)
[
(operator)
(opr)
] 
@operator               ; symbolic operators (e.g. `+` / `*`)

[
";"
","
"."
":"
]
@punctuation.delimiter ; delimiters (e.g. `;` / `.` / `,`)

(tupleConstr ["(" ")"] @punctuation.bracket   )
(arrayConstr ["[" "]"] @punctuation.bracket   )
(tableConstr ["{" "}"] @punctuation.bracket   )
(setConstr ["{" "}"] @punctuation.bracket   )
(genericParamList ["[" "]"] @punctuation.bracket   )
; TODO: doesn't work with ["(" ")"] because of token schenanigans in grammar
(indexSuffix)  @punctuation.bracket
;@punctuation.bracket   ; brackets (e.g. `()` / `{}` / `[]`)

(interpolated_str_lit "&" @punctuation.special)
(interpolated_str_lit "{" @punctuation.special)
(interpolated_str_lit "}" @punctuation.special)
;@punctuation.special   ; special symbols (e.g. `{}` in string interpolation)

[
(str_lit)
(rstr_lit)
(triplestr_lit)
(interpolated_str_lit)
(interpolated_triplestr_lit)
(generalized_str_lit)
(generalized_triplestr_lit)
]
@string               ; string literals

;@string.documentation ; string documenting code (e.g. Python docstrings)

; TODO:
;@string.regex         ; regular expressions

[
(str_esc_seq)
(char_esc_seq)
]
@string.escape        ; escape sequences

;@string.special       ; other special strings (e.g. dates)

(char_lit) 
@character            ; character literals

;@character.special    ; special characters (e.g. wildcards)

[
(bool_lit)
(nil_lit)
]
@boolean              ; boolean literals

[
(int_lit)
(int_suffix)
(custom_numeric_lit)
]
@number               ; numeric literals

[
(float_lit)
(float_suffix)
]
@float                ; floating-point number literals


(routine (symbol [(ident) (operator)] @function)) 
(routine (paramList ["(" ")"] @function))
(routine "=" @function)
; @function         ; function definitions

;@function.builtin ; built-in functions

; primaryPrefix breaks function.call query
(castExpr ["(" ")"] @function.call)
(primary (symbol (ident) @function.call) .
  (primarySuffix (functionCall ["(" ")"] @function.call))
)
(primary . (symbol (ident) @function.call) . (primarySuffix (cmdCall)))
(primary (primarySuffix (qualifiedSuffix (symbol (ident) @function.call))) . (primarySuffix (cmdCall)))
; @function.call    ; function calls

(routine (pragma) @function.macro)
;@function.macro   ; preprocessor macros

;@method           ; method definitions
;@method.call      ; method calls

(primary (symbol (ident) @constructor) . (primarySuffix (objectConstr ["(" ")"] @constructor)))
;@constructor      ; constructor calls and definitions

(paramList (paramColonEquals (symbol) @parameter))
(functionCall (symbolEqExprList (symbolEqExpr (symbol) @paramter)))
;@parameter        ; parameters of a function

;@keyword.coroutine   ; keywords related to coroutines (e.g. `go` in Go, `async/await` in Python)

(routineExprTypeDesc (keyw) @keyword.function)
(routineExpr (keyw) @keyword.function)
(routine (keyw) @keyword.function)
;@keyword.function    ; keywords that define a function (e.g. `func` in Go, `def` in Python)

(operator (keyw) @keyword.operator)
;@keyword.operator    ; operators that are English words (e.g. `and` / `or`)

(returnStmt (keyw) @keyword.return)
(yieldStmt (keyw) @keyword.return)
(discardStmt (keyw) @keyword.return)
;@keyword.return      ; keywords like `return` and `yield`

(caseStmt (keyw) @conditional)
(ofBranch (keyw) @conditional)
(ifStmt (keyw) @conditional)
(elifStmt (keyw) @conditional)
(elseStmt (keyw) @conditional)
(inlineIfStmt (keyw) @conditional)
(whenStmt (keyw) @conditional)
(inlineWhenStmt (keyw) @conditional)
(objectCase (keyw) @conditional (symbol) @variable)
(objectBranch (keyw) @conditional)
(objectElif (keyw) @conditional)
(objectElse (keyw) @conditional)
(objectWhen (keyw) @conditional)
;@conditional         ; keywords related to conditionals (e.g. `if` / `else`)

;@conditional.ternary ; ternary operator (e.g. `?` / `:`)

(forStmt
. (keyw) @repeat
  (keyw) @repeat)
(whileStmt (keyw) @repeat)
(breakStmt (keyw) @repeat)
(continueStmt (keyw) @repeat)
;@repeat              ; keywords related to loops (e.g. `for` / `while`)

;@debug               ; keywords related to debugging
;@label               ; GOTO and other labels (e.g. `label:` in C)

(importStmt (keyw) @include)
(includeStmt (keyw) @include)
(fromStmt (keyw) @include)
(importExceptStmt (keyw) @include)
(exportStmt (keyw) @include)
;@include             ; keywords for including modules (e.g. `import` / `from` in Python)

(raiseStmt (keyw) @exception)
(tryStmt (keyw) @exception)
(tryExceptStmt (keyw) @exception)
(tryFinallyStmt (keyw) @exception)
;@exception           ; keywords related to exceptions (e.g. `throw` / `catch`)

(primaryTypeDef (symbol) @type)
(primaryTypeDesc (symbol) @type)
(primaryTypeDesc 
  (primarySuffix
    (indexSuffix
      (exprColonEqExprList
        (exprColonEqExpr
          (expr
            (primary
              (symbol) @type)))))))
(primaryTypeDef 
  (primarySuffix
    (indexSuffix
      (exprColonEqExprList
        (exprColonEqExpr
          (expr
            (primary
              (symbol) @type)))))))
(genericParam (symbol) @type)
(tupleDecl (keyw) @type)
(enumDecl (keyw) @type)
(objectDecl (keyw) @type)
(conceptDecl (keyw) @type)
((exprStmt
  (primary (symbol))
  (operator) @keyword.operator
  (primary (symbol) @type))
 (#match? @keyword.operator "is"))
((expr
  (primary (symbol))
  (operator) @keyword.operator
  (primary (symbol) @type))
 (#match? @keyword.operator "is"))
;@type            ; type or class definitions and annotations

(primaryTypeDef (symbol (ident) @type.builtin)
  (#match? @type.builtin "int|float|string|cstring|bool|array|seq|tuple|set|varargs|openArray|typed|untyped|auto"))
(primaryTypeDesc (symbol (ident) @type.builtin)
  (#match? @type.builtin "int|float|string|cstring|bool|array|seq|tuple|set|varargs|openArray|typed|untyped|auto"))
(primaryTypeDesc (tupleDesc (keyw) @type.builtin))
(primaryTypeDesc 
  (primarySuffix
    (indexSuffix
      (exprColonEqExprList
        (exprColonEqExpr
          (expr
            (primary
              (symbol) @type.builtin)
              (#match? @type.builtin "int|float|string|cstring|bool|array|seq|tuple|set|varargs|openArray|typed|untyped|auto")
            ))))))
(primaryTypeDef 
  (primarySuffix
    (indexSuffix
      (exprColonEqExprList
        (exprColonEqExpr
          (expr
            (primary
              (symbol) @type.builtin)
              (#match? @type.builtin "int|float|string|cstring|bool|array|seq|tuple|set|varargs|openArray|typed|untyped|auto")
            ))))))
; @type.builtin    ; built-in types

(typeDef (keyw) @keyword (symbol) @type.definition)
;@type.definition ; type definitions (e.g. `typedef` in C)

(typeDesc (primaryTypeDesc (primaryPrefix (keyw) @type.qualifier)))
(typeDef (primaryTypeDef (primaryPrefix (keyw) @type.qualifier)))
(conceptParam (keyw)  @type.qualifier)
;@type.qualifier  ; type qualifiers (e.g. `const`)

;@storageclass    ; modifiers that affect storage in memory or life-time
;@attribute       ; attribute annotations (e.g. Python decorators)

(objectPart (symbol) @variable)
; has to be here because below is more specific

(objectDecl (objectPart (symbol) @field))
(primary (primarySuffix (qualifiedSuffix (symbol) @field)))
(objectConstr (symbolColonExpr (symbol) @field))
(tupleConstr (symbolColonExpr (symbol) @field))
(tupleDecl (identColon (ident) @field))
;@field           ; object and struct fields

(primary
  (primarySuffix (qualifiedSuffix (symbol) @function.call))
  . (primarySuffix (functionCall ["(" ")"] @function.call)))

;@property        ; similar to `@field`

(tupleDesc (identColon (ident) @variable))
(conceptParam (symbol) @variable)
(forStmt (symbol) @variable)
(declaration (variable (keyw) @keyword (declColonEquals (symbol) @variable)))
;@variable         ; various variable names

((primary (symbol) @variable.builtin) 
  (#match? @variable.builtin "result"))
;@variable.builtin ; built-in variable names (e.g. `this`)


(enumElement (symbol) @constant)
(declaration (constant (keyw) @keyword (declColonEquals (symbol) @constant)))
;@constant         ; constant identifiers

;@constant.builtin ; built-in constant values
;@constant.macro   ; constants defined by the preprocessor

;@namespace        ; modules or namespaces
;@symbol           ; symbols or atoms
