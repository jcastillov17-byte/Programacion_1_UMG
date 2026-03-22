#include <iostream>
using namespace std;

class Empleado{
public:
    string nombre;
    string apellido;
    int salarioMensual;
    #define AUMENTO 1.10

    Empleado(string pNombre, string pApellido, int pSalarioMensual){
        nombre = pNombre;
        apellido = pApellido;
        if (pSalarioMensual >= 0){
            salarioMensual = pSalarioMensual;
        }else{
            salarioMensual = 0;
        }
    }

    int establecer(){
        return salarioMensual;
    }

    void obtener(){
        cout << "Empleado: " << nombre << " " << apellido << endl;
        cout << "Sueldo mensual: " << salarioMensual << endl;
        cout << "Sueldo anual: " << salarioMensual * 12 << endl;
        cout << "Sueldo anual con un aumento del 10%: " << salarioMensual * 12 * AUMENTO << endl;
    }



};

int main(){
    Empleado Empleado1("Fernando", "Castillo", 1200);
    Empleado1.obtener();
    cout << "\n" << endl;
    Empleado Empleado2("Roberto", "Lopez", -1);
    Empleado2.obtener();

 return 0;
}
