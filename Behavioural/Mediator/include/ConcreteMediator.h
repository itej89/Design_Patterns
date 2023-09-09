#pragma once
#include <memory>

#include "Component1.h"
#include "Component2.h"
#include "Mediator.h"

namespace DP {

    /**
     * @brief ConcreteMediator class type has been added
     * 
     */
    class ConcreteMediator: public Mediator{
        private:
            /**
                * @brief declare components
                * 
                */
           std::shared_ptr<DP::Component1> _component1;
           std::shared_ptr<DP::Component2> _component2;

        public:
            /**
             * @brief Construct a new Concrete Mediator object
             * 
             * @param _component1 
             * @param _component2 
             */
            ConcreteMediator(std::shared_ptr<DP::Component1> _component1, 
            std::shared_ptr<DP::Component2> _component2);

            /**
             * @brief Method to bind mediator to components
             * 
             */
            void bindComponents();

            /**
             * @brief Notify event implementation
             * 
             * @param sender 
             * @param event 
             */
            void Notify(std::shared_ptr<BaseComponent> sender, std::string event) override;
    };
}