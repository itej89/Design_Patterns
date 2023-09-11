#pragma once

#include <string>

#include "Visitor.h"
#include "Component.h"

namespace DP {

    class ConcreteComponentB: public Component,
    public std::enable_shared_from_this<ConcreteComponentB>{
        public:

            /**
             * @brief Component interface to accept a visitor
             * 
             * @param visitor 
             */
            void Accept(std::shared_ptr<Visitor> visitor) override;


            /**
             * @brief Component specific logic for the visitor to access
             * 
             * @param visitor 
             */
            std::string SpecialMethodOfConcreteComponentB() const;
    };

}