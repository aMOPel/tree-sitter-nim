# tree-sitter-nim
tree-sitter parser for the nim programming language

## ⚠️  __WIP__ ⚠️

Contributions are welcome.
I'm trying to put comments where things are too cryptic.

In [`test/corpus/`](test/corpus/), are all the tests that are currently working.

Looking at that you can see, quite a lot of language features are already working.

### Roadmap
__currently__

*  trying to imlement the missing language features

__next__

* try to do big integration tests, trying the parse on big nim files with complex syntax

* fix all the newly surfaced bugs

* write queries for highlighting and all the other features in 
[nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter/tree/master/queries)

This will probably entail restructuring of rules, aliasing, hiding superfluous rules etc.
