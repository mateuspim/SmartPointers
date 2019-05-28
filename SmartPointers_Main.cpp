#include <iostream>
#include "SmartPointers_Main.hpp"
#include "MainProgram.hpp"

using namespace std;

int main(int argc, char* argv[])
{
	try 
	{
		MainProgram start;
		start.process();
		start.clear();
	}
	catch (exception& what){
		cerr << "Erro: " << what.what() << endl;
	}	
}
