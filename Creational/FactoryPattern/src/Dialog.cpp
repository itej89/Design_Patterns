#include <iostream>

#include "Dialog.h"

using namespace DP;


void Dialog::render(){
    std::shared_ptr<Button> btn = createButton();
    btn->onClick();
    btn->render();
}