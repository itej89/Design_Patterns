#include "Caretaker.h"
#include "Originator.h"
#include <iostream>
#include <iterator>

using namespace DP;


Caretaker::Caretaker(std::shared_ptr<Originator> originator):
_originator(originator){
}

void Caretaker::Backup(){
   auto snapshot =  _originator->Save();
   _momentos.push_back(snapshot);
}

void Caretaker::Restore(){
    if(_momentos.size() > 0){
        _originator->Restore(_momentos.back());
        _momentos.pop_back();
    }
}

void Caretaker::ShowHistory() const{
    for(auto momento: _momentos){
        std::cout << momento->GetName() << std::endl;
    }
}