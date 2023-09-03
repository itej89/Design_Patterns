#include "WinGUIFactory.h"

#include "Checkbox.h"
#include "WinButton.h"
#include "WinCheckbox.h"
#include <memory>

using namespace DP;

std::shared_ptr<Button> WinGUIFactory::createButton(){
    return  std::make_shared<WinButton>();
}

std::shared_ptr<Checkbox> WinGUIFactory::createCheckbox(){
    return  std::make_shared<WinCheckbox>();
}