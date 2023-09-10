#include "State.h"

using namespace DP;

void State::setContext(std::shared_ptr<Context> _context){
    this->_context = _context;
}