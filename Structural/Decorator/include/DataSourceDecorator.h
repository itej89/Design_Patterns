#pragma once

#include "DataSource.h"
#include <memory>

namespace DP {
    class DataSourceDecorator: public DataSource{
        public:
            /*!
            sub dataSource reference
            */
            std::shared_ptr<DataSource> dataSource;

            /**
             * @brief Construct a new Data Source Decorator object
             * 
             * @param dataSource 
             */
            DataSourceDecorator(std::shared_ptr<DataSource> dataSource);
    };
}