#pragma once

#include "Dialog.h"

namespace DP{

        /**
        * @brief LinuxDialog class type
        * 
        */
        class LinuxDialog: public Dialog {

            public:

            /**
             * @brief Create a Button object for Linux
             * 
             * @return std::shared_ptr<Button> 
             */
                std::shared_ptr<Button> createButton() override;
        };
}
