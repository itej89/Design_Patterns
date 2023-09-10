#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include <cstdio>
#include <memory>

using namespace DP;


/**
    * @brief State interface method 1 implementation
    * 
    */
void ConcreteStateB::Handle1(){
    std::printf("concrete class Handle1\n");
}

/**
    * @brief State interface method 2 implementation
    * 
    */
void ConcreteStateB::Handle2(){
    std::printf("ConcreteClassB Handle2 -> ConcreteClassA\n");
    std::shared_ptr<ConcreteStateA> concreteStateA = std::make_shared<ConcreteStateA>();
    _context->TrasitionTo(concreteStateA);
}