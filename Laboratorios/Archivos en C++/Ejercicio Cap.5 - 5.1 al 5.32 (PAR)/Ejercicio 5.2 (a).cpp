#include <iostream>
using namespace std;

int main(){
    unsigned int suma = 0;
    unsigned int cuenta;

    for (cuenta = 1; cuenta < 99; cuenta += 2){
        suma += cuenta;
    }
    cout << suma << endl;

    return 0;
}
