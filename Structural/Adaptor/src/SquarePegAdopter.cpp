#include <cmath>
#include "SquarePegAdaptor.h"

#include <cstdio>

using namespace DP;

SquarePegAdopter::SquarePegAdopter(SquarePeg &obj):
squarePeg(obj){}



float SquarePegAdopter::getRadius(){
    /*!
    Compute and return half the diagonal length
    */
    float width = squarePeg.getWidth();
    float diag_length = std::sqrt((width*width + width*width));
    
    return diag_length/2;
}