#include "../inc/Composite.h"
using namespace lemonBt;

Composite::Composite()
{	
}

Composite::~Composite()
{
}

void Composite::addChild(Node* node)
{
	this->children.push_back(node);
}
