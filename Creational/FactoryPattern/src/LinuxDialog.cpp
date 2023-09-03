#include <iostream>
#include <memory>

#include "LinuxButton.h"
#include "LinuxDialog.h"

using namespace DP;

std::shared_ptr<Button> LinuxDialog::createButton(){
    std::shared_ptr<Button> btn = std::make_shared<LinuxButton>();
    return  btn;
}



                