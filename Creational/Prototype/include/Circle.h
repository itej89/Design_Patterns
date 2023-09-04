#pragma once

#include "Shape.h"

namespace DP {
    class Circle: public Shape{
        private:
            int radius;

        public:

            /**
             * @brief Construct a new Circle object
             * 
             * @param _width 
             * @param _height 
             */
            Circle(int _x, int _y, int _radius);

            /**
             * @brief Construct a new Circle object from given 
             * object
             * @param obj 
             */
            Circle(Circle &obj);

            /**
             * @brief Clones Circle object
             * 
             * @return Shape 
             */
            std::shared_ptr<Shape> clone() override;
    };
}