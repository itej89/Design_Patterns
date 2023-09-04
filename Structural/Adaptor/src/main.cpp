#include <iostream>
#include <memory>
#include <cstring>
#include <cstdio>

#include "VersionConfig.h"

#include "RoundHole.h"
#include "RoundPeg.h"
#include "SquarePeg.h"
#include "SquarePegAdaptor.h"

/**
 * @brief Reads command line argumetns and creates 
    appropritate dialog for the platform
 * 
 * @param argc 
 * @param argv Valid commandline arguments are "Mac" or "Linux"
 * @return int 
 */
int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << AdaptorPattern_VERSION_MAJOR << std::endl;

    DP::RoundHole roundHole(6);
    DP::RoundPeg roundPeg(10);

    DP::SquarePeg squarePeg(4);
    /*!
    Create Adaptor for the square peg
    */
    DP::SquarePegAdopter squarePegAdaptor(squarePeg);

    std::printf("10mm Round peg fits in 6mm Roudnhole : %d\n", roundHole.fits(roundPeg));
    std::printf("4mm Square peg fits in 6mm Roudnhole : %d\n", roundHole.fits(squarePegAdaptor));

    return 0;
    
}