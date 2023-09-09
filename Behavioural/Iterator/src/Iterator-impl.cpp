#include "Container.h"
#include "Data.h"
#include "Iterator.cpp"
#include "Iterator.h"

namespace DP {
    
    template class Iterator<int, Container<int>>;
    template class Iterator<Data, Container<Data>>;

}
