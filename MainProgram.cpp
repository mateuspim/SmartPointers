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
	
	/*
	cout << "Digite o NOME da a pessoa: ";
	getline(cin, nome);
	cout << "Digite o ID para a pessoa: ";
	cin >> id;
	cout << "Digite o CPF para a pessoa: ";
	cin >> cpf;
	cout << "Digite o RG para a pessoa: ";
	cin >> rg;
	*/
	
	Pessoa temp (id, cpf, rg, nome);

	gList.push(temp);
	qList.push(temp);
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

	if (qList.pop())
		std::cout << "\n Removido com sucesso";
	else
		std::cout << "\n Nada para remover";
}

const void MainProgram::srcPerson()
{
	cout << "\n------------------------------\n" << "Procurar pessoa"
		<< "\n------------------------------\n" << endl;

	//Esse comando lista toda a lista porém a apaga
	//gList.print();

	cout << "\n------------------------------\n" << endl;

	qList.print();
}



