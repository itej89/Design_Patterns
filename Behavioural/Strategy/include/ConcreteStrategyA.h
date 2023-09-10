#pragma once

#include "Strategy.h"

namespace DP {
    class ConcreteStrategyA: public Strategy{
        public:

            /**
             * @brief A specific implementation of an algorithm
             * 
             * @param data 
             * @return std::string 
             */
            std::string doAlgorithm(std::string data) override;
    };
}