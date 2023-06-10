#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int vidas = 0;  // variável do tipo inteira - recebe números inteiros
	char letra = 'c';  // variável do tipo caractere - recebe uma letra
	double decimal = 5.2;  // variável do tipo real - recebe números reais
	float decimal2 = 5.2;  // variável do tipo real - recebe números reais só que com precisão menor
	bool vivo = true;  // variável do tipo booleano - recebe verdadeiro ou falso
	string nome = "Thiago";  // variável do tipo texto - recebe palavras

    cout << "digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "digite seu nome: ";
    cin >> nome;

    // cout << vidas  << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n";

    /*
    cout << vidas << "\n";
    cout << decimal2 << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";
    */

    return 0;
}