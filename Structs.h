#ifndef EX3_NEW_MAP_H
#define EX3_NEW_MAP_H

#include <map>
#include <string>
#include <list>
#include "Command.h"
#include "SymbolTable.h"
#include <thread>

using namespace std;

struct CheckConnection{
    bool isConnect;
};

struct ServerFinished{
    bool exit;
    std::vector<std::thread> threads;
};

struct FlightControl{
    vector<string> controlCommand;
};

#endif //EX3_NEW_MAP_H
