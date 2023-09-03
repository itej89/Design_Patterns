#pragma once

#include "Button.h"
#include "Checkbox.h"
#include "GUIFactory.h"

namespace DP {

/**
 * @brief Mac GUI factory class
 * 
 */
    class MacGUIFactory: public GUIFactory{
        public:
            /**
            * @brief Create a Button objectCreate Mac button
            * 
            * @return Button 
            */
            std::shared_ptr<Button> createButton() override;

            /**
             * @brief Create a Mac Checkbox object
             * 
             * @return Checkbox 
             */
            std::shared_ptr<Checkbox> createCheckbox() override;
    };

}