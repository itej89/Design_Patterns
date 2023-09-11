#pragma once


#include "Visitor.h"

namespace DP {

    class ConcreteVisitor2 : public Visitor {
        public:
        /**
         * @brief Visitor method to be called by the componentA
        with relevent informatio as argument
         * 
         * @param element 
         */
        void VisitConcreteComponentA(std::shared_ptr<ConcreteComponentA> element) const override;
        
        /**
         * @brief Visitor method to be called by the componentB
        with relevent informatio as argument
         * 
         * @param element 
         */
        void VisitConcreteComponentB(std::shared_ptr<ConcreteComponentB>  element) const override;
    };
}


