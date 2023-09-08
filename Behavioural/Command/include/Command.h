#pragma once

namespace DP {

    /**
     * @brief Command Interface
     * 
     */
    class Command{
        public:
            /**
             * @brief Execute method of command interface
             * 
             */
            virtual void Execute() = 0;
    };

}