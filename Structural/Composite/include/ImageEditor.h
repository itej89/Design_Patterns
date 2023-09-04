#pragma once

#include <future>
#include <memory>
#include <vector>

#include "CompundGraphic.h"
#include "Dot.h"
#include "Circle.h"
#include "Graphic.h"


namespace DP {
    class ImageEditor{
        private:
            //Graphic element tree
            std::vector<std::shared_ptr<Graphic>> elements;

        public:
            //method to load graphic elements
            void load();

            //method to draw graphic elements
            void draw();
    };
}