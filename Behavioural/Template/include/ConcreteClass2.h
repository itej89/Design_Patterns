#pragma once

#include "Abstract.h"
namespace DP {
    class ConcreteClass2: public Abstract{
        public:

            /**
             * @brief RequiredOperation1 - subclass implementation necessary
             * 
             */
            void RequiredOperation1() const;

            /**
             * @brief RequiredOperation2 - subclass implementation necessary
             * 
             */
            void RequiredOperation2() const;
    };
}