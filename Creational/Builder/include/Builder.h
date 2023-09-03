#pragma once

#include <string>


namespace DP {

    /**
     * @brief Builder abstract class
     * 
     */
    class Builder{
        public:

            /*!
            Implement Reset Builder
            */
            virtual void reset() = 0;

            /*!
            Implement Set Number of sets
            */
            virtual void setSeats(int count) = 0;

            /*!
            Implement  Set Engine type
            */
            virtual void setEngine(std::string engine) = 0;

            /*!
            Implement Set GPS
            */
            virtual void setGPS() = 0;
    };
}