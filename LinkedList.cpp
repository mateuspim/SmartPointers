#include <cstddef>
#include <new>
#include <memory>
#include <vector>

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
		temp->info = data;
		
		if (front) {
			temp->next = std::move(front);
			front = std::move(temp);
		}
		else {
			front = std::move(temp);
		}
		length++;
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
	int x = length;
	vector<ItemType> data;
	//ItemType data[x];

	while (front != nullptr) {
		cout << " " << front->info.getName() << " -> ";
		data.push_back(front->info);
		front = std::move(front->next);
	}

	for (ItemType x : data) {
		push(x);
		//data.pop_back();
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

