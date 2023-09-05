#include "TreeFactory.h"
#include "TreeType.h"

#include <exception>

#include <cstdio>

using namespace DP;

TreeType& TreeFactory::getTreeType(std::string _name, 
    std::string color, std::string texture){

        for(auto &v : lstTrees){
            
            if(v.name == _name &&
                v.color == color &&
                v.texture ==texture)
                {
                    return  v;
                }
        }

        TreeType treeType(_name, color, texture);
        lstTrees.push_back(treeType);

        return lstTrees.back();
}


