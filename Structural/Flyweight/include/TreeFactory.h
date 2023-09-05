#pragma once

#include <vector>

#include "TreeType.h"

namespace DP {
    class TreeFactory{

        public:
            std::vector<TreeType> lstTrees;

            TreeType& getTreeType(std::string _name,
                    std::string color, std::string texture);
    };
}