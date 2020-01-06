#ifndef EX3_NEW_DEFINEVARCOMMAND_H
#define EX3_NEW_DEFINEVARCOMMAND_H

#include <map>
#include <string.h>
#include <vector>
#include "SymbolTable.h"
#include "Command.h"
#include "VarType.h"

using namespace std;

class DefineVarCommand: public Command {
    SymbolTable *symbolTable;

public:
    DefineVarCommand(SymbolTable *newVarsSymbols) {
        this->symbolTable = newVarsSymbols;
    }

    virtual void execute(vector<string>::iterator &);

    bool checkIsDouble(string, double &);
};


#endif //EX3_NEW_DEFINEVARCOMMAND_H
