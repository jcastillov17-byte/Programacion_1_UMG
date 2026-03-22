#include <iostream>
using namespace std;

class FrecuenciasCardiacas{
public:
    #define AÑO_ACTUAL 2026
    //Datos para la persona
    string nombre;
    string apellido;
    //Fecha de nacimiento
    int dia;
    int mes;
    int año;

    FrecuenciasCardiacas(string pNombre, string pApellido, int pDia, int pMes, int pAño){
        nombre = pNombre;
        apellido = pApellido;
        dia = pDia;
        mes = pMes;
        año = pAño;
    }

    void obtenerDatos(){
        cout << "Bienvenido, " << nombre << " " << apellido << endl;
        cout << "Fecha de nacimiento: " << dia << "/" << mes << "/" << año << endl;
        cout << "Edad: " << obtenerEdad() << endl;
        cout << "\n" << endl;
        cout << "Frecuencia Cardiaca Maxima: " << obtenerFrecuenciaCardiacaMaxima() << " lpm" << endl;
        cout << "\n" << endl;
        rangoFrecuenciaCardiacaEsperada();
    }

    int obtenerEdad(){
        return AÑO_ACTUAL - año;
    }

    int obtenerFrecuenciaCardiacaMaxima(){
        return 220 - obtenerEdad();
    }

    void rangoFrecuenciaCardiacaEsperada(){
        cout << "Rango de Frecuencia Cardiaca Esperada" << endl;
        cout << "Rango 50%: " << obtenerFrecuenciaCardiacaMaxima() * 0.50 << " lpm" << endl;
        cout << "Rango 85%: " << obtenerFrecuenciaCardiacaMaxima() * 0.85 << " lpm" << endl;
    }
};

int main(){
    string nombre;
    string apellido;
    int dia;
    int mes;
    int año;
    cout << "Ingrese su Nombre: "; cin >> nombre;
    cout << "Ingrese su apellido: "; cin >> apellido;
    cout << "\n" << endl;
    cout << "--- Fecha de Nacimiento ---" << endl;
    cout << "Ingrese el dia: "; cin >> dia;
    cout << "Ingrese el mes: "; cin >> mes;
    cout << "Ingrese el año: "; cin >> año;
    cout << "\n" << endl;
    FrecuenciasCardiacas Persona1(nombre, apellido, dia, mes, año);
    Persona1.obtenerDatos();
}
