#include <iostream>
#include <memory>
#include <cstring>

#include "GUIFactory.h"
#include "MacGUIFactory.h"
#include "VersionConfig.h"

#include "ApplicationFactory.h"
#include "WinButton.h"
#include "WinGUIFactory.h"

/**
 * @brief Reads command line argumetns and creates 
    appropritate dialog for the platform
 * 
 * @param argc accepts OS name as command line argument 
 * @param argv Valid commandline arguments are "Mac" or "Win"
 * @return int 
 */
int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version : " << AbstractFactoryPattern_VERSION_MAJOR << std::endl;
    
    std::shared_ptr<DP::ApplcationFactory> app;
   
    if(argc > 1){
        if(std::strcmp(argv[1], "Mac") == 0){
            std::shared_ptr<DP::MacGUIFactory> factory = std::make_shared<DP::MacGUIFactory>();
            app = std::make_shared<DP::ApplcationFactory>(factory);
        }
        else if(std::strcmp(argv[1], "Win") == 0){
            std::shared_ptr<DP::WinGUIFactory> factory = std::make_shared<DP::WinGUIFactory>();
            app = std::make_shared<DP::ApplcationFactory>(factory);
        }

        if(app != nullptr){
           app->updateGUI(); 
        }
    }

    return 0;
    
}