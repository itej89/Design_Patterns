#pragma once

#include <string>

namespace DP {

    /**
     * @brief Receiver class that performs work after 
                recieving commands
     * 
     */
    class Receiver{
        public:

            /**
             * @brief Method to do something
             * 
             * @param data 
             */
            void DoSomething(std::string data);

            /**
             * @brief  Method to do something else
             * 
             * @param data 
             */
            void DoSomethingElse(std::string data);
    };
}