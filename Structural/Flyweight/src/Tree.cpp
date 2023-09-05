#include "Tree.h"
#include "TreeType.h"
#include <memory>

using namespace DP;

Tree::Tree(int x, int y, TreeType &type):
x(x), y(y), treeType(type){}


void Tree::draw(){
    treeType.draw(x, y);
}