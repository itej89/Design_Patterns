#include <cstdio>

#include "Circle.h"
#include <memory>

using namespace DP;

Circle::Circle(int _x, int _y, int _radius):
Shape(_x,_y), radius(_radius){ }

Circle::Circle(Circle &obj){
    x = obj.x;
    y = obj.y;
    radius = obj.radius;
}

std::shared_ptr<Shape> Circle::clone(){
    std::printf("Circle cloned\n");
    std::shared_ptr<Circle> objCopy = std::make_shared<Circle>(*this);
    return  objCopy;
}