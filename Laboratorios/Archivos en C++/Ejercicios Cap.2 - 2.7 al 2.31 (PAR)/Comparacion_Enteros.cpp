#include <iostream>
 using namespace std;

 int main(){
    int num1, num2 = 0;

    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    if (num1 > num2){
        cout << num1 << " Es más grande" << endl;
    } else {
        if (num2 > num1){
            cout << num2 << " Es más grande" << endl;
        } else {
            if (num1 == num2){
                cout << "Estos numeros son iguales" << endl;
            }
        }
    }

    return 0;
 }
