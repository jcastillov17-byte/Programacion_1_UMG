#include <iostream>
using namespace std;

int main(){
    double total = 0;
    int numeroProducto;
    double cantidadVendida;

    cout << "opciones\n 1.$2.98\n2. $4.50\n3. $9.98\n4. $4.49\n5. $6.87" << endl;

    cout << "Que prodcuto desea (o -1 para salir): "; cin >> numeroProducto;
    do{
        cout << "Cuantos productos vendio: "; cin >> cantidadVendida;
        switch (numeroProducto){
            case 1:
                total = total + (cantidadVendida * 2.98);
                break;
            case 2:
                total = total + (cantidadVendida * 4.50);
                break;
            case 3:
                total = total + (cantidadVendida * 9.98);
                break;
            case 4:
                total = total + (cantidadVendida * 4.49);
                break;
            case 5:
                total = total + (cantidadVendida * 6.87);
                break;
        }

        cout << "Que producto desea (o -1 para salir): "; cin >> numeroProducto;

    }while(numeroProducto != -1);

    cout << "El total es: " << total << endl;

    return 0;
}
