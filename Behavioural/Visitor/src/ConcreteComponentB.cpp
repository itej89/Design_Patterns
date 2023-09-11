#include "ConcreteComponentB.h"

using namespace DP;


void ConcreteComponentB::Accept(std::shared_ptr<Visitor> visitor) {
    visitor->VisitConcreteComponentB(shared_from_this());
}



std::string ConcreteComponentB::SpecialMethodOfConcreteComponentB() const{
    return  "B";
}