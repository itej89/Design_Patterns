#pragma once

#include "BaseComponent.h"

namespace DP {
    class Component1: public BaseComponent{
        public:
            /**
             * @brief Some operation
             * 
             */
            void DoA();

            /**
             * @brief Som other operation
             * 
             */
            void DoB();
    };
}