#include <iostream>

#include "ConcreteVisitor2.h"
#include "ConcreteComponentA.h"
#include "ConcreteComponentB.h"

using namespace DP;

void ConcreteVisitor2::VisitConcreteComponentA(std::shared_ptr<ConcreteComponentA> element) const {
    std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + ConcreteVisitor2\n";
}
void ConcreteVisitor2::VisitConcreteComponentB(std::shared_ptr<ConcreteComponentB>  element) const {
    std::cout << element->SpecialMethodOfConcreteComponentB() << " + ConcreteVisitor2\n";
}

