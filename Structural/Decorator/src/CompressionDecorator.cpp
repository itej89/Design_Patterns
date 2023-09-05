#include <cstdio>
#include <string>

#include "CompressionDecorator.h"
#include "DataSourceDecorator.h"

using namespace DP;


CompressionDecorator::CompressionDecorator(
    std::shared_ptr<DataSource> dataSource):
DataSourceDecorator(dataSource){}


void CompressionDecorator::writeData(std::string data){

    std::string prepend = "Compressed [  ";
    std::string postapend = " ]";

    char buf[prepend.length()+data.length()+postapend.length()];
    
    std::sprintf(buf, "%s%s%s", prepend.c_str(), 
    data.c_str(), postapend.c_str());

    dataSource->writeData(std::string(buf));
}


std::string CompressionDecorator::readData(){

    std::string data =  dataSource->readData();

    std::string prepend = "Compressed [  ";
    std::string postapend = " ]";
    data.replace(data.begin(), data.begin()+prepend.length(), "");
    data.replace(data.end()-postapend.length(), data.end(), "");

    return data;
}