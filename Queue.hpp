#ifndef QUEUE_HPP
	#define QUEUE_HPP

#include <queue>
#include <memory>
#include "pessoa.hpp"

typedef Pessoa ItemType;

class Queue
{
public:

	Queue();
	~Queue();
	void push(std::shared_ptr<ItemType > data);
	bool pop();
	void print();

	bool     isEmpty() const;
	bool     isFull() const;

private:
	std::queue<std::shared_ptr<ItemType>> qList;
};


#endif // !QUEUE_HPP