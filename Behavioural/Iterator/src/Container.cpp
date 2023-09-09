#include "Container.h"

using namespace DP;

template<class T>
std::shared_ptr<Iterator<T, Container<T>>> Container<T>::CreateIterator(){
    return  std::make_shared<Iterator<T, Container>>(this);
}



template<class T>
void Container<T>::Add(T a){
    m_data_.push_back(a);
}