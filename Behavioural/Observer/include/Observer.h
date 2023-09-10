#pragma once

#include "Subject.h"
#include "IObserver.h"

namespace DP {

    class Observer: public IObserver{
        private:
            std::string _message;
            Subject &subject_;
            static int static_number_;
            int number_;

        public:
            /**
            * @brief Construct a new Observer object
            * 
            */
            Observer(Subject &subject);

            /**
             * @brief Update method for subscribers
             * 
             * @param message_from_Subject 
             */
            void Update(const std::string message_from_Subject) override;

            /**
             * @brief Method to remove the observer from the list 
             * 
             */
            void RemoveMeFromTheList();

            /**
             * @brief prints observer information
             * 
             */
            void PrintInfo();
    };

}