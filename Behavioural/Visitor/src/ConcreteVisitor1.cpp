#include <iostream>

#include "ConcreteVisitor1.h"
#include "ConcreteComponentA.h"
#include "ConcreteComponentB.h"

using namespace DP;

void ConcreteVisitor1::VisitConcreteComponentA(std::shared_ptr<ConcreteComponentA> element) const {
    std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor1\n";
}
void ConcreteVisitor1::VisitConcreteComponentB(std::shared_ptr<ConcreteComponentB>  element) const {
    std::cout << element->SpecialMethodOfConcreteComponentB() << " + ConcreteVisitor1\n";
}

