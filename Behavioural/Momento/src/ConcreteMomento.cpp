#include "ConcreteMomento.h"
#include <cstdlib>
#include <ctime>
#include <locale>

using namespace DP;

#include <string>

#include "ConcreteMomento.h"

/**
    * @brief Construct a new Concrete Momento object
    * 
    * @param state 
    */
ConcreteMomento::ConcreteMomento(std::string state):
state_(state){
    std::time_t now = std::time(0);
    this->date_ = std::ctime(&now);
}

/**
    * @brief Gets state of the snapshot
    * 
    * @return std::string 
    */
std::string ConcreteMomento::state() const{
    return  state_;
}

/**
    * @brief Gets date of the snapshot
    * 
    * @return std::string 
    */
std::string ConcreteMomento::date() const {
    return date_;
}

/**
    * @brief Get the Name of the snapshot
    * 
    * @return std::string 
    */
std::string ConcreteMomento::GetName() const {
    return this->date_ + " / (" + this->state_.substr(0, 9) + "...)";
}