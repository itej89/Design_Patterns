#pragma once

#include "Button.h"
#include "Checkbox.h"
#include "GUIFactory.h"

namespace DP {

/**
 * @brief Windoes GUI factory class
 * 
 */
    class WinGUIFactory: public GUIFactory{
        public:
            /**
             * @brief Create a Windows Button object
             * 
             * @return Button 
             */
            std::shared_ptr<Button> createButton() override;

            /**
             * @brief Create a Windows Checkbox object
             * 
             * @return Checkbox 
             */
            std::shared_ptr<Checkbox> createCheckbox() override;
    };

}