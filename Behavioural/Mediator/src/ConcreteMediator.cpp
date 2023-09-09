#include <cstdio>
#include <memory>

#include "ConcreteMediator.h"
#include "Component1.h"
#include "Component2.h"



using namespace DP;

ConcreteMediator::ConcreteMediator(std::shared_ptr<DP::Component1> component1, 
            std::shared_ptr<DP::Component2> component2):
            _component1(component1), _component2(component2){
            }


void ConcreteMediator::bindComponents(){
    _component1->setMediator(shared_from_this());
    _component2->setMediator(shared_from_this());
}

void ConcreteMediator::Notify(std::shared_ptr<BaseComponent> sender, std::string event){
        if(event == "A"){
            if(_component2){
            _component2->DoC();
            }
        }
        else if(event == "D"){
            if(_component1)
            _component1->DoB();
        }
    }