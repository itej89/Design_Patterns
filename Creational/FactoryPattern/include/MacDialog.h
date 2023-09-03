#pragma once

#include "Dialog.h"

namespace DP{

        /**
        * @brief  MacDialog class type
        * 
        */
        class MacDialog: public Dialog {

            public:

            /**
             * @brief Create a Button object for Mac
             * 
             * @return std::shared_ptr<Button> 
             */
                std::shared_ptr<Button> createButton() override;
        };
}
