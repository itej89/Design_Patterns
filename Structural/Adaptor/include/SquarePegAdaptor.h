#pragma once

#include "RoundPeg.h"
#include "SquarePeg.h"


namespace DP {

    /**
     * @brief Squarepeg adoptor for Roundhole service
     * 
     */
    class SquarePegAdopter: public RoundPeg{
        private:
            SquarePeg &squarePeg;

        public:
            /**
             * @brief Construct a new Square Peg Adopter object
             * 
             * @param obj 
             */
            SquarePegAdopter(SquarePeg &obj);

            /**
             * @brief Returns the radius of the Square peg's circumcircle
             * 
             * @return float 
             */
            float getRadius();
    };  
}