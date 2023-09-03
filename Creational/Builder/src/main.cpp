#include <iostream>
#include <memory>
#include <cstring>

#include "VersionConfig.h"

#include "Director.h"
#include "CarBuilder.h"
#include "CarManualBuilder.h"


int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << BuilderPattern_VERSION_MAJOR << std::endl << std::endl;
   
   /*!
   ...Create Director...
   */
    DP::Director director;

    /*!
    ...Create builders...
    */
    std::shared_ptr<DP::CarBuilder> car_builder = 
                    std::make_shared<DP::CarBuilder>();

    std::shared_ptr<DP::CarManualBuilder> car_manual_builder = 
                    std::make_shared<DP::CarManualBuilder>();

    /*!
    ...Build cars...
    */
    director.BuildSUV(car_builder);
    car_builder->getResult();

    director.BuildSportsCar(car_builder);
    car_builder->getResult();

    /*!
    ...Build manuals...
    */
    director.BuildSportsCar(car_manual_builder);
    car_manual_builder->getResult();
    
    director.BuildSUV(car_manual_builder);
    car_manual_builder->getResult();

    return 0;
    
}