#include <iostream>
using namespace std;

int main(){
    int cantidad;
    int numeroActual;
    int menor = 0;

    cout << "Cuantos numeros desea ingresar: "; cin >> cantidad;
    cout << "Ingrese un valor: "; cin >> menor;
    for (int i = 1; i < cantidad; i++){
        cout << "Ingrese el siguiente valor: "; cin >> numeroActual;
        if (numeroActual < menor){
            menor = numeroActual;
        }
    }
    cout << "El entero mas chico es " << menor << endl;

    return 0;
}
