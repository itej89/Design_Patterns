#pragma once

#include <string>
namespace DP {

    /**
     * @brief Graphic Abstract Interface
     * 
     */
    class Graphic{
        protected:
            std::string name;

        public:
            Graphic();

            Graphic(std::string name);

            /*!
            Implement move method
            */
            virtual void move(int x, int y) = 0;

            /*!
            Implement draw method
            */
            virtual void draw() = 0;

    };
}