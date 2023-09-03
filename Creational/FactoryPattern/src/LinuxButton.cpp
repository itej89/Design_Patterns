#include <iostream>

#include "LinuxButton.h"

using namespace DP;

void LinuxButton::render(){
    std::cout << "rendering linux button" << std::endl;
}

void LinuxButton::onClick(){
    std::cout << "linux button clicked event registered" << std::endl;
}