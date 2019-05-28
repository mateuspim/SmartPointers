#include <iostream>
#include "MainProgram.hpp"
#include "Menu.hpp"
#include "pessoa.hpp"
#include "LinkedList.hpp"
#include "Queue.hpp"

using namespace std;

typedef Pessoa ItemType;

MainProgram::MainProgram()
{
}

MainProgram::~MainProgram()
{
}

const void MainProgram::clear()
{
	
}

const void MainProgram::process()
{
	
	vector<string> opcoes({ " Sair"," Adicionar Pessoa", " Remover Pessoa"," Procurar pessoa"});
	Menu menu("Escolha o programa a ser executado", opcoes);
	int escolha = -1;

	while (escolha) {
		escolha = menu.getEscolha();

		switch (escolha) {
		case 1: addPerson(); break;
		case 2: remPerson(); break;
		case 3: srcPerson(); break;
		case 4: break;
		default: break;
		}
	}
}

const void MainProgram::addPerson()
{
	cout << "\n------------------------------\n" << "Adicionar pessoa" 
		<< "\n------------------------------\n" << endl;

	int id = 0, cpf = 0, rg = 0;
	string nome = " rapaiz ";

	Pessoa temp (id, cpf, rg, nome);

	gList.push(temp);

	std::shared_ptr<ItemType> temp2 = make_shared<ItemType>(temp);
	queueList.push(temp2);
}

const void MainProgram::remPerson()
{
	cout << "\n------------------------------\n" << "Remover pessoa"
		<< "\n------------------------------\n" << endl;

	if (gList.pop())
		std::cout << "\n Removido com sucesso";
	else
		std::cout << "\n Nada para remover";
	

	cout << "\n------------------------------\n" << endl;
}

const void MainProgram::srcPerson()
{
	cout << "\n------------------------------\n" << "Procurar pessoa"
		<< "\n------------------------------\n" << endl;
}



