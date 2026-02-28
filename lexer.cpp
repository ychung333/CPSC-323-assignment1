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

Token identifierFSM(){

}

Token realFSM() {

}

Token integerFSM() {
    
}