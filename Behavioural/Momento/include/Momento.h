#pragma once

#include <string>

namespace DP {

    /**
     * @brief Momento tye interface
     * 
     */
    class Momento{
        public:

            /*!
            Get name interface
            */
            virtual std::string GetName() const = 0;

            /*!
            Date information to be stored
            */
            virtual std::string date() const = 0;

            /*!
            State to be stored in Momento
            */
            virtual std::string state() const = 0;

    };
}