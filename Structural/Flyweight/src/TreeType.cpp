#include <cstdio>

#include "TreeType.h"

using namespace DP;

TreeType::TreeType(std::string _name,
                    std::string _color, std::string _texture):
                    name(_name), color(_color), texture(_texture){
}


void TreeType::draw(int x, int y){
    std::printf("Drew sprite at (%d, %d)\n", x, y);
}