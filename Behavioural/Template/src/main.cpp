#include <iostream>
#include <memory>
#include <cstring>

#include "ConcreteClass1.h"
#include "ConcreteClass2.h"
#include "VersionConfig.h"


int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << TemplatePattern_VERSION_MAJOR << std::endl;
    
    /**
     * @brief Template algorithm1
     * 
     */
    DP::ConcreteClass1 concreteClass1;
    concreteClass1.TemplateMethod();

    /**
     * @brief Template algorithm2
     * 
     */
    DP::ConcreteClass2 concreteClass2;
    concreteClass2.TemplateMethod();

    return 0;
    
}