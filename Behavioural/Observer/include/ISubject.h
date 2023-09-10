#pragma once

#include <memory>

#include "IObserver.h"

namespace DP {

    /**
     * @brief Subject interface type
     * 
     */
    class ISubject{
        public:

            /**
             * @brief Attach observer to subject
             * 
             * @param observer 
             */
            virtual void Attach(IObserver* observer) = 0;

            /**
             * @brief Dettach observer from subject
             * 
             * @param observer 
             */
            virtual void Dettach(IObserver* observer) = 0;

            /**
             * @brief Notify observers about update
             * 
             */
            virtual void Notify() = 0;
    };

}