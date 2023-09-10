
#include <string>
#include <algorithm>

#include "ConcreteStrategyA.h"

using namespace DP;

std::string ConcreteStrategyA::doAlgorithm(std::string data){
    std::string result(data);

    /**
     * @brief Sort the given string in ascending order
     * 
     */
    std::sort(std::begin(result), std::end(result));

    return  result;
}