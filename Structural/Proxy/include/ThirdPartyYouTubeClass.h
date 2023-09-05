#pragma once

#include "ThirdPartyYoutubeLib.h"

namespace DP {
    class ThirdPartyYouTubeClass: public ThirdPartyYoutubeLib{

        public:
            /**
             * @brief list video
             * 
             */
            void listVideos() override;

            /**
             * @brief Get the Video Info object
             * 
             */
            void getVideoInfo() override;

            /**
             * @brief downlaod videos
             * 
             */
            void downloadVideo() override;

    };
}