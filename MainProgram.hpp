#ifndef MAINPROGRAM_HPP
	#define MAINPROGRAM_HPP

#include "LinkedList.hpp"
#include "pessoa.hpp"

class MainProgram
{
	private:
		

	public:
		MainProgram();
		~MainProgram();

		const void clear();
		const void process();
		const virtual void addPerson();
		const virtual void remPerson();
		const virtual void srcPerson();

		LinkedList gList;
		Queue queueList;
};

#endif // !MAINPROGRAM_HPP