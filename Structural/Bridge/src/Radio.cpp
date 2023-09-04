#include <cstdio>

#include "Radio.h"

using namespace DP;


bool Radio::isEnable(){
    return true;
    }

void Radio::enable(){
    std::printf("Enabled TV\n");
    }

void Radio::disable(){
    std::printf("Disabled TV\n");
    }

void Radio::getVolume(){
    std::printf("Get Volume on Radio\n");
    }

void Radio::setVolume(float value){
    std::printf("Set Volume on Radio\n");
    }

void Radio::getChannel(){
    std::printf("Get Channel on Radio\n");
    }

void Radio::setChannel(float value){
    std::printf("Set Channel on Radio\n");
    }