#pragma once
#include <string>

namespace DP {

    /**
     * @brief Strategy class interface
     * 
     */
    class Strategy{
        public:
            virtual ~Strategy() = default;

            /**
             * @brief method interface to an algorithm for strategy
             * 
             * @param data 
             * @return std::string 
             */
            virtual std::string doAlgorithm(std::string data) = 0;
    };
}