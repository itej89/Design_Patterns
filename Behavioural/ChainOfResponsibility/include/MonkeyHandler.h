#pragma once

#include "AbstractHandler.h"

namespace DP {

    /**
     * @brief  Monkey Handler type
     * 
     */
    class MonkeyHandler: public AbstractHandler{
        public:

            /**
             * @brief Handles monkey related requests
             * 
             * @param request 
             * @return std::string 
             */
            std::string Handle(std::string request) override;
    };
}