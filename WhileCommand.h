#ifndef EX3_NEW_WHILECOMMAND_H
#define EX3_NEW_WHILECOMMAND_H

#include "Command.h"
#include "Expression.h"
#include "SymbolTable.h"
#include <iostream>

class WhileCommand: public Command{
private:
    vector<vector<string>> scope;
    SymbolTable* symbolTable;
    map<string, Command*> commandsMap;

public:
    WhileCommand(vector<vector<string>> newScope, map<string, Command*>
    newCommandsMap, SymbolTable* newSymbolTable){
        this->scope = newScope;
        this->symbolTable = newSymbolTable;
        this->commandsMap = newCommandsMap;
    }
    bool isCondCorrect(vector<string>::iterator &);
    virtual void execute(vector<string>::iterator &);
    bool checkIsDouble(string inputString, double &result);
    void cal(string, string);
};


#endif //EX3_NEW_WHILECOMMAND_H
