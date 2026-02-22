#include <iostream>
using namespace std;

float horasExtras(float tarifaEmpleado, float horasTrabajadas);

int main(){
    //inicializamos variables
    int horasTrabajadas = 0;
    float tarifaEmpleado;

    cout << "Introduzca las horas trabajadas (-1 para salir): "; cin >> horasTrabajadas;
    while (horasTrabajadas != -1){
            cout << "Introduzca la tarifa por horas del empleado ($00.00): "; cin  >> tarifaEmpleado;
        if (horasTrabajadas <= 40){
            cout << "El salario es " << tarifaEmpleado * horasTrabajadas << "\n" << endl;
        } else {
            cout << "El salario es " << horasExtras(tarifaEmpleado, horasTrabajadas)<< "\n" <<endl;
        }
        cout << "Introduzca las horas trabajadas (-1 para salir): "; cin >> horasTrabajadas;
    }


    return 0;
}

float horasExtras(float tarifaEmpleado, float horasTrabajadas){
    return (40 * tarifaEmpleado) + ((horasTrabajadas - 40) * (tarifaEmpleado * 1.5));
}
