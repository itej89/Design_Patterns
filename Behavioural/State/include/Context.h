#pragma once

#include "State.h"
#include <memory>

namespace DP {

    class State;
    class Context: public std::enable_shared_from_this<Context>{
        private:

            /**
             * @brief Private State
             * 
             */
            std::shared_ptr<State> _state;

        public:

            Context(std::shared_ptr<State> state);  

            /**
             * @brief Method to transtiotion to next state
             * 
             * @param state 
             */
            void TrasitionTo(std::shared_ptr<State> state);

            /**
             * @brief Request1
             * 
             */
            void Request1();

            /**
             * @brief Request2
             * 
             */
            void Request2();
    };
}