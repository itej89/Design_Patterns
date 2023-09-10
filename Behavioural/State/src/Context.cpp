#include "Context.h"
#include <cstdio>
#include <memory>

using namespace DP;


Context::Context(std::shared_ptr<State> state): _state(state){
}


void Context::TrasitionTo(std::shared_ptr<State> state){
    _state = state;
    _state->setContext(shared_from_this());
}

/**
    * @brief Request1
    * 
    */
void Context::Request1(){
    if(_state)
        _state->Handle1();
}

/**
    * @brief Request2
    * 
    */
void Context::Request2(){
    if(_state)
        _state->Handle2();
}