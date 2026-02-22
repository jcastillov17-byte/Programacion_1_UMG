#include <iostream>
using namespace std;

float nuevoSaldo(float saldoInicial, float cargosTotales, float creditosTotales);

int main(){
    //Definir variables
    int numeroCuenta;
    float saldoInicial;
    float cargosTotales;
    float creditosTotales;
    float limiteCredito;

    cout << "Introduzca el numero de cuenta (o -1 para salir): "; cin >> numeroCuenta;

    while (numeroCuenta != -1){
        cout << "Introduzca el saldo inicial: "; cin >> saldoInicial;
        cout << "Introduzca los cargos totales: "; cin >> cargosTotales;
        cout << "Introduzca los creditos totales: "; cin >> creditosTotales;
        cout << "Introduzca el limite de credito: "; cin >> limiteCredito;
        if (saldoInicial < nuevoSaldo(saldoInicial, cargosTotales, creditosTotales)){
            cout << "El nuevo saldo es " << nuevoSaldo(saldoInicial, cargosTotales, creditosTotales) << endl;
            cout << "cuenta:\t " << numeroCuenta << endl;
            cout << "Limite de credito: " << limiteCredito << endl;
            cout << "Saldo:\t " << nuevoSaldo(saldoInicial, cargosTotales, creditosTotales) << endl;
            cout << "Se excedio el limite de su credito." << "\n" << endl;

        } else {
            cout << "El nuevo saldo es " << nuevoSaldo(saldoInicial, cargosTotales, creditosTotales) << "\n" << endl;
        }
        cout << "Introduzca el numero de cuenta (o -1 para salir): "; cin >> numeroCuenta;
    }

    return 0;
}

float nuevoSaldo(float saldoInicial, float cargosTotales, float creditosTotales){
    return saldoInicial + cargosTotales - creditosTotales;
}
