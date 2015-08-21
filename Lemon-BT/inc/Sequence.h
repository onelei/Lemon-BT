/**
* Sequence node: a parent node that would invoke children one by one.
* Return success if only if all the children return true.
* It would break the iteration and reset states if any child fail.
* It would return the wait state directly to parent and keep all the states if a child return wait
*/
#ifndef _SEQUENCE_H_
#define _SEQUENCE_H_
#include "Node.h"
#include "Result.h"
#include "Composite.h"
namespace lemonBt
{
	class Sequence :public Composite
	{
	public:
		Sequence();
		~Sequence();

	protected:
		int m_pIndex;
		Result doAction();
		void reset();
	};
}	

#endif//#ifndef _SEQUENCE_H_