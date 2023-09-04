#pragma once

#include "RemoteControl.h"

namespace DP {

    /**
     * @brief Class type for advanced remote control
     * 
     */
    class AdvanceRemoteControl: public RemoteControl{
        public:
            AdvanceRemoteControl(std::shared_ptr<Device> _device);

            /**
            * @brief Mute method
            * 
            */
            void mute();

    };
}