#include "Iterator.h"

using namespace DP;

/**
    * @brief get iterator to first item
    * 
    */
template <typename  T, typename U>
void Iterator<T,U>::First(){
    m_it = mData->m_data_.begin();
}


/**
    * @brief get iterator to next item
    * 
    */
template <typename  T, typename U>
void Iterator<T,U>::Next(){
    m_it++;
}


/**
    * @brief checks if end of list os reached
    * 
    */
template <typename  T, typename U>
bool Iterator<T,U>::IsDone(){
    return m_it == mData->m_data_.end();
}


template <typename  T, typename U> Iterator<T,U>::Iterator(U* data):
mData(data){}

/**
    * @brief get current iterator
    * 
    */
template <typename  T, typename U>
typename Iterator<T,U>::iter_type Iterator<T,U>::Current(){
    return m_it;
}