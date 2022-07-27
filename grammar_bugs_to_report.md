1. bool literal isn't mentioned anywhere, `BOOL_LIT` should be added to `literal`
2. `NIL` should be `NIL_LIT` for consistency
3. `colcom` is identical to `colon`. Why differentiate?
4. `IND` without curly braces / `optInd` is not explained exactly
5. `COMMENT` should be defined as the doc string comment
6. for expression isn't explained in the manual, or elsewhere
7. `^+` and `^*` is not defined to include and optional trailing separator, but
    in reality it does, eg: `simpleStmt ^+ ';'`
8. there are many instances where the `^+` and `^*` are paraphrased in some way, for example:
  ```
  identColonEquals = IDENT (comma IDENT)* comma?
  ```
  sometimes with and sometimes without trailing separator.
  my proposition would be to change it to:
  `^+` and `^*` __don't__ allow optional trailing separators and
  `^+?` and `^*?` __do__ allow optional trailing separators.
  rewriting the example to:
  ```
  identColonEquals = IDENT ^+? comma
  ```
9. `expr` definition contains `caseStmt` which is inconsistent, because e.g.
  `forStmt` was renamed to `forExpr` just for that
<!-- 10. in import statements, when using `/` e.g. `std/strutils`, does `/` compile as an operator? -->
10. `pragmaStmt`, `importStmt`, `exportStmt`, `fromStmt` and `includeStmt` call for `optInd` but really there is no whitespace
  restriction on the compiler side
  eg:
  ```
  import std/strutils 
        except
    substr, substr
  ```
  compiles just fine
11. the current definition of `module` and `stmt`:
  ```
  module = stmt ^* (';' / IND{=})
  stmt = (IND{>} complexOrSimpleStmt^+(IND{=} / ';') DED)
       / simpleStmt ^+ ';'
  ```
  strictly requires `IND{>}` and `DED` around a `complexOrSimpleStmt`
  and makes a nim file like this:
  ```nim
  let a = 9
  ```
  impossible
12. the way `ifExpr` is defined 
  ```
  condExpr = expr colcom expr optInd
          ('elif' expr colcom expr optInd)*
           'else' colcom expr
  ifExpr = 'if' condExpr
  ```
  is completely wrong, since 
  ```
  discard if true:
    true
  else :
    echo "hi"
    true
  ```
  is valid syntax, but in the definition it allows only a single `expr` per block.
  so it should be more like this:
  ```
  condExpr = expr colcom stmt 
          ('elif' expr colcom stmt)*
           'else' colcom stmt
  ```
  which looks an awful lot like `condStmt`, so why not just do
  `ifExpr = ifStmt`, like you did with `forExpr`?
  `stmt` can be an `expr` after all, via `exprStmt`
13. `caseStmt` only appears as part of an `expr`. It should be part of the `complexOrSimpleStmt` 
  definition as well (maybe renamed to `caseExpr` for the use in `expr` for constistency)
14. `blockStmt` and `blockExpr` are excactly the same. why not define one with the other, like with the `forStmt`?
15. another example of a missed use for `^+`
  ```
  declColonEquals = identWithPragma (comma identWithPragma)* comma?
                    (':' optInd typeDesc)? ('=' optInd expr)?
  # this could  be shortened to
  declColonEquals = identWithPragma ^+? comma
                    (':' optInd typeDesc)? ('=' optInd expr)?
  ```
16. experimental feature: parameter constraints are not mentioned in the syntax, even though term rewriting macros are (called `pattern`)
    this could be done by:
  ```
  # changing
  paramList = '(' declColonEquals ^* (comma/semicolon) ')'
  # to
  paramList = '(' paramColonEquals ^* (comma/semicolon) ')'
  # and adding
  paramColonEquals = (identWithPragma ^+? identWithPragma)
                     (':' optInd typeDesc paramConstraint?)? ('=' optInd expr)?
  paramConstraint = '{' expr '}'
  ```
17. the definition of `variable` doesn't allow for pragmas like so:
  ```nim
  var x {.deprecated.}: char
  ```
  since it uses `identColonEquals`, it should probably be changed to use `declColonEquals`, this would also solve 23.
18. the operator precedence table should mention single '|' and '~' in the `OP8` row
19. `typeDesc` and `typeDefAux` have the same definition, why differentiate?
20. the definition of `typeDef` is incorrect and unnecessarily long
  ```
  typeDef = identWithPragmaDot genericParamList? '=' optInd typeDefAux
              indAndComment? / identVisDot genericParamList? pragma '=' optInd typeDefAux
              indAndComment?
  # should be
  typeDef = (identWithPragmaDot genericParamList? '=' optInd typeDefAux
              indAndComment?) / (identVisDot genericParamList? pragma '=' optInd typeDefAux
              indAndComment?)
  # and can be shortened to
  typeDef = (identWithPragmaDot genericParamList?) / (identVisDot genericParamList? pragma) 
              '=' optInd typeDefAux indAndComment?
  ```
21. the definition of `identVisDot` is incorrect
  ```
  identVisDot = symbol '.' optInd symbol OPR?
  # this strictly requires symbol.symbol, rendering the following syntax invalid
  type a = int
  # it should be
  identVisDot = symbol ('.' optInd symbol)? OPR?
  ```
22. the definition of `constant` is incorrect
  ```
  constant = (varTuple / identWithPragma) (colon typeDesc)? '=' optInd expr indAndComment
  # this doesn't allow for
  const (b, c) = (9, 9)
  # it should be
  constant = varTuple / (identWithPragma (colon typeDesc)? '=' optInd expr) indAndComment
  ```
23. `identColonEquals` should use `symbol` instead of `IDENT`, otherwise this would be invalid syntax:
  ```nim
  var `b` = 9
  ```
24. `objectPart` in `objectDecl` should be optional
  ```
  objectDecl = 'object' pragma? ('of' typeDesc)? COMMENT? objectPart
  # to
  objectDecl = 'object' pragma? ('of' typeDesc)? COMMENT? objectPart?
  ```
  else this is invalid syntax:
  ```nim
  type a = object
  ```
25. the definition of `objectPart` is incorrect
```
objectPart = IND{>} objectPart^+IND{=} DED
           / objectWhen / objectCase / 'nil' / 'discard' / declColonEquals
# to
objectPart = IND{>} (objectPart / objectWhen / objectCase / 
          'nil' / 'discard' / declColonEquals) ^+IND{=} DED
```
since the indentation is required for the other options too.
```nim
# valid syntax
type a = object 
  discard
# invalid syntax
type a = object discard
```
26. the recursive definition of `objectPart` is inconsistent with other definitions and wrong
```
objectPart = IND{>} objectPart^+IND{=} DED
           / objectWhen / objectCase / 'nil' / 'discard' / declColonEquals
```
would allow for syntax like:
```nim
type a = object 
  a: int
    b: int
```
so with 25. it should be changed to:
```
objectPart = IND{>} (objectWhen / objectCase / 
          'nil' / 'discard' / declColonEquals) ^+ IND{=} DED
```


QUESTION:

what is this syntax about?
```nim
type a = object 
  discard
  nil
```

QUESTION:

postExprBlocks
