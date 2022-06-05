;; @constant
;; @constant.builtin
;; @number
;; @comment
;; @string
;; @escape
;; @embedded
;; @operator
;; @keyword
;; @constructor
;; @function
;; @function.builtin
;; @function.method
;; @property
;; @type
; Identifier naming conventions

[
(OP0)
(OP1)
(OP2)
(OP3)
(OP4)
(OP5)
(OP6)
(OP7)
(OP8)
(OP9)
(OP10)
] @operator

[
  (INT_LIT)
  (INT8_LIT)
  (INT16_LIT)
  (INT32_LIT)
  (INT64_LIT)
  (UINT_LIT)
  (UINT8_LIT)
  (UINT16_LIT)
  (UINT32_LIT)
  (UINT64_LIT)
  (FLOAT_LIT)
  (FLOAT32_LIT)
  (FLOAT64_LIT)
] @number

[
  (CHAR_LIT)
  (STR_LIT)
  (RSTR_LIT)
  (TRIPLESTR_LIT)
] @string

(typeDesc) @type

[
  "addr"
  "and"
  "as"
  "asm"
  "bind"
  "block"
  "break"
  "case"
  "cast"
  "concept"
  "const"
  "continue"
  "converter"
  "defer"
  "discard"
  "distinct"
  "div"
  "do"
  "elif"
  "else"
  "end"
  "enum"
  "except"
  "export"
  "finally"
  "for"
  "from"
  "func"
  "if"
  "import"
  "in"
  "include"
  "interface"
  "is"
  "isnot"
  "iterator"
  "let"
  "macro"
  "method"
  "mixin"
  "mod"
  "nil"
  "not"
  "notin"
  "object"
  "of"
  "or"
  "out"
  "proc"
  "ptr"
  "raise"
  "ref"
  "return"
  "shl"
  "shr"
  "static"
  "template"
  "try"
  "tuple"
  "type"
  "using"
  "var"
  "when"
  "while"
  "xor"
  "yield"
] @keyword
