#include "Data.h"

using namespace DP;


Data::Data(int i): m_data_(i){}

void Data::setData(int a){
    m_data_ = a;
}

int Data::data(){
    return  m_data_;
}