#include <iostream>
#include <memory>
#include <cstring>

#include "Dialog.h"
#include "VersionConfig.h"
#include "LinuxDialog.h"
#include "MacDialog.h"

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
    std::cout << "Software version :" << FactoryPattern_VERSION_MAJOR << std::endl;
   
   
    if(argc > 1){
        if(std::strcmp(argv[1], "Mac") == 0){
            std::shared_ptr<DP::Dialog> dialog = 
                std::make_shared<DP::MacDialog>();
                dialog->render();
        }
        else if(std::strcmp(argv[1], "Linux") == 0){
            std::shared_ptr<DP::Dialog> dialog = 
                std::make_shared<DP::LinuxDialog>();
                dialog->render();
        }
    }

    return 0;
    
}