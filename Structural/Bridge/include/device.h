#pragma once


namespace DP {

    /**
     * @brief Device class
     * 
     */
    class Device{

        public:
            /**
             * @brief Check if device is enabled
             * 
             * @return true 
             * @return false 
             */
            virtual bool isEnable() = 0;

            /**
             * @brief Enable device
             * 
             */
            virtual void enable() = 0;

            /**
             * @brief Disable device
             * 
             */
            virtual void disable() = 0;

            /**
             * @brief Get the Volume
             * 
             */
            virtual void getVolume() = 0;

            /**
             * @brief Set the Volume
             * 
             * @param value 
             */
            virtual void setVolume(float value) = 0;

            /**
             * @brief Get the Channel
             * 
             */
            virtual void getChannel() = 0;

            /**
             * @brief Set the Channel 
             * 
             * @param value 
             */
            virtual void setChannel(float value) = 0;

    };
}