#include "ApplicationFactory.h"
#include "GUIFactory.h"


using namespace DP;


ApplcationFactory::ApplcationFactory(std::shared_ptr<GUIFactory> _factory) :
factory(_factory){
    /*!
        ApplcationFactory Constructor
    */
}

void ApplcationFactory::updateGUI(){

    /*!
    Request factory to create components
    */
    factory->createButton();
    factory->createCheckbox();

    /*!
    Request factory to update GUI
    */
    factory->renderGUI();
}