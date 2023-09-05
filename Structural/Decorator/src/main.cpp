#include <cstdio>
#include <iostream>
#include <memory>
#include <cstring>

#include "DataSource.h"
#include "VersionConfig.h"

#include "FileDataSource.h"
#include "EncryptionDecorator.h"
#include "CompressionDecorator.h"

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
    std::cout << "Software version :" << DecoratorPattern_VERSION_MAJOR << std::endl;
   
    std::shared_ptr<DP::DataSource> fdata = 
        std::make_shared<DP::FileDataSource>("data.txt");
    
    fdata = std::make_shared<DP::EncryptionDecorator>(fdata);
    fdata = std::make_shared<DP::CompressionDecorator>(fdata);

    fdata->writeData("New Data into the file.");

    std::printf("Read data  : %s\n", fdata->readData().c_str());

    return 0;
}