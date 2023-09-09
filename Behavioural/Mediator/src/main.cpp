#include <iostream>
#include <memory>
#include <cstring>

#include "Component1.h"
#include "Component2.h"
#include "ConcreteMediator.h"
#include "VersionConfig.h"

/**
 * @brief Reads command line argumetns and creates 
    appropritate dialog for the platform
 * 
 * @param argc 
 * @param argv Valid commandline arguments are "Mac" or "Linux"
 * @return int 
 */
int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << MediatorPattern_VERSION_MAJOR << std::endl;
    
    //Create components
    std::shared_ptr<DP::Component1> _component1 = std::make_shared<DP::Component1>();
    std::shared_ptr<DP::Component2> _component2 = std::make_shared<DP::Component2>();

    //Create mediator object
    std::shared_ptr<DP::ConcreteMediator> _mediator
     = std::make_shared<DP::ConcreteMediator>(_component1, _component2);
    
    _mediator->bindComponents();
    //Communicate through mediator-------

    _component1->DoA();
    _component2->DoD();
    //-----------------------------------

    return 0;
    
}