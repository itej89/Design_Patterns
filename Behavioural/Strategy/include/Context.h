#pragma once

#include <memory>
#include "Strategy.h"

namespace DP {

    /**
     * @brief Context class that performs business tasks
     * 
     */
    class Context{
        private:

            /**
             * @brief Private reference to a strategy type
             * 
             */
            std::unique_ptr<Strategy> _strategy;

        public:
            /**
             * @brief Construct a new Context object
             * 
             * @param strategy 
             */
            explicit Context(std::unique_ptr<Strategy> &&strategy={});

            /**
             * @brief Set the Strategy object
             * 
             * @param strategy 
             */
            void setStrategy(std::unique_ptr<Strategy>&& strategy);

            /**
             * @brief do some task
             * 
             */
            void doSomeTask();

    };
}