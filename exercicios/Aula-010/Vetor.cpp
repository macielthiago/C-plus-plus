#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int vetor[8] = { 10,20,30,40,50,60,70,80 };
    int i;


    for (i = 0; i < sizeof(vetor) / 4; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}