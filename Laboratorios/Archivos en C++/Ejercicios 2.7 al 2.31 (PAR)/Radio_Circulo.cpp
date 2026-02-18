#include <iostream>
using namespace std;

int main(){
    float PI = 3.14159;
    int total = 0;
    //radio
    int r = 0;

    cout << "Ingrese el radio del circulo: " << endl;
    cin >> r;
    total = 2 * r;
    cout << "El diametro del circulo es: " << total << endl;
    total = 2 * PI * r;
    cout << "La circuferencia del circulo es: " << total << endl;
    total = PI * (r * r);
    cout << "El area del circulo es: " << total << endl;

    return 0;
}
