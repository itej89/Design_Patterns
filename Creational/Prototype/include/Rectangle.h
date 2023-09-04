#pragma once

#include "Shape.h"

namespace DP {
    class Rectangle: public Shape{
        private:
            int width;
            int height;

        public:

            /**
             * @brief Construct a new Rectangle object
             * 
             * @param _width 
             * @param _height 
             */
            Rectangle(int _width, int _height);

            /**
             * @brief Construct a new Rectangle object from given 
             * object
             * @param obj 
             */
            Rectangle(Rectangle &obj);

            /**
             * @brief Clones rectangle object
             * 
             * @return Shape 
             */
            std::shared_ptr<Shape> clone() override;
    };
}