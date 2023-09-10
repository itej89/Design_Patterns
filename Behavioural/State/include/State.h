#pragma once

#include "Context.h"
#include <memory>

namespace DP {

    class Context;
    class State{
        protected:
            /**
             * @brief context for requesting state trasitions
             * 
             */
            std::shared_ptr<Context> _context;

        public:

            /**
             * @brief Set the Context object
             * 
             * @param _context 
             */
            void setContext(std::shared_ptr<Context> _context);

            /**
             * @brief State interface method 1
             * 
             */
            virtual void Handle1() = 0;

            /**
             * @brief State interface method 2
             * 
             */
            virtual void Handle2() = 0;

    };

}