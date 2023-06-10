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
    operador lógico onde o valor de resposta da operação é verdadeiro se todas as variáveis de entrada forem verdadeiras.

    or   =>  ||   =>  ou
    operador lógico onde o valor de resposta da operação é verdadeiro se pelo menos uma das variáveis de entrada for verdadeira.

    not  =>   !   =>   não
    ele vai inverter o valor de uma variável em um teste.
*/