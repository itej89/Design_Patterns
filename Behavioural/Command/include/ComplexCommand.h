#pragma once

#include "Receiver.h"
#include "Command.h"
#include <memory>
#include <sstream>
#include <string>



namespace DP {

    /**
     * @brief Complex Command Type
     * 
     */
    class ComplexCommand: public Command{
        private:

            /**
             Receiver pointer
             */
            std::shared_ptr<Receiver> _reciever;

            /*!
             A paylod
             */
            std::string _a;

            /*!
             Different Payload
             */
            std::string _b;

        public:
        
            /**
             * @brief Construct a new Complex Command object
             * 
             * @param reciever 
             * @param a 
             * @param b 
             */
            ComplexCommand(
                std::shared_ptr<Receiver> reciever,
                std::string a, std::string b);

            /**
             * @brief Execute method for SimpleCommand
             * 
             */
            void Execute() override;

    };
}