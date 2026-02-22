#include <iostream>
using namespace std;

int main(){
    double n;

    do{
        double e = 1.0;
        double total = 1;
        cout << "Ingrese un numero entero:"; cin >> n;
            if (n >= 0){
                int contador = 1;
                while( contador <= n){
                    total *= contador;
                    e += 1.0 / total;
                    contador++;
                }
                    cout << "El valor constante  es " << e << endl;
            }else{
                cout << "Numero invalido" << endl;
            }
    }while (n < 0);


    return 0;
}
