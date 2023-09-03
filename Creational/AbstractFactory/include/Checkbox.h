#pragma once

namespace DP {

/**
 * @brief Abstract class for checkbox
 * 
 */
    class Checkbox{
        public:

            /**
             * @brief Implemetnts render checkbox
             * 
             */
            virtual void render() = 0;

            /**
             * @brief Implements onCheck registration
             * 
             */
            virtual void onCheck() = 0;
    };

}
