#include <iostream>
#include "Calculadora.h"

using namespace std;

int main()
{
    Calculadora Suma;
    Calculadora Resta;
    Calculadora Multi;
    Calculadora Division;
    float resultado = 0.00;
    resultado = Suma.Suma(20, 30);
    cout << "Suma" << endl;
    cout << "El resultado es: " << resultado << endl;
    cout << "\n" << endl;
    cout << "Resta" << endl;
    resultado = Resta.Resta(50, 30);
    cout << "El resultado es: " << resultado << endl;
    cout << "\n" << endl;
    cout << "Multiplicacion" << endl;
    resultado = Multi.Multi(10, 2);
    cout << "El resultado es: " << resultado << endl;
    cout << "\n" << endl;
    cout << "Division" << endl;
    resultado = Division.Division(6, 2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}
