#include <iostream>
using namespace std;

int main(){
    int n;
    int total = 1;

    do{
        cout << "Ingrese un numero entero:"; cin >> n;
            if (n >= 0){
                while( n > 0){
                    total *= n;
                    n -= 1;
                }
                    cout << "El factorial es " << total << endl;
            }else{
                cout << "Numero invalido" << endl;
            }
    }while (n < 0);


    return 0;
}
