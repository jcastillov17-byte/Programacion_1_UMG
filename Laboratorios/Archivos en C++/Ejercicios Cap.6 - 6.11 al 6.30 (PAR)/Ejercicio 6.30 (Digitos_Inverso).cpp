#include <iostream>
using namespace std;

int Cociente(int a, int b);
int Residuo(int a, int b);

int main()
{
    int divisor = 10;
    int digito;
    int numero;
    cout << "Ingrese un numero: "; cin >> numero;
    cout << "\n" << endl;
    cout << "Numero Original: " << numero << endl;
    cout << "Digito Inverso: ";

    //Primer Digito
    digito = Residuo(numero, divisor);
    cout << digito << "  ";
    numero = Cociente(numero, divisor);

    //Segundo Digito
    digito = Residuo(numero, divisor);
    cout << digito << "  ";
    numero = Cociente(numero, divisor);

    //Tercer Digito
    digito = Residuo(numero, divisor);
    cout << digito << "  ";
    numero = Cociente(numero, divisor);

    //Cuarto Digito
    digito = Residuo(numero, divisor);
    cout << digito << "  ";
    numero = Cociente(numero, divisor);

    //Quinto Digito
    cout << numero << endl;

    return 0;
}

int Cociente(int a, int b){
    return a / b;
}

int Residuo(int a, int b){
    return a % b;
}
