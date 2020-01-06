#ifndef EX3_NEW_SLEEPCOMMAND_H
#define EX3_NEW_SLEEPCOMMAND_H

#include "Command.h"

class SleepCommand: public Command {
public:
    virtual void execute(vector<string>::iterator &it);
};


#endif //EX3_NEW_SLEEPCOMMAND_H
