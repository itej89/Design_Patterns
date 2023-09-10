
#include <iostream>
#include "Subject.h"

using namespace DP;

/**
    * @brief Perform do business
    * 
    */
void Subject::SomeBusinessLogic(){
    _message = "change message message";
    Notify();
    std::cout << "I'm about to do some thing important\n";
}

/**
    * @brief Returns number of observers subscribed
    * 
    */
void Subject::HowManyObserver(){
    std::cout << "There are " << lstObserver.size() << " observers in the list.\n";
}

/**
    * @brief Create a Message object
    * 
    * @param message 
    */
void Subject::CreateMessage(std::string message){
    _message = message;
    Notify();
}

/**
    * @brief Attach observer to subject
    * 
    * @param observer 
    */
void Subject::Attach(IObserver* observer){
    lstObserver.push_back(observer);
}

/**
    * @brief Dettach observer from subject
    * 
    * @param observer 
    */
void Subject::Dettach(IObserver* observer){
    lstObserver.remove(observer);
}

/**
    * @brief Notify observers about update
    * 
    */
void Subject::Notify(){
    std::list<IObserver*>::iterator iterator = lstObserver.begin();
    HowManyObserver();
    while (iterator != lstObserver.end()) {
      (*iterator)->Update(_message);
      ++iterator;
    }
}