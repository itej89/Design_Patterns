#pragma once

#include "ThirdPartyYoutubeLib.h"
#include "ThirdPartyYouTubeClass.h"

namespace DP {

    /**
     * @brief Proxy class for ThirdPartyYouTubeClass
     * 
     */
    class CachedYouTubeClass: public ThirdPartyYoutubeLib{
        private:
            /*!
            Proxy class private variabel
            */
            bool IsCached = false;

            /*!
            Service class reference
            */
            ThirdPartyYouTubeClass _thirdPartyYouTubeClass;

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