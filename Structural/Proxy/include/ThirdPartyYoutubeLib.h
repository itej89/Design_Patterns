#pragma once

namespace DP {

    class ThirdPartyYoutubeLib{

        public:

            /**
             * @brief list video
             * 
             */
            virtual void listVideos() = 0;

            /**
             * @brief Get the Video Info object
             * 
             */
            virtual void getVideoInfo() = 0;

            /**
             * @brief downlaod videos
             * 
             */
            virtual void downloadVideo() = 0;
            
    };

}