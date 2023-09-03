#include <iostream>

#include "MacButton.h"

using namespace DP;

void MacButton::render(){
    std::cout << "rendering mac button" << std::endl;
}

void MacButton::onClick(){
    std::cout << "mac button clicked event registered" << std::endl;
}