#include <iostream>
#include <memory>
#include <cstring>

#include "VersionConfig.h"

#include "Receiver.h"
#include "SimpleCommand.h"
#include "ComplexCommand.h"

#include "Invoker.h"
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
    std::cout << "Software version :" << 
        CommandPattern_VERSION_MAJOR << std::endl;

    std::shared_ptr<DP::Receiver> receiver = 
        std::make_shared<DP::Receiver>();

    std::shared_ptr<DP::SimpleCommand> simpleCommand
    
            = std::make_shared<DP::SimpleCommand>("payload 0");

    std::shared_ptr<DP::ComplexCommand> complexComamnd
    
            = std::make_shared<DP::ComplexCommand>(receiver, "payload 1", "payload 2");

    DP::Invoker invoker;

    invoker.setOnStart(simpleCommand);
    invoker.setOnFinish(complexComamnd);

    invoker.PerformTask();

    return 0;
    
}