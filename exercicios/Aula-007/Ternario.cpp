#include <iostream>
#include <windows.h>
using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int n1, n2, nota;
    string res;
    char opc;

inicio:
    system("cls");


    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = (n1 + n2) / 2;

    //(nota >= 60) ? res = "Aprovado"  : res = "reprovado";

    res = (nota >= 60) ? "Aprovado" : "Reprovado";
    cout << "\n Situação do aluno: " << res << "\n";

    cout << "\nDigitar outras notas? [s / n]: ";
    cin >> opc;

    if (opc == 's' or opc == 'S') {
        goto inicio;
    }


    system("pause");
    return 0;
}

/*
(expressão)  ?  true   :   false;
*/