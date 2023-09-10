#include <iostream>

#include "Observer.h"

using namespace DP;

int Observer::static_number_ = 0;

/**
* @brief Construct a new Observer object
* 
*/
Observer::Observer(Subject &subject):
subject_(subject){
    this->subject_.Attach(this);
    std::cout << "Hi, I'm the Observer \"" << ++Observer::static_number_ << "\".\n";
    this->number_ = Observer::static_number_;
}

/**
    * @brief Update method for subscribers
    * 
    * @param message_from_Subject 
    */
void Observer::Update(const std::string message_from_Subject){
    _message = message_from_Subject;
}

/**
    * @brief Method to remove the observer from the list 
    * 
    */
void Observer::RemoveMeFromTheList(){
    subject_.Dettach(this);
}

/**
    * @brief prints observer information
    * 
    */
void Observer::PrintInfo(){
 std::cout << "Observer \"" << this->number_ << 
        "\": a new message is available --> " << this->_message << "\n";
}