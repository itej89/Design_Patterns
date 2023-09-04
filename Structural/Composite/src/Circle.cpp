#include "Circle.h"
#include "Dot.h"
#include <cstdio>

using namespace DP;

Circle::Circle(std::string name, int x, int y, float radius):
Dot(name, x, y), radius(radius){}

void Circle::draw(){
    std::printf("%s drawn.\n", name.c_str());
}