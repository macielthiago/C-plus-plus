#include <iostream>

using namespace std;

int main() {
    int num = 10;
    cout << num << "\n\n";

/*
    num = num * -1;  -   Forma tradicional
    cout << -num << "\n\n";  -  Não grava a inversão na variável, ele só faz a inversão momentâneamente
*/    

    num =- num;  // Forma simplificada

    return 0;
}

/*
    para inverter o valor de uma variável, podemos usar o método tradicional que é simplismente multiplicar o valor dessa variável por -1, ou podemos usar o operador de inversão (subtração)
*/