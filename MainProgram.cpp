#include <iostream>
#include "MainProgram.hpp"
#include "Menu.hpp"

using namespace std;

MainProgram::MainProgram()
{
}

MainProgram::~MainProgram()
{
}

const void MainProgram::clear()
{
	return void();
}

const void MainProgram::processa()
{
	vector<string> opcoes({ "Sair","Unique Pointer", "Shared Pointer"});
	Menu menu("Escolha o programa a ser executado", opcoes);
	int escolha = -1;

	while (escolha) {
		escolha = menu.getEscolha();

		switch (escolha) {
		case 0: uniquePtr(); break;
		case 1: sharedPtr(); break;
		}
	}
}

const void MainProgram::sharedPtr()
{
	return void();
}

const void MainProgram::uniquePtr()
{
	return void();
}
