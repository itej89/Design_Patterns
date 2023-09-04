#pragma once

#include "Dot.h"

namespace DP {

    /**
     * @brief Class type for Circle
     * 
     */
    class Circle: public Dot{
        private:
            /*!
            Circle radius
            */
            float radius;

        public:
            /**
            * @brief Construct a new Circle object
            * 
            * @param x 
            * @param y 
            * @param radius 
            */
            Circle(std::string name, int x, int y, float radius);

            /**
             * @brief 
             * 
             */
            void draw() override;
    };
}