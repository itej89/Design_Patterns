#pragma once

#include "Graphic.h"

namespace DP {

    /**
     * @brief Class type for Dot objects
     * 
     */
    class Dot: public Graphic{
        private:
            int x, y;

        public:
            Dot(std::string name, int x, int y);

            void move(int x, int y) override;
            void draw() override;

    };
}