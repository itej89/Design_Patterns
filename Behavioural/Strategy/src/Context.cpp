#include "Context.h"
#include <cstdio>

using namespace DP;

Context::Context(std::unique_ptr<Strategy> &&strategy):
    _strategy(std::move(strategy)){
}

void Context::setStrategy(std::unique_ptr<Strategy>&& strategy){
    _strategy = std::move(strategy);
}

void Context::doSomeTask(){
    if(_strategy){
        std::string result = _strategy->doAlgorithm("abcdefghijklmnopqrstuvwxyz");
        std::printf("Data  : %s\n", result.c_str());
    }
}