#include <iostream>
#include <memory>
#include <cstring>

#include "ConcreteComponentA.h"
#include "ConcreteComponentB.h"
#include "ConcreteVisitor1.h"
#include "ConcreteVisitor2.h"
#include "VersionConfig.h"
#include "Visitor.h"


int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << VisitorPattern_VERSION_MAJOR << std::endl;
    
    /**
     * @brief Create Visitors
     * 
     */
    std::shared_ptr<DP::ConcreteVisitor1> visitor = 
        std::make_shared<DP::ConcreteVisitor1>();
    std::shared_ptr<DP::ConcreteVisitor2> visitor2 = 
        std::make_shared<DP::ConcreteVisitor2>();

    /**
     * @brief Create Components
     * 
     */
    std::shared_ptr<DP::ConcreteComponentA> componentA = 
        std::make_shared<DP::ConcreteComponentA>();

    std::shared_ptr<DP::ConcreteComponentB> componentB = 
        std::make_shared<DP::ConcreteComponentB>();
    

    /**
     * @brief Pass visitor1 to components
     * 
     */
    componentA->Accept(visitor);
    componentB->Accept(visitor);

    /**
     * @brief Pass visitor2 to components
     * 
     */
    componentA->Accept(visitor2);
    componentB->Accept(visitor2);

    return 0;
    
}