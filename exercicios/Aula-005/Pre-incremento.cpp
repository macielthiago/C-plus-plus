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
    cout << ++n2 << "\n\n";  // primeiro incrementa a variável e depois usa o valor


    return 0;
}

/*
n1++  =  pós-incremento / pós fixado  -  tanto para adição quanto para subtração
++n1  =  pré-incremento / pré fixado  -  tanto para adição quanto para subtração
*/