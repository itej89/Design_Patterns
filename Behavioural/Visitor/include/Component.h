#pragma once

#include <memory>
#include "Visitor.h"

namespace DP {

    /**
     * @brief Visitor Forward Declaration
     * 
     */
    class Visitor;
    class Component{
        public:
            /**
             * @brief Component interface to accept a visitor
             * 
             * @param visitor 
             */
            virtual void Accept(std::shared_ptr<Visitor> visitor) = 0;
    };

}