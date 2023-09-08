#include "ComplexCommand.h"

using namespace DP;


ComplexCommand::ComplexCommand(
    std::shared_ptr<Receiver> reciever,
    std::string a, std::string b):
    _reciever(reciever), _a(a), _b(b){}


void ComplexCommand::Execute(){
    if(_reciever){
        _reciever->DoSomething(_a);
        _reciever->DoSomethingElse(_b);
    }
}