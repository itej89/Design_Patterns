#pragma once
#include <memory>
#include <string>
#include <list>
#include "IObserver.h"
#include "ISubject.h"

namespace DP {
    class Subject: public ISubject{
        private:
            std::list<IObserver*> lstObserver;
            std::string _message;

        public:

            /**
             * @brief Perform do business
             * 
             */
            void SomeBusinessLogic();

            /**
             * @brief Returns number of observers subscribed
             * 
             */
            void HowManyObserver();

            /**
             * @brief Create a Message object
             * 
             * @param message 
             */
            void CreateMessage(std::string message = "Empty");

            /**
             * @brief Attach observer to subject
             * 
             * @param observer 
             */
            virtual void Attach(IObserver* observer) override;

            /**
             * @brief Dettach observer from subject
             * 
             * @param observer 
             */
            virtual void Dettach(IObserver* observer) override;

            /**
             * @brief Notify observers about update
             * 
             */
            virtual void Notify() override;
    };

}

