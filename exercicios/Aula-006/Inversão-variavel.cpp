#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int num = 10;
    cout << num << "\n\n";

    /*
        num = num * -1;  -   Forma tradicional
        cout << -num << "\n\n";  -  N�o grava a invers�o na vari�vel, ele s� faz a invers�o moment�neamente
    */

    num = -num;  // Forma simplificada

    return 0;
}

/*
    para inverter o valor de uma vari�vel, podemos usar o m�todo tradicional que � simplismente multiplicar o valor dessa vari�vel por -1, ou podemos usar o operador de invers�o (subtra��o)
*/