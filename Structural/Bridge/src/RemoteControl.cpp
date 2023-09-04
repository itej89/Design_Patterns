#include "RemoteControl.h"
#include "device.h"

using namespace DP;


RemoteControl::RemoteControl(std::shared_ptr<Device> _device):
device(_device){}

void RemoteControl::togglePower(){
    if(device->isEnable())
        device->disable();   
    else
        device->enable();
    }


void RemoteControl::volumeDown(){
    device->setVolume(1);
    }

void RemoteControl::volumeUp(){
    device->setVolume(10);
    }

void RemoteControl::channelDown(){
    device->setChannel(1);
    }

void RemoteControl::channelUp(){
    device->setChannel(24);
    }