#pragma once
#include <string>
#include "Command.h"

namespace DP {

    /**
     * @brief Simple commadn implementation for Comamnd interface
     * 
     */
    class SimpleCommand: public Command{
        private:
            /*!
            Data for simple command
            */
            std::string payload;
        public:
            /**
             * @brief Construct a new Simple Command object
             * 
             * @param payload 
             */
            SimpleCommand(std::string payload);

            /**
             * @brief Execute method for SimpleCommand
             * 
             */
            void Execute() override;
    };  
}