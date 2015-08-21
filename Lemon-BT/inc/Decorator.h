/**
* Decorator node: parent of nodes that decorate other node.
*/
#ifndef _DECORATOR_H_
#define _DECORATOR_H_
#include "Node.h"

namespace lemonBt
{
	class Decorator :public Node
	{
	public:
		Decorator();
		~Decorator();

	private:
		Node* child;
		void setChild(Node* node);
	};
}

#endif//#ifndef _DECORATOR_H_