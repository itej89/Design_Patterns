#pragma once

#include <memory>
#include <string>

namespace DP {

    /**
     * @brief Handler interface
     * 
     */
    class Handler{
        public:
            /*!
            Method to handle/pass request
            */
            virtual std::shared_ptr<Handler> SetNext(std::shared_ptr<Handler> handler) = 0;
            /*!
            Method to handle/pass request
            */
            virtual std::string Handle(std::string request) = 0;
    };
}