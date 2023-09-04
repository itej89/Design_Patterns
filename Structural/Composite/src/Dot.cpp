#include <cstdio>
#include "Dot.h"
#include "Graphic.h"

using namespace DP;

Dot::Dot(std::string name, int x, int y):Graphic(name), x(x), y(y){}

void Dot::move(int x, int y){
    std::printf("%s Move dot to (%d, %d).", name.c_str(), x, y);
}

void Dot::draw(){
    std::printf("%s Draw dot.\n", name.c_str());
}