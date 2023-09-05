#include <iostream>
#include <memory>
#include <cstring>

#include "VersionConfig.h"


#include "CachedYouTubeClass.h"

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
    std::cout << "Software version :" << ProxyPattern_VERSION_MAJOR << std::endl;

    DP::CachedYouTubeClass _proxyYouTubeClass;
    _proxyYouTubeClass.listVideos();
    _proxyYouTubeClass.getVideoInfo();
    _proxyYouTubeClass.downloadVideo();
    return 0;
    
}