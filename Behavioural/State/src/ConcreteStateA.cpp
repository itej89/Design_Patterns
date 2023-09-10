#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

#include <cstdio>

using namespace DP;




/**
    * @brief State interface method 1 implementation
    * 
    */
void ConcreteStateA::Handle1(){
    std::printf("concrete class Handle1\n");
}

/**
    * @brief State interface method 2 implementation
    * 
    */
void ConcreteStateA::Handle2(){
    std::printf("ConcreteClassA Handle2 -> ConcreteClassB\n");
    _context->TrasitionTo(std::make_shared<ConcreteStateB>());
}