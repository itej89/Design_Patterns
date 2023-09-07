#pragma once

#include <string>
#include "AbstractHandler.h"

namespace DP {

    /**
     * @brief Cow Handler type
     * 
     */
    class CowHandler: public AbstractHandler{
        public:
            /**
             * @brief Handles cow related requests
             * 
             * @param request 
             * @return std::string 
             */
            std::string Handle(std::string request) override;
    };

}