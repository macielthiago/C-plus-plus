#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int num;
    cout << "Digite um numero: \n\n";
    cin >> num;

    if (num >= 4 && num <= 7) {
        cout << "Valor aceito \n";
    }
    else {
        cout << "nao aceito \n\n";
    }

    system("pause");
    return 0;
}

/*
    and  =>  &&   =>  e
    operador l�gico onde o valor de resposta da opera��o � verdadeiro se todas as vari�veis de entrada forem verdadeiras.

    or   =>  ||   =>  ou
    operador l�gico onde o valor de resposta da opera��o � verdadeiro se pelo menos uma das vari�veis de entrada for verdadeira.

    not  =>   !   =>   n�o
    ele vai inverter o valor de uma vari�vel em um teste.
*/