#include "Shape.h"

using namespace DP;

Shape::Shape(){}

Shape::Shape(int _x, int _y): x(_x), y(_y){}

Shape::Shape(Shape &obj){
    x = obj.x;
    y= obj.y;

    color = obj.color;
}