#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int num1 = 10;
    int num2 = 50;
    char opc = 'S';

    if (num1 != num2) {
        cout << "Resultado verdadeiro";
    }
    else {
        cout << "Resultado falso";
    }

    return 0;
}