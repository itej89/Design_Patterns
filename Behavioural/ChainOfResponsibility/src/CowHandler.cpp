#include "CowHandler.h"

using namespace DP;


std::string CowHandler::Handle(std::string request) {
    if(request == "Grass"){
        return "Cow: I'll eat the " + request + ".\n";
    }else {
        return AbstractHandler::Handle(request);
    }
}