#include "ConcreteClass1.h"
#include <cstdio>

using namespace DP;


void ConcreteClass1::RequiredOperation1() const{
    std::printf("ConcreteClass1 says: Implemented Operation1\n");
}


void ConcreteClass1::RequiredOperation2() const{
    std::printf("ConcreteClass1 says: Implemented Operation2\n");

}


void ConcreteClass1::Hook1() const{
    std::printf("ConcreteClass1 says: Implemented Hook1\n");

}