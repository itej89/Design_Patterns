#pragma once

#include "Command.h"
#include <memory>

namespace DP {

    /**
     * @brief Invoker class type
     * 
     */
    class Invoker{
        private:
            /*!
            Point er ot onStart Command event
            */
            std::shared_ptr<Command> _onStart;

            /*!
            Pointer to onFinish Command event
            */
            std::shared_ptr<Command> _onFinish;


        public:
            /*!
            Setter for on Start Command
            */
            void setOnStart(std::shared_ptr<Command> onStart);

            /*!
            Setter for on Finish Command
            */
            void setOnFinish(std::shared_ptr<Command> onFinish);

            /*!
            Performing Task
            */
            void PerformTask();
    };
    
}