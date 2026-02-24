#include <iostream>
using namespace std;

int main(){
    int numeroImpar;
    int i;
    int j;
    int k;



    do{
        cout << "Ingrese un numero Impar del 1-19: "; cin >> numeroImpar;
    }while(numeroImpar < 1 || numeroImpar > 19 || numeroImpar %2 == 0);

    for (i = 1; i <= numeroImpar; i += 2){
            for (j = 0; j < (numeroImpar - i) / 2; j++) cout << " ";
            for (k = 0; k < i; k++) cout << "*";
            cout << endl;
        }

        for (i = numeroImpar - 2; i >= 1; i -= 2){
            for (j = 0; j < (numeroImpar - i) / 2; j++) cout << " ";
            for (k = 0; k < i; k++) cout << "*";
            cout << endl;
        }

    return 0;
}
