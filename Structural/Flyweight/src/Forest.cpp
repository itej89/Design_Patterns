#include "Forest.h"
#include "Tree.h"
#include "TreeType.h"

using namespace DP;


void Forest::platTree(int x, int y, std::string name, 
std::string color, std::string texture){

    TreeType& type = factory.getTreeType(name, color, texture);

    Tree tree(x, y, type);

    treeCollection.push_back(tree);

}

void Forest::draw(){
    for(auto vi : treeCollection){
        vi.draw();
    }
}