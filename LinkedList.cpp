#include <cstddef>
#include <new>
#include <memory>

#include "LinkedList.hpp"

typedef Pessoa ItemType;

LinkedList::LinkedList()
{
	cout << "	LinkedList	" << endl;
}

LinkedList::~LinkedList()
{
	cout << "	~LinkedList	" << endl;
}


void LinkedList::push(ItemType data)
{
	if (!isFull()){
		std::unique_ptr<ListNode> temp = std::make_unique<ListNode>();
		temp->info = std::move(data);
		if (front) {
			temp->next = std::move(front);
			front = std::move(temp);
		}
		else {
			front = std::move(temp);
		}
	}
}


bool LinkedList::pop()
{
	if (front != nullptr)
	{
		std::unique_ptr<ListNode> temp = std::move(front);
		front = std::move(temp->next);
		return true;
	}
	else {
		return false;
	}
}


void LinkedList::print()
{
	while (front != nullptr) {
		front->info.printPessoa();
		front = std::move(front->next);
	}
}

bool LinkedList::isEmpty() const
{
	return (front == nullptr);
}

bool LinkedList::isFull() const
{
	try {
		std::unique_ptr<ListNode> location = std::make_unique<ListNode>();
		return false;
	}
	catch (std::bad_alloc exception) {
		return true;
	}
}

