#include "../inc/Sequence.h"
using namespace lemonBt;

Sequence::Sequence()
{
	this->m_pIndex = 0;
}

Sequence::~Sequence()
{
}

Result Sequence::doAction()
{
	if (this->children.empty())
	{
		return Result::Success;
	}

	if (this->m_pIndex >= this->children.size)
	{
		this->reset();
	}

	Result tmpResult;
	for (int length = this->children.size; this->m_pIndex < length;++this->m_pIndex)
	{
		tmpResult = this->children[this->m_pIndex]->doAction();
		if (tmpResult==Result::Success)
		{
			continue;
		}
		else if (tmpResult == Result::Wait)
		{
			return tmpResult;
		}
		else
		{
			this->reset();
			return tmpResult;
		}
	}

	this->reset();
	return Result::Success;
}

void Sequence::reset()
{
	this->m_pIndex = 0;
}