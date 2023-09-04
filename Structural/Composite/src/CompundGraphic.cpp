#include "CompundGraphic.h"
#include <cstdio>

#include <algorithm>
#include <exception>

using namespace DP;

void CompundGraphic::add(std::shared_ptr<Graphic> child){
    children.push_back(child);
}


void CompundGraphic::remove(std::shared_ptr<Graphic> child){
    try{
       auto l = std::remove(children.begin(), children.end(), child);
    }
    catch(std::exception e){
        std::fprintf(stderr, "Unable to remove element.");
    }

}


void CompundGraphic::move(int x, int y){
    for(auto v: children){
        v->move(x,y);
    }
}


void CompundGraphic::draw(){
    for(auto v: children){
        v->draw();
    }
}