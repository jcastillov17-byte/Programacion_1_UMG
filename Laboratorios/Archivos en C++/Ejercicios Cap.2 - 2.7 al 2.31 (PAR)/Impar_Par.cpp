#include <iostream>
using namespace std;

int main(){
    int valor = 0;

    cout << "Ingrese un numero: " << endl;
    cin >> valor;
    if (valor %2 == 0){
        cout << "El numero " << valor << " es par" << endl;
    } else {
        cout << "El numero " << valor << " es impar" << endl;
    }
    return 0;
}
