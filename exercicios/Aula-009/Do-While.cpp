#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int cont;
    cont = 20;

    do {
        cout << "Hello, World - " << cont << "\n";
        cont++;
    } while (cont <= 20);

    cout << "\nRotina finalizada \n";


    return 0;
}

/*
No comando 'do while' ele vai  executar o bloco pelo menos uma vez, porque primeiroele executa o bloco e depois faz o teste.
*/