#pragma once

#include <memory>

namespace DP {
    /**
     * @brief Component Forward Declaration
     * 
     */
    class ConcreteComponentA;
    class ConcreteComponentB;
    class Visitor{
        public:
            virtual void VisitConcreteComponentA(std::shared_ptr<ConcreteComponentA> element) const = 0;
            virtual void VisitConcreteComponentB(std::shared_ptr<ConcreteComponentB> element) const = 0;
    };
}