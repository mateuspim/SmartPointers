#ifndef LINKEDLIST_HPP
	#define LINKEDLIST_HPP

#include <memory>
#include "pessoa.hpp"

typedef Pessoa ItemType;

struct ListNode
{
	ItemType info;
	std::unique_ptr<ListNode> next;

	~ListNode() { if (info.getName() != "") std::cout << "Excluindo a pessoa: " << info.getName() << '\n'; }
};

class LinkedList
{
	public:

		LinkedList();
		~LinkedList();
		void push(ItemType data);
		bool pop();
		void print();

		bool     isEmpty() const;
		bool     isFull() const;

	private:
		std::unique_ptr<ListNode> front;
	
};


#endif // !LINKEDQUEUE_HPP