#include <iostream>
#include <memory>
#include <cstring>

#include "VersionConfig.h"

#include "Forest.h"
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
    std::cout << "Software version :" << FlyweightPattern_VERSION_MAJOR << std::endl;

    DP::Forest forest;
    forest.platTree(3, 2, "apple", "green", "soft");
    forest.platTree(5, 7, "apple", "green", "soft");
    forest.platTree(8, 9, "apple", "green", "soft");
    forest.platTree(4, 2, "lilly", "white", "delicate");

    forest.draw();

    return 0;

}