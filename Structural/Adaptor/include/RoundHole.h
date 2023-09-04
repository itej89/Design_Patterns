#pragma once

#include "RoundPeg.h"

namespace DP {

    /**
     * @brief Type of Roundhole
     * 
     */
    class RoundHole{
        private:
            float radius;

        public:
            RoundHole(float _radius);

            /**
             * @brief Returns the radius of the Round hole
             * 
             * @return float 
             */
            float getRadius();

            /**
             * @brief Checks if the roundpeg fits inside the hole
             * 
             * @param peg 
             * @return true 
             * @return false 
             */
            bool fits(RoundPeg &peg);

    };
}