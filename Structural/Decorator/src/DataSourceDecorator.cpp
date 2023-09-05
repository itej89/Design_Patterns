#include "DataSourceDecorator.h"


using namespace DP;


DataSourceDecorator::DataSourceDecorator(
    std::shared_ptr<DataSource> dataSource):
dataSource(dataSource){
        
}