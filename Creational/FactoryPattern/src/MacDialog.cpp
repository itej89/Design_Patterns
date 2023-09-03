#include <iostream>
#include <memory>

#include "MacButton.h"
#include "MacDialog.h"

using namespace DP;

std::shared_ptr<Button> MacDialog::createButton(){
    std::shared_ptr<Button> btn = std::make_shared<MacButton>();
    return  btn;
}