#include <iostream>

using namespace std;

int main(){
    float num1, num2, total = 0;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;
    total = num1 + num2;
    cout << "Suma: " << total << endl;
    total = num1 * num2;
    cout << "Producto: " << total << endl;
    total = num1 - num2;
    cout << "Diferencia: " << total << endl;
    total = num1 / num2;
    cout << "Cociente: " << total << endl;

    return 0;
}
