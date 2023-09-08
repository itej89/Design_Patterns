#include "Receiver.h"
#include <cstdio>

using namespace DP;


void Receiver::DoSomething(std::string data){
    std::printf("This task does something with %s\n", data.c_str());
}

void Receiver::DoSomethingElse(std::string data){
    std::printf("This task does something else with %s\n", data.c_str());
}