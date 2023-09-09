#pragma once
#include "Mediator.h"
#include <memory>


namespace DP {

    /**
     * @brief Add Forward Declaration
     * 
     */
    class Mediator;

    /**
     * @brief Base Component class type
     * 
     */
    class BaseComponent: public std::enable_shared_from_this<BaseComponent>{
        protected:
            /*!
            Required poitner to the mediator
            */
            std::shared_ptr<Mediator> mediator;


        public:
            /**
             * @brief Set the Mediator object
             * 
             * @param mediator 
             */
            void setMediator(std::shared_ptr<Mediator> mediator);
    };
}