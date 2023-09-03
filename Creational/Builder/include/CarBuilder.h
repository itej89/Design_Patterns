#pragma once

#include "Builder.h"
#include "Car.h"

namespace DP {


    /**
     * @brief Class to build Car
     * 
     */
    class CarBuilder: public Builder{
        public:

            /*!
            Reset Builder
            */
            void reset() override;

            /*!
            Set Number of sets
            */
            void setSeats(int count) override;

            /*!
            Set Engine type
            */
            void setEngine(std::string engine) override;

            /*!
            Set GPS
            */
            void setGPS() override;

            /**
             * @brief Returns the build car
             * 
             * @return Car 
             */
            Car getResult();
    };

}