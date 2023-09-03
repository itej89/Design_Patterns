#pragma once

#include "Button.h"

namespace DP {

/**
 * @brief Windows specific button implementation
 * 
 */
    class WinButton: public Button{
        public:

            /**
             * @brief Renders a Windows button
             * 
             */
            void render() override;

            /**
             * @brief onClick registration of Windows button
             * 
             */
            void onClick() override;

    };

}
