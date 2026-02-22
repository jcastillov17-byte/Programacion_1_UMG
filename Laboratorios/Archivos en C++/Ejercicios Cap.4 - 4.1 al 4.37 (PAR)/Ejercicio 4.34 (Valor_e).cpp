#include <iostream>
using namespace std;

int main(){
    double x;
    double n;

    do{
        double potenciaX = 1.0;
        double elevadoX = 1.0;
        double total = 1;
        cout << "Ingrese el numero base:"; cin >> n;
        cout << "Ingrese la potencia: "; cin >> x;
            if (n >= 0){
                int contador = 1;
                while( contador <= n){
                    total *= contador;
                    potenciaX *= x;
                    elevadoX += potenciaX / total;
                    contador++;
                }
                    cout << "El valor constante  es " << elevadoX << endl;
            }else{
                cout << "Numero invalido" << endl;
            }
    }while (n < 0);


    return 0;
}
