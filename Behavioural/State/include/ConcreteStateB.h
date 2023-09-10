#pragma once

#include "State.h"

namespace DP {
    class ConcreteStateB: public State{ 
        public:
            /**
             * @brief State interface method 1 implementation
             * 
             */
            void Handle1() override;

            /**
             * @brief State interface method 2 implementation
             * 
             */
            void Handle2() override;
    };
}