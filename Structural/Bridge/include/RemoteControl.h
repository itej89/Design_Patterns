#pragma once

#include "device.h"
#include <memory>

namespace DP {

    /**
     * @brief Remote control class
     * 
     */
    class RemoteControl{
        protected:
            /*!
            Device to be controlled
            */
            std::shared_ptr<Device> device;

        public:
            RemoteControl(std::shared_ptr<Device> _device);

            /*!
            Toggle power to device
            */
            void togglePower();

            /*!
            Increase volume
            */
            void volumeDown();

            /*!
            Reduce volume
            */
            void volumeUp();

            /*!
            Step down a channel
            */
            void channelDown();

            /*!
            Step up a channel
            */
            void channelUp();
    };

}