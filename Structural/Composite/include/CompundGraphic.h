#pragma once

#include <vector>
#include <memory>

#include "Graphic.h"

namespace DP {

    /**
     * @brief Class type for Compound Graphic
     * 
     */
    class CompundGraphic: public Graphic{
        private:
            /*!
            Array to store the sub elements
            */
            std::vector<std::shared_ptr<Graphic>> children;

        public:
            /**
             * @brief Adds sub elements
             * 
             * @param child 
             */
            void add(std::shared_ptr<Graphic> child);

            /**
             * @brief Removes sub element
             * 
             * @param child 
             */
            void remove(std::shared_ptr<Graphic> child);

            /**
             * @brief Moves all sub elements as part of composite
             * 
             * @param x 
             * @param y 
             */
            void move(int x, int y) override;

            /*!
            Implement draw method
            */
            void draw() override;
    };
}