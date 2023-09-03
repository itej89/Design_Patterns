#include "Button.h"
#include "Checkbox.h"
#include "stdio.h"

#include "GUIFactory.h"
#include <cstdio>
#include <memory>

using namespace DP;

void GUIFactory::renderGUI(){

    /*!
    Create ui elements
    */
    std::shared_ptr<Button> btn = createButton();
    std::shared_ptr<Checkbox> chk = createCheckbox();

    /*!
    Register UI elemtnts events
    */
    btn->onClick();
    chk->onCheck();

    /*!
    Render UI elements
    */
    btn->render();
    chk->render();
}