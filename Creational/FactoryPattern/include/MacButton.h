#pragma once

#include "Button.h"

namespace DP{
        /**
        * @brief Implements Button type for Mac OS
        * 
        */
        class MacButton: public Button {

            public:
                /**
                * @brief Renders Mac os button
                * 
                */
                void render() override;

                /**
                 * @brief Registers onClick event for Mac OS
                 * 
                 */
                void onClick() override;
        };
}
