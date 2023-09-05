#include "FileDataSource.h"
#include <cstdio>
#include <fstream>
#include <iterator>
#include <string>
#include <iostream>
#include <exception>

using namespace DP;

FileDataSource::FileDataSource(std::string fileName):
fileName(fileName)
{}

void FileDataSource::writeData(std::string data){
    std::ofstream fstream;
    try{
        fstream.open(fileName, std::ios_base::out);
        fstream << data;
    }
    catch(std::ofstream::failure e){
        std::fprintf(stderr, "%s", e.what());
    }
    fstream.close();
}

std::string FileDataSource::readData(){
    std::string readdata;
    std::ifstream fstream;
    try{
        fstream.open(fileName, std::ios_base::in);
        std::string data((std::istreambuf_iterator<char>(fstream)), 
        std::istreambuf_iterator<char>());
        readdata = data;
    }
    catch(std::ifstream::failure e){
        std::fprintf(stderr, "%s", e.what());
    }
    fstream.close();
    return  readdata;
}