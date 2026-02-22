#include <iostream>
using namespace std;

int main(){
    //inicializar las varibles
    unsigned int aprobados = 0;
    unsigned int reprobrados = 0;
    unsigned int contadorEstudiantes = 1;
    int resultado = 0;

    while (contadorEstudiantes <= 10){
        do{
            cout << "Escriba el resultado (1 = aprobado, 2 = reprobado):";
            cin >> resultado;
            if (resultado != 1 && resultado != 2){
                cout << "Numero no valido, intente de nuevo" << endl;
            }
        }while (resultado != 1 && resultado != 2);

        if (resultado == 1)
            aprobados = aprobados + 1;
        else
            reprobrados = reprobrados + 1;

        contadorEstudiantes = contadorEstudiantes + 1;
    }

    cout << "Aprobados " << aprobados << "\nReprobados " << reprobrados << endl;

    if ( aprobados > 8 )
        cout << "Bono para el instructor" << endl;

    return 0;
}
