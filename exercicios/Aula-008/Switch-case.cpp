#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int valor;

    cout << "Selecione um transporte: \n";
    cout << "[1] = Carro, [2] = Moto, [3] = Aviao, [4] = Helicoptero \n"; //  - TERCEIRA

    //  cout << "[1, 2, 3] = Verde, [4, 5, 6] = Azul \n";  - SEGUNDA
    //  cout << "[1] = Verde, [2] = Azul, [3] = Vermelho \n"; -  PRIMEIRA

    cin >> valor;

    switch (valor)  // - TERCEIRA FORMA - SWITCH ANINHADOS
    {
    case 1:
    case 2:
        cout << "\nTransporte Terrestre \n";
        switch (valor)
        {
        case 1:
            cout << "Carro Selecionado\n";
            break;
        case 2:
            cout << "Moto Selecionado\n";
            break;
        }
        break;

    case 3:
    case 4:
        cout << "\nTransporte aereo\n";
        switch (valor)
        {
        case 3:
            cout << "Aviao Selecionado\n";
            break;
        case 4:
            cout << "\nHelicoptero Selecionado\n";
            break;
        }
        break;

    default:
        cout << "Volor selecionado invalido\n";
        break;
    }


    return 0;
}

//---------------------------------------------------------------------------------------------

/*  - PRIMEIRA FORMA:

    switch (valor)
    {
        case 1:
            cout << "Cor selecionada: Verde \n";
            break;
        case 2:
            cout << "Cor selecionada: Azul \n";
            break;
        case 3:
            cout << "Cor selecionada: Vermelho \n";
            break;
        default:
            cout << "Valor selecionado invalido \n";
            break;
    }
*/

/*  - SEGUNDA FORMA:
    switch (valor)
    {
        case 1:
        case 2:
        case 3:
            cout << "Cor selecionada: Verde \n";
            break;
        case 4:
        case 5:
        case 6:
            cout << "Cor selecionada: Azul \n";
            break;
        default:
            cout << "Valor selecionado invalido \n";
            break;
    }
*/