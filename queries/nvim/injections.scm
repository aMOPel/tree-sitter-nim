(raw_string_lit . (regex_string_prefix) . (content) @regex)
(multi_string_lit . (regex_string_prefix) . (content) @regex)

(raw_string_lit . (sql_string_prefix) . (content) @sql)
(multi_string_lit . (sql_string_prefix) . (content) @sql)

(multi_comment (content) @comment)
(comment (content) @comment)

(doc_comment (content) @rst)
(multi_doc_comment (content) @rst)

