#include <iostream>
#include <memory>
#include <cstring>

#include "VersionConfig.h"

#include "ImageEditor.h"

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
    std::cout << "Software version :" << CompositePattern_VERSION_MAJOR << std::endl;
   
    DP::ImageEditor imageEditor;

    imageEditor.load();
    imageEditor.draw();

    return 0;
    
}