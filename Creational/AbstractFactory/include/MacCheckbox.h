#pragma once

#include "Checkbox.h"

namespace DP {


/**
 * @brief Mac specific checkbox implementation
 * 
 */
    class MacCheckbox: public Checkbox{
        
        public:

            /**
             * @brief Renders a mac checkbox
             * 
             */
            void render() override;

            /**
             * @brief onCheck registration of mac checkbox
             * 
             */
            void onCheck() override;

    };

}
