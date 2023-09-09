#include "Component2.h"
#include <cstdio>

using namespace DP;

void Component2::DoC(){
     std::printf("Doing C\n");
}

void Component2::DoD(){
    if(mediator)
    mediator->Notify(shared_from_this(), "D");    
}