#pragma once


namespace DP {

/**
 * @brief abstract class for Button
 * 
 */
    class Button{
        public:

            /**
             * @brief Implement Render button
             * 
             */
            virtual void render() = 0;
            
            /**
             * @brief Implement onClick registration 
             * 
             */
            virtual void onClick() = 0;

    };

}
