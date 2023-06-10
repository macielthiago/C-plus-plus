#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int x, y, z;

    for (x = 0, y = 1, z = 0; x <= 10 && y <= 8; x++, y += 2, z += 2)
    {
        cout << x << " - ";
        cout << y << " - ";
        cout << z << "\n";
    }
    cout << "\nFim do Programa!\n";


    return 0;
}

/*
    o For pode ser inicializado com mais de uma variável.
*/