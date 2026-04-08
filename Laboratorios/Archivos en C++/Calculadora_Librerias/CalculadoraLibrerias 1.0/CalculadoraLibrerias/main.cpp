#include <iostream>
#include "Calculadora.h"

using namespace std;

void Menu(){
    cout << "--- Opcion Calculadora ---" << endl;
    cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir" << endl;
}

int main()
{
    float valor1, valor2 = 0.00;
    float resultado = 0.00;
    int opcionCalculadora;
    Calculadora Suma;
    Calculadora Resta;
    Calculadora Multi;
    Calculadora Division;
    Menu();
    do{
        cout << "¿Que opcion desea escoger?: "; cin >> opcionCalculadora;
        switch(opcionCalculadora){
        case 1:
            cout << "Ingrese el primer valor: "; cin >> valor1;
            cout << "Ingrese el segundo valor: "; cin >> valor2;
            resultado = Suma.Suma(valor1, valor2);
            cout << "Resultado: " << resultado << endl;
            break;
        case 2:
            cout << "Ingrese el primer valor: "; cin >> valor1;
            cout << "Ingrese el segundo valor: "; cin >> valor2;
            resultado = Resta.Resta(valor1, valor2);
            cout << "Resultado: " << resultado << endl;
            break;
        case 3:
            cout << "Ingrese el primer valor: "; cin >> valor1;
            cout << "Ingrese el segundo valor: "; cin >> valor2;
            resultado = Multi.Multi(valor1, valor2);
            cout << "Resultado: " << resultado << endl;
            break;
        case 4:
            cout << "Ingrese el primer valor: "; cin >> valor1;
            cout << "Ingrese el segundo valor: "; cin >> valor2;
            resultado = Division.Division(valor1, valor2);
            cout << "Resultado: " << resultado << endl;
            break;
        }
    }while(opcionCalculadora != 5);

    return 0;
}
