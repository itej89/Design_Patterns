#pragma once

namespace DP {

    /**Round peg type
     * @brief 
     * 
     */
    class RoundPeg{
        private:
            /*!
            Radius of the round peg
            */
            float radius;

        public:
            
            /*!
            Build round peg
            */
            RoundPeg();
            
            /*!
            Build round peg
            */
            RoundPeg(float _radius);

            /*!
            Fetches the radius of round peg
            */
            virtual float getRadius();

    };
}