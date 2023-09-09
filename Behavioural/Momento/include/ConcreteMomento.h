#pragma once

#include "Momento.h"
#include <string>

namespace DP {

    /**
     * @brief Concrete class implementaiton of Momento type
     * 
     */
    class ConcreteMomento: public Momento{
        private:
            /*!
            Internal snapshot state information
            */
            std::string state_;

            /*!
            Internal snapshot date information
            */
            std::string date_;

        public:

            /**
             * @brief Construct a new Concrete Momento object
             * 
             * @param state 
             */
            ConcreteMomento(std::string state);

            /**
             * @brief Gets state of the snapshot
             * 
             * @return std::string 
             */
            std::string state() const override;

            /**
             * @brief Gets date of the snapshot
             * 
             * @return std::string 
             */
            std::string date() const override;

            /**
             * @brief Get the Name of the snapshot
             * 
             * @return std::string 
             */
            std::string GetName() const override;
    };

}