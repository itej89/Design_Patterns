#include <iostream>
#include <memory>
#include <cstring>
#include <vector>

#include "VersionConfig.h"

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

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
    std::cout << "Software version :" << PrototypePattern_VERSION_MAJOR << std::endl;
   
    std::vector<std::shared_ptr<DP::Shape>> shapes;

    shapes.push_back(std::make_shared<DP::Circle>(2,3, 56));
    shapes.push_back(std::make_shared<DP::Rectangle>(3,4));
    shapes.push_back(shapes.at(0)->clone());
    shapes.push_back(shapes.at(1)->clone());
    

    return 0;
    
}