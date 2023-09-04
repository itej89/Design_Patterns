#include <cstdio>

#include "Tv.h"

using namespace DP;


bool Tv::isEnable(){
    return true;
    }

void Tv::enable(){
    std::printf("Enabled TV\n");
    }

void Tv::disable(){
    std::printf("Disabled TV\n");
    }

void Tv::getVolume(){
    std::printf("Get Volume on TV\n");
    }

void Tv::setVolume(float value){
    std::printf("Set Volume on TV\n");
    }

void Tv::getChannel(){
    std::printf("Get Channel on TV\n");
    }

void Tv::setChannel(float value){
    std::printf("Set Channel on TV\n");
    }