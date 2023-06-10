#include <iostream>
#include <windows.h>
using namespace std;

#define pi 3.1415  // valor fixo
#define curso cout << "Curso de C++" << endl;  // valor fixo

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int vidas = 3, tiros = 500, life = 100;  // declarando três variáveis do mesmo tipo

	cout << vidas << endl;
	cout << tiros << endl;
	cout << life << endl;

	cout << pi << endl; // chamando a o define 'pi'
	curso  // chamando o comando cout do difine 'curso'


	return 0;
}