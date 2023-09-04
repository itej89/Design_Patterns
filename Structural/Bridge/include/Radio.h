#pragma once

#include "device.h"

namespace DP {
    class Radio: public Device{
                    /**
             * @brief Check if device is enabled
             * 
             * @return true 
             * @return false 
             */
            bool isEnable();

            /**
             * @brief Enable device
             * 
             */
            void enable();

            /**
             * @brief Disable device
             * 
             */
            void disable();

            /**
             * @brief Get the Volume
             * 
             */
            void getVolume();

            /**
             * @brief Set the Volume
             * 
             * @param value 
             */
            void setVolume(float value);

            /**
             * @brief Get the Channel
             * 
             */
            void getChannel();

            /**
             * @brief Set the Channel 
             * 
             * @param value 
             */
            void setChannel(float value);
    };
}