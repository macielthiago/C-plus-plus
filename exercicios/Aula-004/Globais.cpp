#include <iostream>
#include <windows.h>
using namespace std;

int n1, n2; // variáveis globais

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int n3, n4; // variáveis locais
	int res1, res2;

	n1 = 11;
	n2 = 3;
	n3 = 5;
	n4 = 2;

	res1 = n1 / n2;
	res2 = n1 % n2;

	cout << "div: " << res1 << endl;
	cout << "res: " << res2 << endl;

	return 0;
}

/*
	Operadores e ordem de precedência:
	() - parenteses
	% - módulo
	/ - divisão
	* - multiplicação
	+ - adição
	- - subtração
*/