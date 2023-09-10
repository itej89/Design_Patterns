
#include <functional>
#include <string>
#include <algorithm>

#include "ConcreteStrategyB.h"

using namespace DP;

std::string ConcreteStrategyB::doAlgorithm(std::string data){
    std::string result(data);

    /**
     * @brief Sort the given string in ascending order
     * 
     */
    std::sort(std::begin(result), std::end(result), std::greater<>());

    return  result;
}