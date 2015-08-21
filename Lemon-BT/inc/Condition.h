/**
* Condition node.
*
* @param opts {Object}
*        opts.blackboard {Object} blackboard object
*        opts.cond(blackboard) {Function} condition callback. Return true or false to decide the node return success or fail.
* @return {Number}
*          bt.RES_SUCCESS if cond callback return true;
*          bt.RES_FAIL if cond undefined or return false.
*/
#ifndef _CONDITION_H_
#define _CONDITION_H_
#include "Node.h"
#include "Result.h"
using namespace std;

namespace lemonBt
{
	class Condition :public Node
	{
	public:
		Condition();
		~Condition();

	private:
		Result doAction();
	};
}

#endif//#ifndef _CONDITION_H_