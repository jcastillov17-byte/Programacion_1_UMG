#include <iostream>
using namespace std;

int main(){
    int valor = 0;
    int total = 0;

    cout << "Ingrese un numero de 5 digitos: " << endl;
    cin >> valor;

    total = valor / 10000;
    valor = valor % 10000;
    cout << total << "   ";
    total = valor / 1000;
    valor = valor % 1000;
    cout << total << "   ";
    total = valor / 100;
    valor = valor % 100;
    cout << total << "   ";
    total = valor / 10;
    valor = valor % 10;
    cout << total << "   ";

    cout << valor << endl;

    return 0;
}
