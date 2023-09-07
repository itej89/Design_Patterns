#pragma once

#include "AbstractHandler.h"

namespace DP {

    /**
     * @brief  Squirrel Handler type
     * 
     */
    class SquirrelHandler: public AbstractHandler{
        public:

            /**
             * @brief Handles Squirrel related requests
             * 
             * @param request 
             * @return std::string 
             */
            std::string Handle(std::string request) override;
    };
}