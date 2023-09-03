#pragma once

namespace DP{

    /**
    * @brief Interface for Button type
    * 
    */
    class Button{
        
        public:
        /**
         * @brief Reder rethod to be overrided by the sub class
         * 
         */
            virtual void render() = 0;

        /**
         * @brief onClick rethod to be overrided by the sub class
         * 
         */
            virtual void onClick() = 0;

    };

}