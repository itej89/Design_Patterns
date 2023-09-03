#pragma once

#include "Button.h"

namespace DP{

        /**
        * @brief LinuxButton class type
        * 
        */
        class LinuxButton: public Button {

            public:
            /**
             * @brief Method renderes linux button
             * 
             */
                void render() override;

            /**
             * @brief Method registers onClick event for linux button
             * 
             */
                void onClick() override;
        };
}
