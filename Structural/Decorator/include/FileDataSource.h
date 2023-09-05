#pragma once

#include "DataSource.h"
#include <string>

namespace DP {

    /**
     * @brief Type to read write to files
     * 
     */
    class FileDataSource: public DataSource {
        private:
            std::string fileName;

        public:
            /**
             * @brief Construct a new File Data Source object
             * 
             * @param FileName 
             */
            FileDataSource(std::string FileName);

            /**
             * @brief writeData to file method
             * 
             * @param data 
             */
            void writeData(std::string data) override;

            /**
             * @brief readData from file method
             * 
             * @return std::string 
             */
            std::string readData() override;
    };
}