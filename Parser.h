#ifndef EX3_NEW_PARSER_H
#define EX3_NEW_PARSER_H

#include <map>
#include <string>
#include "Command.h"
#include "Lexer.h"
#include <vector>
#include "Structs.h"
#include "SymbolTable.h"
#include <unistd.h>

using namespace std;

class Parser{
private:
    map<string, Command*> commandsMap;
    vector<vector<string>> lexerFile;
    SymbolTable* symbolTable;
    vector<vector<string>> scope;
    CheckConnection* checkConnection;
    ServerFinished* serverFinished;
    FlightControl* flightControl;
    void fillCommandMap();

public:
    Parser(vector<vector<string>> newLexerFile){
            this->lexerFile = newLexerFile;
            this->symbolTable = new SymbolTable();
            this->checkConnection = new CheckConnection();
            this->checkConnection->isConnect = false;
            this->serverFinished = new ServerFinished();
            this->serverFinished->exit = false;
            this->flightControl = new FlightControl();

            this->fillCommandMap();
    }
    void parsing();
    bool checkIsDouble(string inputString, double &result);
    void cal(string, string);
};
#endif //EX3_NEW_PARSER_H
