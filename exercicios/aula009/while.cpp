#include <iostream>
using namespace std;

int main() {

    int cont;

    cont=0;

    while (cont <= 20) // podemos fazer o incremento dentro da condição também com ++ ou -- (cont ++ <= 20)
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
    


    system("pause");
    return 0;
}