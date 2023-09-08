#include <cstdio>

#include "Invoker.h"

using namespace DP;


/*!
Setter for on Start Command
*/
void Invoker::setOnStart(std::shared_ptr<Command> onStart){
    _onStart = onStart;
}

/*!
Setter for on Finish Command
*/
void Invoker::setOnFinish(std::shared_ptr<Command> onFinish){
    _onFinish = onFinish;
}

/*!
Performing Task
*/
void Invoker::PerformTask(){
    if(_onStart) _onStart->Execute();

    std::printf("Performing Task\n");

    if(_onFinish) _onFinish->Execute();
}