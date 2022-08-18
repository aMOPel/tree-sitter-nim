# 🚫 NOT READY FOR USE 🚫

# tree-sitter-nim
tree-sitter parser for the nim programming language

## ⚠️  __WIP__ ⚠️

In [`test/corpus/`](test/corpus/), are all the tests that are currently working.

Looking at that, you can see that quite a lot of language features are already working.

### Roadmap
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

### Contributions

Contributions are welcome.
I'm trying to put comments where things are too cryptic.

__parser:__

I've added a list of TODOs at the top of the [`grammar.js` file](grammar.js).

If you make a contribution, changing something `grammar.js`,
please make sure the parser builds without problems:

`tree-sitter generate`

And the all tests still work:

`tree-sitter test`

__queries:__

If you're experienced in writing TS queries, you can also get started on writing queries for
`nvim-treesitter` and/or make proposals to change the rules structure in some way.

__Be warned__, that the rule structure is still subject to change, entailing an update to the queries.
