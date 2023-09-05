#pragma once

#include <string>

namespace DP {

    /**
     * @brief Data Source type
     * 
     */
    class DataSource{
        public:

            /**
             * @brief Write data method
             * 
             * @param data 
             */
            virtual void writeData(std::string data) = 0;

            /**
             * @brief Read Data method
             * 
             * @return std::string 
             */
            virtual std::string readData() = 0;
    };
}