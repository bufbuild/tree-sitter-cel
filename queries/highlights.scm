; Syntax highlighting queries for CEL (Common Expression Language).
; Maps CEL grammar nodes to standard tree-sitter highlight capture names.

; Operators
[
  "-"
  "!"
  "*"
  "/"
  "&&"
  "%"
  "+"
  "<"
  "<="
  "=="
  ">"
  ">="
  "||"
] @operator

; Keywords
"in" @keyword

; Function calls
(call_expression
  function: (identifier) @function.call)

(member_call_expression
  function: (identifier) @function.method.call)

; Member access
(select_expression
  member: (identifier) @variable.member)

; Variables
(identifier) @variable

; Literals
[
  (double_quote_string_literal)
  (single_quoted_string_literal)
  (triple_double_quote_string_literal)
  (triple_single_quoted_string_literal)
] @string

[
  (int_literal)
  (uint_literal)
] @number

(float_literal) @number.float

[
  (true)
  (false)
  (null)
] @constant.builtin

(comment) @comment @spell
