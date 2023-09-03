#include "Director.h"


using namespace DP;

/*!
Common method to build SUV from the builder
*/
void Director::BuildSUV(std::shared_ptr<Builder> builder){
    builder->reset();
    builder->setSeats(3);
    builder->setEngine("SUV");
    builder->setGPS();
}

/*!
Common method to build SportsCar from the builder
*/
void Director::BuildSportsCar(std::shared_ptr<Builder> builder){
    builder->reset();
    builder->setSeats(3);
    builder->setEngine("Sports");
    builder->setGPS();
}