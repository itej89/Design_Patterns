#include <iostream>
#include <memory>
#include <cstring>

#include "VersionConfig.h"

#include "RemoteControl.h"
#include "AdvancedRemoteControl.h"

#include "Tv.h"
#include "Radio.h"
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
    std::cout << "Software version :" << BridgePattern_VERSION_MAJOR << std::endl;
   
   
   DP::RemoteControl remote(std::make_shared<DP::Tv>());
   remote.volumeUp();

   DP::AdvanceRemoteControl advancedRemote(std::make_shared<DP::Radio>());
   advancedRemote.mute();

    return 0;
    
}