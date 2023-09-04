#pragma once

#include <string>
#include <memory>

namespace DP {

    /**
     * @brief Abstract class for prototype
     * 
     */
    class Shape{
        public:

            /*!
            Class Variables
            */
            int x;
            int y;

            std::string color;

            /*!
            Class constructor
            */
            Shape();

            /*!
            Class constructor
            */
            Shape(int _x, int _y);

            /*!
            Copy constructor for clonign objects
            */
            Shape(Shape &obj);

            /*!
            Implement clone methods in subcalsses
            */
            virtual std::shared_ptr<Shape> clone() = 0;
    };
}