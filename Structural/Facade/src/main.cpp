#include <iostream>
#include <memory>
#include <cstring>

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
    std::cout << "Software version :" << FacadePattern_VERSION_MAJOR << std::endl;
    
    std::cout << "Facade pattern not implented as it is trivial." <<std::endl;
    return 0;
}