#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int long n;//Se declara la variable n para poder aguardar los numeros aleatorios

    n = (rand() % 2) + 1;// Rango entre 1 y 2
    if(n >= 1 && n <= 2){
        cout << "Numero Aleatorio: " << n << endl;
    }

    n = (rand() % 100) + 1;// Rango entre 1 y 100
    if(n >= 1 && n <= 100){
        cout << "Numero Aleatorio: " << n << endl;
    }

    n = (rand() % 9) + 0;// Rango entre 0 y 9
    if(n >= 0 && n <= 9){
        cout << "Numero Aleatorio: " << n << endl;
    }

    n = (rand() % 13) + 1000;// Rango entre 1000 y 1112
    if(n >= 1000 && n <= 1112){
        cout << "Numero Aleatorio: " << n << endl;
    }

    n = (rand() % 1) + -1;// Rango entre -1 y 1
    if(n >= -1 && n <= 1){
        cout << "Numero Aleatorio: " << n << endl;
    }

    n = (rand() % 11) + -3;// Rango entre -3 y 11
    if(n >= -3 && n <= 11){
        cout << "Numero Aleatorio: " << n << endl;
    }

    return 0;
}
