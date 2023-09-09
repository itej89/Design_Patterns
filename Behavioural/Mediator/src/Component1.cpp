#include "Component1.h"

using namespace DP;

void Component1::DoA(){
    if(mediator)
        mediator->Notify(shared_from_this(), "A");
}

void Component1::DoB(){
     std::printf("Doing B\n");   
}