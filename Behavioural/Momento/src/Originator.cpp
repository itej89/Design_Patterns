#include "Originator.h"
#include "ConcreteMomento.h"
#include <cstdio>
#include <memory>

using namespace DP;

/**
 * @brief Generate a ranmdom string
 * 
 * @param legth 
 * @return std::string 
 */
std::string Originator::GenerateString(int length){
     const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    int stringLength = sizeof(alphanum) - 1;

    std::string random_string;
    for (int i = 0; i < length; i++) {
      random_string += alphanum[std::rand() % stringLength];
    }
    return random_string;
}


/**
    * @brief Construct a new Originator object
    * 
    * @param state 
    */
Originator::Originator(std::string state): state_(state){
}

/**
    * @brief 
    * 
    */
void Originator::DoSomething(){
   state_ = GenerateString(30);
   std::printf("Create state: %s\n", state_.c_str());
}

/**
    * @brief Saves a snapshot of the Originator state
    * 
    * @return std::shared_ptr<Momento> 
    */
std::shared_ptr<Momento> Originator::Save(){
    return std::make_shared<ConcreteMomento>(state_);
}

/**
    * @brief Restores a snapshot of the Originator state
    * 
    * @param momento 
    */
void Originator::Restore(std::shared_ptr<Momento> momento){
    state_ = momento->state();
   std::printf("Restored to state: %s\n", state_.c_str());
}