#include <cstdio>

#include "AdvancedRemoteControl.h"
#include "RemoteControl.h"

using namespace DP;


AdvanceRemoteControl::AdvanceRemoteControl(std::shared_ptr<Device> _device):
RemoteControl(_device){}

void AdvanceRemoteControl::mute(){
    device->setVolume(0);
    std::printf("Device muted\n");
}