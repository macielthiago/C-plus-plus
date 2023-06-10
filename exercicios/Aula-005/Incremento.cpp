#include <iostream>
#include <windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    int n1;

    n1 = 0;

    cout << n1 << "\n\n";

    n1++;  // n1--;
    cout << n1 << "\n\n";

    return 0;
}

/*
forma tradicional  forma simplificada
n1=n1+1;                > n1+=1;
n1=n1-1;                > n1-=1;
n1=n1*1;                > n1*=1;
n1=n1/1;                > n1/=1:
n1=n1%1;                > n1%=1;
*/