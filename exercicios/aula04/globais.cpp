#include <iostream>
using namespace std;

int n1, n2; // variáveis globais

int main() {

    int n3, n4;  // variáveis locais
    int res1, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res1 = n1 / n2;
    res2 = n1 % n2;
    cout << "div: " << res1 << "\n";
    cout << "res: " << res2 << "\n";

    system("pause");
    return 0;
}

/*
    Operadores e ordem de precedência:
    () - parenteses
    % - módulo
    / - divisão
    * - multiplicação
    + - adição
    - - subtração
*/