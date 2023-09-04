#include <cstdio>

#include "Rectangle.h"
#include <memory>

using namespace DP;

Rectangle::Rectangle(int _width, int _height):
width(_width), height(_height){ }

Rectangle::Rectangle(Rectangle &obj){
    width = obj.width;
    height = obj.height;
}

std::shared_ptr<Shape> Rectangle::clone(){
    std::printf("Rectangle cloned\n");
    std::shared_ptr<Rectangle> objCopy = nullptr;
    return  objCopy;
}