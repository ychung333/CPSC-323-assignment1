#include <iostream>
#include <fstream>
#include "lexer.h"
using namespace std;

int main() 
{

    ifstream fin;   // file input
    ofstream fout;  // file output
    string inputFileName;  // store text

    // ask user to input test case that user want to work on
    cout << "Enter the name of source file: ";
    cin >> inputFileName;

    fin.open(inputFileName);   // open file

    // if file name is wrong or has any issue 
    if (!fin) 
    {
        cout << "Error: Cannot open file." << endl;
        return 1;
    }

    // make output file and write to it
    string outputFileName = "fout_" + inputFileName;
    fout.open(outputFileName);

    Lexer lexer(fin);  // create lexer

    Token token;  // create variable for token

    // it read token and print them to output file until there is no more to read
    while (true) 
    {
        token = lexer.nextToken();

        if (token.type == "EOF")
            break;

        fout << token.type << "\t\t" 
             << token.lexeme << endl;
    }

    cout << "Tokenization complete." << endl;
    cout << "Output written to: " << outputFileName << endl;

    // close input file and output file
    fin.close();
    fout.close();

    return 0;
}
