#include <queue>
#include <memory>

#include "Queue.hpp"
#include "pessoa.hpp"

Queue::Queue()
{
	cout << "	GenericQueue	" << endl;
}

Queue::~Queue()
{
	cout << "	~GenericQueue	" << endl;
}

void Queue::push(ItemType data)
{
	if (!isFull()){ 
		std::shared_ptr<QueueNode> new_rear = std::make_shared<QueueNode>(data);
		if (rear)
		{
			rear->next = new_rear;
		}
		rear = new_rear;

		if (!front)
		{
			front = rear;
		}
	}
}

bool Queue::pop()
{
	if (front == nullptr) return false;

	auto pop = std::move(front);
	front = pop->next;
	if (!front)
	{
		front.reset();
	}

	pop.reset();
	return true;
}

void Queue::print()
{
	std::shared_ptr<QueueNode> temp = front;
	while (temp != nullptr) {
		front->info.printPessoa();
		temp = temp->next;
	}	
}

bool Queue::isEmpty() const
{
	return (front == nullptr);
}

bool Queue::isFull() const
{
	try {
		std::unique_ptr<QueueNode> location = std::make_unique<QueueNode>();
		return false;
	}
	catch (std::bad_alloc exception) {
		return true;
	}
}
