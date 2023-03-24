# tree-sitter-nim
[Tree-Sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the [Nim](https://nim-lang.org/) programming language

## State of the Project

### Mostly working but unfinished

On the `main` branch is a version of the grammar that works for 95% of the cases.
It does fairly well, highlighting `.nim` files for example with [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter).

⚠️  However there are many minor issues and corner cases where the parsing does not
work correctly or breaks down completely. 

The grammar is still missing 2 important syntax features:
1. arbitrary parantheses eg `-(5+5)`
2. complex expressions, like if-expresssions eg `let a = if true: "foo" else: "bar"`

So syntax nodes that are part of such expressions won't be parsed correctly and
in some cases this will also break parsing on subsequent lines.

There is a [pending PR at nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter/pull/4439) to merge the highlighting queries.

### Why

The structure of the grammar on `main` is problematic and fixing all the issues
requires a major refactoring of the entire thing.

## Alternatives

### Alaviss's Neovim Plugin

[https://github.com/alaviss/nim.nvim](https://github.com/alaviss/nim.nvim)

It does a great job at highlighting, but it won't give you tree-sitter text-objects and the like.

### Alaviss's upcoming tree-sitter grammar

[https://github.com/alaviss/tree-sitter-nim/tree/rewrite](https://github.com/alaviss/tree-sitter-nim/tree/rewrite)

Still a work in progress but promising.

## Contributing Tips For Vim Users

### Snippets

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

### Write and Update Test Cases

Also have a look at my [`.lvimrc`](.lvimrc) for **extremely** convenient mappings
to write and update test cases. Their usage is explained there as well.


