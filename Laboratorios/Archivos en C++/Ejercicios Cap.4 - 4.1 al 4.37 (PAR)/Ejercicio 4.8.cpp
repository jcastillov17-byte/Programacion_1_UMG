#include <iostream>
using namespace std;

int main(){

    unsigned int potencia = 1;
    unsigned int i = 1;

    cout << "Ingrese la base: " << endl;
    unsigned int x;
    cin >> x;

    cout << "Ingrese el exponente: " << endl;
    unsigned int y;
    cin >> y;

    while (i <= y){
        potencia *= x;
        ++i;
    }

    cout << potencia << endl;

    return 0;
}
