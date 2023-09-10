#include <iostream>
#include <memory>
#include <cstring>

#include "ConcreteStateA.h"
#include "State.h"
#include "VersionConfig.h"


int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << StatePattern_VERSION_MAJOR << std::endl;
    
    std::shared_ptr<DP::ConcreteStateA> concreteStateA = 
                                    std::make_shared<DP::ConcreteStateA>();

    std::shared_ptr<DP::Context> context = std::make_shared<DP::Context>(concreteStateA);
    concreteStateA->setContext(context);



    context->Request2();
    context->Request2();
    
    return 0;
    
}