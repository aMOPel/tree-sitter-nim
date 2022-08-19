# 🚫 NOT READY FOR USE 🚫

# tree-sitter-nim
tree-sitter parser for the nim programming language

## ⚠️  __WIP__ ⚠️

In [`test/corpus/`](test/corpus/), are all the tests that are currently working.

Looking at that, you can see that quite a lot of language features are already working.

## Roadmap

❗ In the next month or so, I won't be able to do much for this project.

__currently__

*  trying to implement the missing language features

__next__

* try to do big integration tests, trying the parse on big nim files with complex syntax

* fix all the newly surfaced bugs

* write queries for highlighting and all the other features in 
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter/tree/master/queries)

This will probably entail restructuring of rules, aliasing, hiding superfluous rules,
adding fields etc.
I've held off on perfecting the rule structure for now, since things might have to change anyways,
to accommodate the missing features. Also I didn't learn how to write queries yet.

## Contributions

Contributions are welcome.

Read [the tree-sitter docs](https://tree-sitter.github.io/tree-sitter/creating-parsers)

I'm trying to put comments where things are too cryptic.

__contribute to the parser:__

I've added a list of TODOs at the top of the [`grammar.js` file](grammar.js).
Those have been added as __issues__ to this repo. If you want to contribute please __state so
in the issue__.

If you make a contribution, changing something in `grammar.js`,
please make sure the parser builds without problems:

`tree-sitter generate`

And the all tests still work:

`tree-sitter test`

__write queries:__

If you're experienced in writing TS queries, you can also get started on writing queries for
`nvim-treesitter` and/or make proposals to change the rules structure in some way.

__Be warned__, that the rule structure is still subject to change, entailing an update to the queries.

### for vim users
I use these snippets (vsnip):
* to create rules
`javascript.json`
```json
{
  "rule": {
    "prefix": "r",
    "body": [
      "${1:rule_name}: \\$ => ${2:seq}(",
      "\t${3}",
      "),"
    ],
    "description": "tree sitter grammar rule"
  }
}
```
* to create tests
`text.json`
```json
{
  "test": {
    "prefix": "t",
    "body": [
      "==================",
      "${1:test_name}",
      "==================",
      "",
      "${2:test_body}",
      "test_body",
      "",
      "---",
      "",
      "${3:AST}",
      "AST"
    ],
    "description": "tree sitter grammar rule"
  }
}
```

As well as this in my vimrc:
```viml
" to `:make` inside the `grammar.js`
set makeprg=npx\ tree-sitter\ generate

" to run the parser inside the `grammar.js` file on the `examples/ex.nim` file, writing to `parsed.scm`
" (depends on floaterm)
nnoremap <silent> <leader>n :exec "FloatermNew --autoclose=0 --disposable npx tree-sitter parse ./examples/ex.nim \| tee ./parsed.scm"<cr>

" Insert Parsed: (for writing tests) pastes content from `parsed.scm` over current paragraph, substituting the [x - x] ranges
nnoremap <leader>ip Vip:.!cat ./parsed.scm<cr>V}:s/\ \[.*\]//g<cr>o<esc>
" Insert Example: (for writing tests) pastes content from `examples/ex.nim` over current paragraph
nnoremap <leader>ie Vip:!cat ./examples/ex.nim<cr>
" Insert Test: (for iterating on tests) pastes content from current paragraph back into `examples/ex.nim`
nnoremap <leader>it Vip:!tee ./examples/ex.nim<cr>

" runs full test suite
" (depends on dispatch)
nnoremap <leader>tt :Dispatch npx tree-sitter test<CR>

" just for syntax highlighting in queries
au MyAutoCmd Filetype scheme set ft=query
```

