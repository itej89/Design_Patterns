
#include <string>
#include <cstdio>

#include "SimpleCommand.h"

using namespace DP;

SimpleCommand::SimpleCommand(std::string payload):
payload(payload){}

void SimpleCommand::Execute(){
    std::printf("Simple command executed with %s\n", payload.c_str());
}