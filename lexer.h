#ifndef LEXER_H
#define LEXER_H
#include <iostream>
#include <string>
using namespace std;

// stores token type and actual lexeme
struct Token {
    string type;
    string lexeme;
};

// reads input file and returns tokens
class Lexer {
private:
    istream& in;   // input file stream

public:
    Lexer(istream& input);  // constructor
    Token nextToken();      // returns next token
};

#endif
