#pragma once

#include "TreeType.h"
#include <memory>

namespace DP {
    class Tree{
        private:
        int x, y;
        TreeType & treeType;

        public:
            Tree(int x, int y, TreeType &type);

            void draw();
    };
}