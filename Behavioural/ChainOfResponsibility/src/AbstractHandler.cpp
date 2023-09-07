#include "AbstractHandler.h"

using namespace DP;

AbstractHandler::AbstractHandler():
_next_Handler(nullptr){}

/*!
Method to handle/pass request
*/
std::shared_ptr<Handler> AbstractHandler::SetNext(std::shared_ptr<Handler> handler){
    _next_Handler = handler;
    return handler;
}

/*!
Method to handle/pass request
*/
std::string AbstractHandler::Handle(std::string request){
    if(this->_next_Handler){
        return  this->_next_Handler->Handle(request);
    }

    return {};
}