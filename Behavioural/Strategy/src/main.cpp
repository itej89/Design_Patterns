#include <cstdio>
#include <iostream>
#include <memory>
#include <cstring>

#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Context.h"
#include "Strategy.h"
#include "VersionConfig.h"


int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << StrategyPattern_VERSION_MAJOR << std::endl;

    /**
     * @brief Use strategy A
     */
    DP::Context _context(std::make_unique<DP::ConcreteStrategyA>());
    _context.doSomeTask();

    /**
     * @brief Use one strategy B
     */
    _context.setStrategy(std::make_unique<DP::ConcreteStrategyB>());
    _context.doSomeTask();

    return 0;
    
}