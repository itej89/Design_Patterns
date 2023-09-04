#include "RoundHole.h"

using namespace DP;


RoundHole::RoundHole(float _radius):
radius(_radius){}


float RoundHole::getRadius(){
    return  radius;
}


bool RoundHole::fits(RoundPeg &peg){
    /*!
    Returns if the hole is larger than peg
    */
    return  radius > peg.getRadius();
}