#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int n1 = 10;
    int n2 = 10;

    cout << n1++ << "\n\n";  // primeiro usa o valor e depois faz o incremento
    cout << ++n2 << "\n\n";  // primeiro incrementa a vari�vel e depois usa o valor


    return 0;
}

/*
n1++  =  p�s-incremento / p�s fixado  -  tanto para adi��o quanto para subtra��o
++n1  =  pr�-incremento / pr� fixado  -  tanto para adi��o quanto para subtra��o
*/