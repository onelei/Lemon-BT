#include "../inc/Decorator.h"
using namespace lemonBt;

Decorator::Decorator()
{	
}

Decorator::~Decorator()
{
}

void Decorator::setChild(Node* node)
{
	this->child = node;
}
