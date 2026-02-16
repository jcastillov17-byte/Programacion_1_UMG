#include <iostream>
using namespace std;

int main(){
    float PesoEnLibras = 0;
    float PesoEnKilogramos = 0;
    float AlturaEnPulgadas = 0;
    float AlturaEnMetros = 0;
    float total = 0;
    int opcion = 0;

        cout << "--- Opciones --- \n1. Peso en libras y altura en pulgadas \n2. Peso en kilogramos y altura en metros" << endl;
        cout << "Escoga una opcion: " << endl;
        cin >> opcion;
        switch (opcion){
        case 1:
            cout << "Ingrese su peso en libras: " << endl;
            cin >> PesoEnLibras;

            cout << "Ingrese su altura en pulgadas: "<< endl;
            cin >> AlturaEnPulgadas;

            total = (PesoEnLibras * 704) / (AlturaEnPulgadas * AlturaEnPulgadas);
            cout << "Resultado: " << total << endl;
            break;
        case 2:
            cout << "Ingrese su peso en kilogramos: " << endl;
            cin >> PesoEnKilogramos;

            cout << "Ingrese su altura en metros: "<< endl;
            cin >> AlturaEnMetros;

            total = PesoEnKilogramos / (AlturaEnMetros* AlturaEnMetros);
            cout << "Resultado: " << total << endl;
            break;
        }

    cout << "--- VALORES DE BMI --- \nBajo peso: menos de 18.5 \nNormal: entre 18.5 y 24.9 \nSobrepeso: entre 25 y 24.9 \nObeso: 30 a más" << endl;

    return 0;
}
