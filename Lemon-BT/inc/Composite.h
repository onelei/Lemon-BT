/**
* Composite node: parent of nodes that have multi-children.
*/
#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_
#include "Node.h"
#include <vector>
using namespace std;

namespace lemonBt
{
	class Composite :public Node
	{
		public:
			Composite();
			~Composite();

		protected:
			vector<Node* > children;
			void addChild(Node* node);
	};
}

#endif//#ifndef _COMPOSITE_H_