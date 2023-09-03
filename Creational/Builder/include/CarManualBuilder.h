#pragma once

#include "Builder.h"
#include "CarManual.h"

namespace DP {

    /**
     * @brief Class to build Car manual
     * 
     */
    class CarManualBuilder: public Builder{
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
             * @brief Get the Result created manual
             * 
             * @return CarManual 
             */
            CarManual getResult();
    };

}