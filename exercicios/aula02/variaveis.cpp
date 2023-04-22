#include <iostream>

using namespace std;
int main() 
{
//Tipo Nome;
//Tipo Nome = Valor;

    
    int vidas = 0; // Variável do tipo inteira = vai receber números inteiros - 10, 25, 921...
    char letra = 'c'; // Variável do tipo caractere = vai receber uma letra/ 1bt - 'B', 'C'
    double decimal = 5.2; // Variável do tipo real = vai receber números reais - 2.5999
    float decimal2 = 5.2; //Variável identico ao "double", mas de precisão menor - 2.6
    bool vivo = true; // Variável do tipo booleano = vai receber verdadeiro ou falso - true=1 | false=0
    string nome = "Thiago";// Variável do tipo texto = vai receber palavras diferente do "char" - "Thiago", "Brasil"

    cout << "digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "digite seu nome: ";
    cin >> nome;

    // cout << vidas  << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << vivo << "\n" << nome << "\n";

/*
    cout << vidas << "\n";
    cout << decimal2 << "\n";
    cout << letra << "\n";
    cout << decimal << "\n";
    cout << vivo << "\n";
    cout << nome << "\n";
*/
    return 0;
}