#pragma once

#include <memory>

#include "Button.h"

namespace DP {
    
    /**
     * @brief Interface class for Dialog type
     * 
     */
    class Dialog{

        public:
            /**
            * @brief Create a Button object - TO BE implemented by subclass
            * 
            * @return std::shared_ptr<Button> 
            */
            virtual std::shared_ptr<Button> createButton() = 0;

            /**
             * @brief render method
             * 
             */
            void render();

    };
}
