#include <iostream>
#include <memory>
#include <cstring>

#include "VersionConfig.h"


#include "Iterator.h"
#include "Data.h"
#include "Container.h"

int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << IteratorPattern_VERSION_MAJOR << std::endl;
    

    std::cout << "----------------int type iterator---------------------" << std::endl;
    DP::Container<int> cont;

    for(int i=0; i<5; i++){
        cont.Add(i);
    }

    std::shared_ptr<DP::Iterator<int, DP::Container<int>>> it =
        cont.CreateIterator();

    for (it->First(); !it->IsDone(); it->Next()) {
        std::cout << *it->Current() << std::endl;
    }


    std::cout << "----------------Custom Data type iterator---------------------" << std::endl;
    DP::Container<DP::Data> cont2;

    for(int i=10; i<16; i++){
        cont2.Add(DP::Data(i));
    }

    std::shared_ptr<DP::Iterator<DP::Data, DP::Container<DP::Data>>> it2 =
        cont2.CreateIterator();

    for (it2->First(); !it2->IsDone(); it2->Next()) {
        std::cout << it2->Current()->data() << std::endl;
    }


    
    return 0;
    
}