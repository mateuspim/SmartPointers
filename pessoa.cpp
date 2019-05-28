#include <iostream>
#include <cmath>

#include "pessoa.hpp"

using namespace std;

Pessoa::Pessoa()
{
	this->id = NULL;
	this->cpf = NULL;
	this->rg = NULL;
	this->nome = "";

	//cout << "Pessoa()" << endl;
}

Pessoa::Pessoa(int id, int cpf, int rg, string nome)
{
	this->id = id;
	this->cpf = cpf;
	this->rg = rg;
	this->nome = nome;
	//cout << "Pessoa(stuff)" << endl;
}

Pessoa::~Pessoa(){
	//cout << "~Pessoa()" << endl;
}

void Pessoa::printPessoa() const
{
	cout << "########################################" << endl;
	cout << "Nome: " << nome << "\t ID: " << id << endl;
	cout << "CPF: " << cpf << endl; 
	cout << "RG: " << rg << endl;
	cout << "Prioridade: " << getPriority() << endl;
	cout << "########################################" << endl;
}

int Pessoa::getPriority() const
{
	return id + cpf + rg;
}

const int Pessoa::getID(){	return id; }
const int Pessoa::getCPF(){	return cpf; }
const int Pessoa::getRG(){	return rg; }
const string Pessoa::getName(){	return nome; }