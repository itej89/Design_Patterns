#include "MonkeyHandler.h"
#include "AbstractHandler.h"

using namespace DP;


std::string MonkeyHandler::Handle(std::string request){
    if(request == "Banana"){
        return "Monkey: I'll eat the " + request + ".\n";
    }else {
        return AbstractHandler::Handle(request);
    }
}