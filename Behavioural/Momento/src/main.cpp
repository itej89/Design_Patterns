#include <iostream>
#include <memory>
#include <cstring>

#include "Caretaker.h"
#include "Originator.h"
#include "VersionConfig.h"


int main(int argc, char* argv[]){

    //print software version
    std::cout << "Software version :" << MomentoPattern_VERSION_MAJOR << std::endl;
   
    std::shared_ptr<DP::Originator> Originator = 
        std::make_shared<DP::Originator>("Hello");

    std::shared_ptr<DP::Caretaker> Caretaker = 
    std::make_shared<DP::Caretaker>(Originator);

    Originator->DoSomething();
    Caretaker->Backup();
    Originator->DoSomething();
    Caretaker->Backup();
    Originator->DoSomething();
    Caretaker->Backup();

    std::printf("\nCreated snapshots-----------\n");
    Caretaker->ShowHistory();
    std::printf("----------------------------\n");

    Caretaker->Restore();
    Caretaker->Restore();
    Caretaker->Restore();
    

    return 0;
    
}