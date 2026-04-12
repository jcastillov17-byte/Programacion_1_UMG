#include <iostream>
using namespace std;

int enteroPotencia(int base, int exponente);

int main()
{
    int base = 5;
    int exponente = 2;
    cout << base << " elavado a " << exponente << " es: " << enteroPotencia(base, exponente) << endl;
    return 0;
}

int enteroPotencia(int base, int exponente){
    int total = 1;
    int i;

    if (exponente != 0){
        for(i = 0; i < exponente; i++){
            total = total * base;
        }
    }else{
        cout << "exponente no valido" << endl;
    }
    return total;
}
