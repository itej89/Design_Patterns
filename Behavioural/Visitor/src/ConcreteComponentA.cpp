#include "ConcreteComponentA.h"

using namespace DP;


void ConcreteComponentA::Accept(std::shared_ptr<Visitor> visitor) {
    visitor->VisitConcreteComponentA(shared_from_this());
}



std::string ConcreteComponentA::ExclusiveMethodOfConcreteComponentA() const{
    return  "A";
}