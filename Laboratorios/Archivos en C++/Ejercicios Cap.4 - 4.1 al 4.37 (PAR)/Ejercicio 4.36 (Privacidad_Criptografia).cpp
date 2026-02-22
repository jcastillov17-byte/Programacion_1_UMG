#include <iostream>
using namespace std;

int main(){
    int numeroEntero;
    int digitoUno;
    int digitoDos;
    int digitoTres;
    int digitoCuatro;

    cout << "Ingrese 4 digitos enteros: "; cin >> numeroEntero;
    digitoUno = (numeroEntero / 1000 + 7) % 10;
    numeroEntero %= 1000;

    digitoDos = (numeroEntero / 100 + 7) % 10;
    numeroEntero %= 100;

    digitoTres = (numeroEntero / 10 + 7) % 10;

    digitoCuatro = (numeroEntero % 10 + 7) % 10;

    cout << "Numero cifrado: " << digitoTres << digitoCuatro << digitoUno << digitoDos << endl;

    return 0;
}
