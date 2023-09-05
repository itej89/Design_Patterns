#pragma once

#include <sstream>
#include <string>

namespace DP {
    class TreeType{
        public:

            std::string name;
            std::string color;
            std::string texture;
            
            TreeType(std::string _name,
                    std::string color, std::string texture);
            
            void draw(int x, int y);
    };
}