#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int cont;

    cont = 0;

    while (cont <= 20) // podemos fazer o incremento dentro da condi��o tamb�m com ++ ou -- (cont ++ <= 20)
    {
        cout << "Hello, World - " << cont << "\n";
        //n++;
        //cin >> n;
        //cont +=2;  -  vai incrementar de dois em dois
        cont++;

        if (cont == 10) // usando comando if para parar a contagem antes com o break;
        {
            break;
        }

    }
    cout << "Rotina finalizada\n";


    return 0;
}

/*
    BREAK;
    O comando break interrompe um loop, quando um loop encontra um comando break, ele interrompe, sai desse loop e continua a execu��o normal do programa.
*/