#include <cstdio>

#include "CarBuilder.h"

using namespace DP;

void CarBuilder::reset(){
    std::printf("Car reseted.\n");
}

void CarBuilder::setSeats(int count){
    std::printf("%d seats added.\n", count);
}

void CarBuilder::setEngine(std::string engine){
    std::printf("%s engine added.\n", engine.c_str());
}

void CarBuilder::setGPS(){
    std::printf("GPS added.\n");
}

Car CarBuilder::getResult(){
    std::printf("Returning the Car.\n\n");
    return Car();
}