#pragma once

#include <string>

namespace DP {

    /**
     * @brief Observer type
     * 
     */
    class IObserver{
        public:
            virtual void Update(const std::string message_from_Subject) = 0;
    };
}