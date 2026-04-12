#include <iostream>
using namespace std;

int esPerfecto(int numero);
void imprimerDivisores(int numero);

int main()
{
    int i;
    for (i = 1; i <= 1000; i++){
        if(esPerfecto(i)){
            cout << i << " es perfecto\nDivisores: ";
            imprimerDivisores(i);
            cout << endl;
        }
    }
    return 0;
}

int esPerfecto(int numero){
    int suma = 0;
    int i;

    for (i = 1; i < numero; i++){
        if (numero % i == 0){
            suma += i;
        }
    }
    return suma == numero;
}

void imprimerDivisores(int numero){
    int i;
    for (i = 1; i < numero; i++){
        if (numero % i == 0){
            cout << i << " ";
        }
    }
}
