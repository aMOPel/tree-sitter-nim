; (keyw) @keyword             ; various keywords

(comment)
@comment               ; line and block comments

(docComment)
@comment.documentation ; comments documenting code

(ERROR)
@error                 ; syntax/parser errors

;@none                  ; completely disable the highlight

(pragma)
@preproc               ; various preprocessor directives & shebangs

;@define                ; preprocessor definition directives

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
(custom_numeric_lit)
]
@number               ; numeric literals


(float_lit)
@float                ; floating-point number literals


(routine (symbol [(ident) (operator)] @function)) 
(routine (paramList ["(" ")"] @function))
(routine "=" @function)
; @function         ; function definitions

;@function.builtin ; built-in functions

;(cmdCall)
(functionCall ["(" ")"] @function.call) 
; @function.call    ; function calls

(routine (pragma) @function.macro)
;@function.macro   ; preprocessor macros

;@method           ; method definitions
;@method.call      ; method calls

(primary (symbol (ident) @constructor) . (primarySuffix (objectConstr ["(" ")"] @constructor)))
;@constructor      ; constructor calls and definitions

(paramList (paramColonEquals (symbol) @parameter))
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
(raiseStmt (keyw) @keyword.return)
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
;@conditional         ; keywords related to conditionals (e.g. `if` / `else`)

;@conditional.ternary ; ternary operator (e.g. `?` / `:`)

(forStmt (keyw) @repeat)
(whileStmt (keyw) @repeat)
;@repeat              ; keywords related to loops (e.g. `for` / `while`)

;@debug               ; keywords related to debugging
;@label               ; GOTO and other labels (e.g. `label:` in C)

(importStmt (keyw) @include)
(includeStmt (keyw) @include)
(fromStmt (keyw) @include)
(importExceptStmt (keyw) @include)
(exportStmt (keyw) @include)
;@include             ; keywords for including modules (e.g. `import` / `from` in Python)

(tryStmt (keyw) @exception)
(tryExceptStmt (keyw) @exception)
(tryFinallyStmt (keyw) @exception)
;@exception           ; keywords related to exceptions (e.g. `throw` / `catch`)

(typeDesc) @type
(genericParam (symbol) @type)
(primaryTypeDef (symbol) @type)
(tupleDecl (keyw) @type)
(enumDecl (keyw) @type)
(objectDecl (keyw) @type)
(conceptDecl (keyw) @type)
;@type            ; type or class definitions and annotations

;@type.builtin    ; built-in types

(typeDef (symbol) @type.definition)
;@type.definition ; type definitions (e.g. `typedef` in C)

(typeDesc (primaryTypeDesc (primaryPrefix (keyw) @type.qualifier)+))
;@type.qualifier  ; type qualifiers (e.g. `const`)

;@storageclass    ; modifiers that affect storage in memory or life-time
;@attribute       ; attribute annotations (e.g. Python decorators)

(primary (primarySuffix (qualifiedSuffix (symbol) @field)))
;@field           ; object and struct fields

;@property        ; similar to `@field`

(primary (symbol) @variable)
(
	(declaration (variable (keyw) @keyword (declColonEquals (symbol) @variable)))
    (#match? @keyword "(let)|(var)|(using)")
)
;@variable         ; various variable names

(
	(primary (symbol) @variable.builtin) 
    (#match? @variable.builtin "result")
)
@variable.builtin ; built-in variable names (e.g. `this`)

(
	(declaration (variable (keyw) @keyword (declColonEquals (symbol) @constant)))
    (#match? @keyword "const")
)
;@constant         ; constant identifiers

;@constant.builtin ; built-in constant values
;@constant.macro   ; constants defined by the preprocessor

;@namespace        ; modules or namespaces
;@symbol           ; symbols or atoms

