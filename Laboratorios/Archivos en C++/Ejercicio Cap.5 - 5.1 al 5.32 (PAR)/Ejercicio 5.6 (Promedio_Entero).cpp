#include <iostream>
using namespace std;

int main(){
    double valor = 0;
    double suma = 0;
    double promedio;
    int x;

    for (x = 0; x < 9999;){
        cout << "Ingrese un valor: " << endl;
        cin >> valor;
        if (valor != 9999){
            suma += valor;
            x++;
        }else if(valor == 9999){
            break;
        }
    }
     if (x > 0){
        promedio = suma / x;
        cout << "El promedio es: " << promedio << endl;
     }

    return 0;
}
