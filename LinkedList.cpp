#include <cstddef>
#include <new>
#include <memory>

#include "LinkedList.hpp"

typedef Pessoa ItemType;

LinkedList::LinkedList()
{
	
	cout << "	GenericQueue	" << endl;
}

LinkedList::~LinkedList()
{
	cout << "	~GenericQueue	" << endl;
	while (head) {
		head = std::move(head->next);
	}
}


void LinkedList::push(ItemType data)
{
	if (!isFull()){
		std::unique_ptr<ListNode> temp = std::make_unique<ListNode>();
		temp->info = std::move(data);
		if (head) {
			temp->next = std::move(head);
			head = std::move(temp);
		}
		else {
			head = std::move(temp);
		}
	}
}


bool LinkedList::pop()
{
	if (head != nullptr)
	{
		std::unique_ptr<ListNode> temp = std::move(head);
		head = std::move(temp->next);
		return true;
	}
	else {
		return false;
	}
}


void LinkedList::print()
{
	while (head != nullptr) {
		cout << head->info.getName();
		head = std::move(head->next);
	}
}

bool LinkedList::isEmpty() const
{
	return (head == nullptr);
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

