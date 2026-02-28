#include "lexer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <unordered_set>
using namespace std;

// Removed token struct as it was already defined in lexer.h

const unordered_set<string> KEYWORDS = { // using an unordered_set for quick lookup times when checking to see if a word in and because order does not matter a keyword
    "integer", "if", "otherwise", "fi", "while", "return", "read", "write"
};

Lexer::Lexer(ifstream& inputFile) : fin(inputFile) {
    getChar(); // initialize the first character
}
void Lexer::getChar() {
    currentChar = fin.get();
}
void Lexer::skipWhitespace() {
    while (isspace(currentChar)) {
        getChar();
    }
}

void Lexer::skipComment() {
    if (currentChar == '/' && fin.peek() == '*') {
        getChar();
        getChar();

        while (!(currentChar == '*' && fin.peek() == '/')) {
            getChar();
        }

        getChar();
        getChar();
    }
}

Token Lexer::identifierFSM(){

}

Token realFSM() {

}

Token integerFSM() {
    
}