#include <iostream>
using namespace std;

int main(){
    long factorial = 1;
    int numero = 5;

    cout << "entero\tfactorial" << endl;
    for (int i = 1; i <= numero; i++){
        factorial *= i;
        cout << i << "\t" << factorial << endl;
    }

    return 0;
}
