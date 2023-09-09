#pragma once

#include "BaseComponent.h"
#include <memory>
#include <string>

namespace DP {

    /**
     * @brief Forward declaration
     * 
     */
    class BaseComponent;

    /**
     * @brief Mediator class
     * 
     */
    class Mediator: public std::enable_shared_from_this<Mediator>{
        public:

        /**
         * @brief Method that recived event from sender and 
            calls respective reciver method based on the event
         * 
         * @param sender 
         * @param event 
         */
        virtual void Notify(std::shared_ptr<BaseComponent> sender, std::string event) = 0;

    };
}