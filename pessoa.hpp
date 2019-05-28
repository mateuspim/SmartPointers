#ifndef PESSOA_HPP
	#define	PESSOA_HPP

#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
	
	private: 
		int id;
		int cpf;
		int rg;
	
	protected:
		string nome;
		
	public:
		Pessoa();
		Pessoa(int , int, int , string);
		~Pessoa();
		
		virtual int getPriority() const;

		virtual void printPessoa() const;

		virtual const int getID();
		virtual const int getCPF();
		virtual const int getRG();
		virtual const string getName();
};

#endif
