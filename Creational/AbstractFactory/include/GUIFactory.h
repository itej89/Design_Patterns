#pragma once
#include <memory>


#include "Button.h"
#include "Checkbox.h"

namespace DP {

/**
 * @brief Abstract class to create GUI factory for different OS
 * 
 */
    class GUIFactory{
        public:

        /**
         * @brief Create a Button object
         * 
         * @return Button 
         */
        virtual std::shared_ptr<Button> createButton() = 0;

        /**
         * @brief Create a Checkbox object
         * 
         * @return Checkbox 
         */
        virtual std::shared_ptr<Checkbox> createCheckbox() = 0;

        /**
         * @brief Render GUI
         * 
         */
        void renderGUI();

    };

}
