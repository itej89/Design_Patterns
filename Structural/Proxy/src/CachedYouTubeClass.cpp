#include <cstdio>

#include "CachedYouTubeClass.h"

using namespace DP;


void CachedYouTubeClass::listVideos(){
    if(IsCached)
    std::printf("CachedYouTubeClass - listVideos\n");
    else{
        IsCached = true;
        _thirdPartyYouTubeClass.listVideos();
    }
}


void CachedYouTubeClass::getVideoInfo(){
    if(IsCached)
    std::printf("CachedYouTubeClass - getVideoInfo\n");
    else{
        IsCached = true;
        _thirdPartyYouTubeClass.getVideoInfo();
    }
}


void CachedYouTubeClass::downloadVideo(){
    if(IsCached)
    std::printf("CachedYouTubeClass - downloadVideo\n");
    else{
        IsCached = true;
        _thirdPartyYouTubeClass.downloadVideo();
    }
}