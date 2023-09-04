#pragma once

namespace DP {

    /**Square peg type
     * @brief 
     * 
     */
    class SquarePeg{
        private:
            /*!
            Width of the Square peg
            */
            float width;

        public:
            
            /*!
            Build Square peg
            */
            SquarePeg();
            
            /*!
            Build Square peg
            */
            SquarePeg(float _width);

            /*!
            Fetches the width of Square peg
            */
            float getWidth();

    };
}