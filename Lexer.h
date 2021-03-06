#ifndef EX3_NEW_LEXER_H
#define EX3_NEW_LEXER_H

#include <iostream>
#include <list>
#include <vector>
#include <fstream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <sstream>

using namespace std;

class Lexer {
    vector<string> lexerOneLine(string);
    vector<string> uniteTokens(vector<string>);
public:
    Lexer(){}
    vector<vector<string>> lexerFile(string);
};

#endif //EX3_NEW_LEXER_H
