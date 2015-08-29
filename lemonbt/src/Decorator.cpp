/*
* Decorator node.
*/

#include "../inc/Decorator.h"

namespace lemonbt
{

	Decorator::Decorator()
	{
	}

	Decorator::~Decorator()
	{
	}

	void Decorator::setChild(Node*node)
	{
		this->child = node;
	}
}
