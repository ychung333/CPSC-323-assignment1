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

Token identifierFSM(string& word, istream inputFile)
{
    enum STATE {IN_LETTER, ACCEPTED};

    STATE this_State = IN_LETTER;
    string lexeme = word;
}

Token realFSM(string& word, istream inputFile)
{
}

Token integerFSM(string& word, istream inputFile)
{
}

Token nextToken()
{
// This function will call the actual fsm.
// Don't worry about checking if the first char is a letter or digit in the FSM,
// as that will be checked in this function before calling the FSM


}