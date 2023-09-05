#pragma once

#include "DataSource.h"
#include "DataSourceDecorator.h"
#include <string>

namespace DP {

    /**
     * @brief Class type for Encryption Decorator
     * 
     */
    class CompressionDecorator: public DataSourceDecorator{
        public:
            /**
             * @brief Construct a new Encryption Decorator object
             * 
             * @param dataSource 
             */
            CompressionDecorator(std::shared_ptr<DataSource> dataSource);

            /**
             * @brief writeData method
             * 
             * @param data 
             */
            void writeData(std::string data) override;

            /**
             * @brief readData method
             * 
             * @return std::string 
             */
            std::string readData() override;
    };
}