#include <cstdio>

#include "CarManualBuilder.h"

using namespace DP;

void CarManualBuilder::reset(){
    std::printf("Car reseted.\n");
}

void CarManualBuilder::setSeats(int count){
    std::printf("%d seats added.\n", count);
}

void CarManualBuilder::setEngine(std::string engine){
    std::printf("%s engine added.\n", engine.c_str());
}

void CarManualBuilder::setGPS(){
    std::printf("GPS added.\n");
}

CarManual CarManualBuilder::getResult(){
    std::printf("Returning the Car Manual.\n\n");
    return  CarManual();
}