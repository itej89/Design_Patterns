#include "SquirrelHandler.h"

using namespace DP;

std::string SquirrelHandler::Handle(std::string request){
    if(request == "nut"){
        return "Squirrel: I'll eat the " + request + ".\n";
    }else {
        return AbstractHandler::Handle(request);
    }
}