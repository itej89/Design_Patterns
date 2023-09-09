#pragma once

#include "BaseComponent.h"

namespace DP {
    class Component2: public BaseComponent{
        public:
            /**
             * @brief Some operation
             * 
             */
            void DoC();

            /**
             * @brief Some other operation
             * 
             */
            void DoD();
    };
}