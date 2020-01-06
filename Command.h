#ifndef EX3_NEW_COMMAND_H
#define EX3_NEW_COMMAND_H

#include <string>
#include <vector>

using namespace std;

class Command {
public:
    virtual void execute(vector<string>::iterator &it) = 0;
};


#endif //EX3_NEW_COMMAND_H
