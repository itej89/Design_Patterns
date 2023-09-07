#pragma once

#include "Handler.h"
#include <memory>

namespace DP {

    /**
     * @brief Abstract handler base implementation
     * 
     */
    class AbstractHandler: public Handler{

        private:
        std::shared_ptr<Handler> _next_Handler;

        public:
            /**
            * @brief Construct a new Abstract Handler object
            * 
            */
            AbstractHandler();

            /*!
            Method to handle/pass request
            */
            std::shared_ptr<Handler> SetNext(std::shared_ptr<Handler> handler) override;
            
            /*!
            Method to handle/pass request
            */
            std::string Handle(std::string request) override;
            
    };
    
}
