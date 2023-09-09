#pragma once

#include <memory>
#include <string>

#include "Momento.h"

namespace DP {

    /**
     * @brief Originator Type
     * 
     */
    class Originator{
        private:

            /*!
            Originator State information to be saved and restored
            */
            std::string state_;

            /**
             * @brief Generates random string
             * 
             * @param legth 
             * @return std::string 
             */
            std::string GenerateString(int length = 10);

        public:

            /**
             * @brief Construct a new Originator object
             * 
             * @param state 
             */
            Originator(std::string state);

            /**
                * @brief 
                * 
                */
            void DoSomething();

            /**
             * @brief Saves a snapshot of the Originator state
             * 
             * @return std::shared_ptr<Momento> 
             */
            std::shared_ptr<Momento> Save();

            /**
             * @brief Restores a snapshot of the Originator state
             * 
             * @param momento 
             */
            void Restore(std::shared_ptr<Momento> momento);


    };
}