#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int Cociente(int a, int b);
int Residuo(int a, int b);

int main()
{
    srand(time(0));
    int divisor = 10000;
    int digito;

    int numeroAleatorio = 1 + (rand() % 32767);
    cout << "Numero Aleatorio: " << numeroAleatorio << endl;
    cout << "Digito Separado: ";

    //Primer Digito
    digito = Cociente(numeroAleatorio, divisor);
    cout << digito << "  ";
    numeroAleatorio = Residuo(numeroAleatorio, divisor);
    divisor = divisor / 10;

    //Segundo Digito
    digito = Cociente(numeroAleatorio, divisor);
    cout << digito << "  ";
    numeroAleatorio = Residuo(numeroAleatorio, divisor);
    divisor = divisor / 10;

    //Tercer Digito
    digito = Cociente(numeroAleatorio, divisor);
    cout << digito << "  ";
    numeroAleatorio = Residuo(numeroAleatorio, divisor);
    divisor = divisor / 10;

    //Cuarto Digito
    digito = Cociente(numeroAleatorio, divisor);
    cout << digito << "  ";
    numeroAleatorio = Residuo(numeroAleatorio, divisor);
    divisor = divisor / 10;

    //Quinto Digito
    cout << numeroAleatorio << endl;

    return 0;
}

int Cociente(int a, int b){
    return a / b;
}

int Residuo(int a, int b){
    return a % b;
}
