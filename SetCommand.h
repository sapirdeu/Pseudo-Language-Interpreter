#ifndef EX3_NEW_SETCOMMAND_H
#define EX3_NEW_SETCOMMAND_H

#include "Command.h"
#include "Structs.h"
#include "SymbolTable.h"

class SetCommand: public Command {
private:
    FlightControl* flightControl;
    SymbolTable* symbolTable;

public:
    SetCommand(FlightControl* newFlightControl, SymbolTable* newSymbolTable){
        this->flightControl = newFlightControl;
        this->symbolTable = newSymbolTable;
    }

    virtual void execute(vector<string>::iterator &);
    bool checkIsDouble(string, double &);
};


#endif //EX3_NEW_SETCOMMAND_H
