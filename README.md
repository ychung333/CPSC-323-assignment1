We have to do following things:

Step 1 — Implement lexer()
Code:
skip whitespace
skip comments
run DFA to recognize token
return (token, lexeme)
Step 2 — Implement main()
read source file
loop until EOF
call lexer()
print token + lexeme to output file
Step 3 — Create 3 test cases
For each:
input source file
output token list
