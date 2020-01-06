#ifndef EX3_NEW_PRINTCOMMAND_H
#define EX3_NEW_PRINTCOMMAND_H

#include <map>
#include <iostream>
#include "Command.h"
#include "SymbolTable.h"


class PrintCommand: public Command{
    SymbolTable* symbolTable;
public:
    PrintCommand(SymbolTable *newSymbolTbl) {
        this->symbolTable = newSymbolTbl;
    }

    virtual void execute(vector<string>::iterator &it);
};


#endif //EX3_NEW_PRINTCOMMAND_H
