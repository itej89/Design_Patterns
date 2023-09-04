#include "ImageEditor.h"
#include "Circle.h"
#include "CompundGraphic.h"
#include "Dot.h"
#include "Graphic.h"
#include <memory>
#include <string>

using namespace DP;


void ImageEditor::load(){
    std::shared_ptr<Dot> dot1 = std::make_shared<Dot>("dot1", 3, 4);
    std::shared_ptr<Circle> Circle1 = std::make_shared<Circle>("Circle1", 3, 4, 50);

    std::shared_ptr<Dot> dot2= std::make_shared<Dot>("dot2", 6, 7);;
    std::shared_ptr<Circle> Circle2 = std::make_shared<Circle>("Circle2", 6, 7, 50);;
    std::shared_ptr<CompundGraphic> CompundGraphic1= 
        std::make_shared<CompundGraphic>();
    CompundGraphic1->add(dot2);
    CompundGraphic1->add(Circle2);

    elements.push_back(dot1);
    elements.push_back(Circle1);
    elements.push_back(CompundGraphic1);

}



//method to draw graphic elements
void ImageEditor::draw(){
    for(auto v : elements){
        v->draw();
    }
}
