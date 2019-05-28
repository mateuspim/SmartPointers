#include <queue>
#include <memory>

#include "Queue.hpp"
#include "pessoa.hpp"

Queue::Queue()
{
	
}

Queue::~Queue()
{
}

void Queue::push(std::shared_ptr<ItemType> data)
{
	qList.push(data);
}

bool Queue::pop()
{
	qList.pop();
	return true;
}

void Queue::print()
{
}

bool Queue::isEmpty() const
{
	return false;
}

bool Queue::isFull() const
{
	return false;
}
