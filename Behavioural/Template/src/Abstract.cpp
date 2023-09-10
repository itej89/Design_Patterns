#include "Abstract.h"
#include <cstdio>

using namespace DP;

void Abstract::TemplateMethod() const{
    this->BaseOperation1();
    this->RequiredOperation1();
    this->BaseOperation2();
    this->Hook1();
    this->RequiredOperation2();
    this->Hook2();
}


void Abstract::BaseOperation1() const{
    std::printf("Abstract says: Implemented BaseOperation1\n");
}


void Abstract::BaseOperation2() const{
    std::printf("Abstract says: Implemented BaseOperation1\n");
}