#pragma once

#include <vector>

#include "Tree.h"
#include "TreeFactory.h"

namespace DP {

    /**
     * @brief Forest Type Client class
     * 
     */
    class Forest{
        private:

            /**
             * @brief Container to store tree sprites with internal & external state
             * 
             */
            std::vector<Tree> treeCollection;
            DP::TreeFactory factory;

        public:

            /**
             * @brief Creates a tree sprite with internal & external state
             * 
             * @param x 
             * @param y 
             * @param name 
             * @param color 
             * @param texture 
             */
            void platTree(int x, int y, std::string name, 
            std::string color, std::string texture);

            /**
             * @brief Draws all the sprites in the list
             * 
             */
            void draw();

    };
}