#ifndef QUEUE_HPP
	#define QUEUE_HPP

#include <memory>
#include "pessoa.hpp"

typedef Pessoa ItemType;

struct QueueNode
{
	ItemType info;
	std::shared_ptr<QueueNode> next = nullptr;

	QueueNode() {  }
	QueueNode(ItemType data) { info = data; }
	~QueueNode() { if (info.getName() != "") std::cout << "Excluindo a pessoa: " << info.getName() << '\n'; }
};

class Queue
{
	public:

		Queue();
		~Queue();

		void push(ItemType data);
		bool pop();
		void print();

		bool     isEmpty() const;
		bool     isFull() const;

	private:
		std::shared_ptr<QueueNode> front;
		std::shared_ptr<QueueNode> rear;
};


#endif // !QUEUE_HPP