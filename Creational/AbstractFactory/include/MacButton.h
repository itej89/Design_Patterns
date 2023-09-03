#pragma once

#include "Button.h"

namespace DP {


/**
 * @brief Mac specific button implementation
 * 
 */
    class MacButton: public Button{
        
        public:

            /**
             * @brief Renders a mac button
             * 
             */
            void render() override;

            /**
             * @brief onClick registration of a mac button
             * 
             */
            void onClick() override;

    };

}
