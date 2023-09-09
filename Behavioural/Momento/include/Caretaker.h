#pragma once

#include <memory>
#include <vector>
#include "Momento.h"
#include "Originator.h"

namespace DP {

    /**
     * @brief Caretaker node to save restore backups
     * 
     */
    class Caretaker{
        private:

            /*!
            Private membber variables
            */
            std::vector<std::shared_ptr<Momento>> _momentos;
            std::shared_ptr<Originator> _originator;

        public:

            /**
             * @brief Construct a new Caretaker object
             * 
             * @param originator 
             */
            Caretaker(std::shared_ptr<Originator> originator);

            /**
             * @brief Backup function for origicator states
             * 
             */
            void Backup();

            /**
             * @brief Undo function for originator states
             * 
             * @param _momento 
             */
            void Restore();

            /**
             * @brief Utility funciton to display all the saved states
             * 
             */
            void ShowHistory() const;
    };
}