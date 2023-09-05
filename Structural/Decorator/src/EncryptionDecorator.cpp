#include <cstdio>
#include <string>

#include "EncryptionDecorator.h"
#include "DataSourceDecorator.h"

using namespace DP;


EncryptionDecorator::EncryptionDecorator(
    std::shared_ptr<DataSource> dataSource):
DataSourceDecorator(dataSource){}


void EncryptionDecorator::writeData(std::string data){

    std::string prepend = "Encrypted [  ";
    std::string postapend = " ]";

    char buf[prepend.length()+data.length()+postapend.length()];
    
    std::sprintf(buf, "%s%s%s", prepend.c_str(), 
    data.c_str(), postapend.c_str());

    dataSource->writeData(std::string(buf));
}


std::string EncryptionDecorator::readData(){

    std::string data =  dataSource->readData();

    std::string prepend = "Encrypted [  ";
    std::string postapend = " ]";
    data.replace(data.begin(), data.begin()+prepend.length(), "");
    data.replace(data.end()-postapend.length(), data.end(), "");

    return data;
}