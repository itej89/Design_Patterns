#include "MacGUIFactory.h"

#include "Checkbox.h"
#include "MacButton.h"
#include "MacCheckbox.h"
#include <memory>

using namespace DP;

std::shared_ptr<Button> MacGUIFactory::createButton(){
    return  std::make_shared<MacButton>();
}

std::shared_ptr<Checkbox> MacGUIFactory::createCheckbox(){
    return  std::make_shared<MacCheckbox>();
}