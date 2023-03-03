; [
;   "end"
;   "cast"
;   "out"
;   "using"
;   "ptr"
;   "ref"
;   "nil"
;   "addr"
; ] @keyword
(staticStmt (keyw) @keyword)
(deferStmt (keyw) @keyword)
(asmStmt (keyw) @keyword)
(bindStmt (keyw) @keyword)
(mixinStmt (keyw) @keyword)

(blockStmt
  (keyw) @keyword.control
  (symbol) @label)

(ifStmt (keyw) @keyword.control.conditional)
(whenStmt (keyw) @keyword.control.conditional)
(elifStmt (keyw) @keyword.control.conditional)
(elseStmt (keyw) @keyword.control.conditional)
(caseStmt (keyw) @keyword.control.conditional)
(ofBranch (keyw) @keyword.control.conditional)
(inlineIfStmt (keyw) @keyword.control.conditional)
(inlineWhenStmt (keyw) @keyword.control.conditional)
; todo: do

(forStmt
  (keyw) @keyword.control.repeat
  (symbol) @variable)
(whileStmt (keyw) @keyword.control.repeat)

(importStmt (keyw) @keyword.control.import) @namespace
(importExceptStmt (keyw) @keyword.control.import) @namespace
(exportStmt (keyw) @keyword.control.import) @namespace
(fromStmt (keyw) @keyword.control.import) @namespace
(includeStmt (keyw) @keyword.control.import) @namespace

(returnStmt (keyw) @keyword.control.repeat)
(yieldStmt (keyw) @keyword.control.repeat)
(discardStmt (keyw) @keyword.control.repeat)
(breakStmt (keyw) @keyword.control.repeat)
(continueStmt (keyw) @keyword.control.repeat)

(raiseStmt (keyw) @keyword.control.exception)
(tryStmt (keyw) @keyword.control.exception)
(tryExceptStmt (keyw) @keyword.control.exception)
(tryFinallyStmt (keyw) @keyword.control.exception)
(inlineTryStmt (keyw) @keyword.control.exception)
; (inlineTryExceptStmt (keyw) @keyword.control.exception)
; (inlineTryFinallyStmt (keyw) @keyword.control.exception)

[
  "and"
  "or"
  "xor"
  "not"
  "in"
  "notin"
  "is"
  "isnot"
  "div"
  "mod"
  "shl"
  "shr"
] @keyword.operator

(typeDef
  (keyw) @keyword.storage.type
  (symbol) @type)

; fixme: introspect
(typeDesc) @type

(variable
  (keyw) @keyword.storage.type
  (declColonEquals
    (symbol) @variable))

(paramList
  (paramColonEquals
    (symbol) @variable.parameter))

; broken
; (enumDecl
;   (declColonEquals
;     (symbol) @type.enum.variant))

(enumDecl (keyw) @keyword.storage.modifier)
(tupleDecl (keyw) @keyword.storage.modifier)
; objectDecl, conceptDecl not implemented
; distinct?

[(operator) (opr) "="] @operator

[
  "."
  ","
  ";"
  ":"
] @punctuation.delimiter
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "{."
  ".}"
  "#["
  "]#"
] @punctuation.bracket
; [] @punctuation.special

; [
;   "array"
;   "seq"
;   "range"
;   ; array, seq, range: *_type?
;   "int"
;   "uint"
;   "int8"
;   "int16"
;   "int32"
;   "int64"
;   "uint8"
;   "uint16"
;   "uint32"
;   "uint64"
;   "float"
;   "float32"
;   "float64"
;   "bool"
;   "string"
;   "char"
; ] @type.builtin
; [] @type.constructor

[(literal) (generalizedLit)] @constant
[(nil_lit)] @constant.builtin
[(bool_lit)] @constant.builtin.boolean
[(char_lit)] @constant.character
[(char_esc_seq)] @constant.character.escape
[(custom_numeric_lit)] @constant.numeric
[(int_lit) (int_suffix)] @constant.numeric.integer
[(float_lit) (float_suffix)] @constant.numeric.float

[(str_lit) (triplestr_lit)] @string
; [] @string.regexp
[(generalized_str_lit) (generalized_triplestr_lit)] @string.special
; [] @string.special.path
; [] @string.special.url
; [] @string.special.symbol

(comment) @comment.line
(multilineComment) @comment.block
(docComment) @comment.documentation
(multilineDocComment) @comment.block.documentation

(pragma) @attribute

; broken
; ["result"] @variable.builtin ; in function scopes only
; [] @variable.other
; [] @variable.other.member

(routine
  . (keyw) @keyword.function
  . (ident) @function)

(primary
  . (symbol (ident) @function.call)
  . (primarySuffix (functionCall)))

(primary
  (primarySuffix (qualifiedSuffix (symbol (ident) @function.call)))
  . (primarySuffix (functionCall)))

; does not appear to be a way to distinguish these without verbatium matching
; [] @function.builtin
; [] @function.method
; [] @function.macro
; [] @function.special

(keyw) @keyword

; "expr"
; "declaration"
; "varTuple"

; "exprStmt"

; "pattern"
; "genericParam"
; "genericParamList"
; "paramList"
; "paramListSuffix"
; "paramColonEquals"
; "paramConstraint"
; "declColonEquals"
; "identColonEquals"
; "paramTypeDesc"
; "exprColonEqExpr"
; "exprColonEqExprList"
; "colonBody"
; "postExprBlocks"
; "doBlock"
; "exprList"
; "primary"
; "primaryPrefix"
; "prefixOperator"
; "primarySuffix"
; "functionCall"
; "qualifiedSuffix"
; "indexSuffix"
; "patternBind"
; "cmdCall"
; "arrayConstr"
; "setOrTableConstr"
; "tupleConstr"

; "block"
