#pragma once

#include "Builder.h"
#include <memory>

namespace DP {

    /**
     * @brief Director class
     * 
     */
    class Director{
        public:

            /*!
            Common method to build SUV from the builder
            */
            void BuildSUV(std::shared_ptr<Builder> builder);

            /*!
            Common method to build SportsCar from the builder
            */
            void BuildSportsCar(std::shared_ptr<Builder> builder);
    };

}