#include "BaseComponent.h"

using namespace DP;

void BaseComponent::setMediator(std::shared_ptr<Mediator> _mediator){

    mediator = _mediator;
}