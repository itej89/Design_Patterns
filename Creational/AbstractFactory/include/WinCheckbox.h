#pragma once

#include "Checkbox.h"

namespace DP {

/**
 * @brief Windows specific checkbox implementation
 * 
 */
    class WinCheckbox: public Checkbox{
        
        public:

            /**
             * @brief Renders a Windows checkbox
             * 
             */
            void render() override;

            /**
             * @brief Renders a Mac checkbox
             * 
             */
            void onCheck() override;

    };

}