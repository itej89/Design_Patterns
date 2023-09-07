#include <cstdio>
#include <iostream>
#include <memory>
#include <cstring>

#include "Handler.h"
#include "VersionConfig.h"

#include "CowHandler.h"
#include "SquirrelHandler.h"
#include "MonkeyHandler.h"

#include "Handler.h"

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
    std::cout << "Software version :" << CORPattern_VERSION_MAJOR << std::endl;
   
    std::shared_ptr<DP::MonkeyHandler> _monkeyHandler = 
        std::make_shared<DP::MonkeyHandler>();

    std::shared_ptr<DP::SquirrelHandler> _squirrelHandler = 
        std::make_shared<DP::SquirrelHandler>();

    std::shared_ptr<DP::CowHandler> _cowHandler = 
        std::make_shared<DP::CowHandler>();

    /*!
    Build the chain of responsibility
    */
    _monkeyHandler->SetNext(_squirrelHandler)->SetNext(_cowHandler);

    /*!
    Call Chain of responsibility
    */
    std::printf("%s ", _monkeyHandler->Handle("Banana").c_str());
    std::printf("%s ", _monkeyHandler->Handle("nut").c_str());
    std::printf("%s ", _monkeyHandler->Handle("Grass").c_str());
    
    return 0;
    
}