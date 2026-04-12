#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calcularCargos(double hora){
    double coutaMinima = 2.00;
    if (hora > 3.0){
        coutaMinima += ceil(hora - 3.0) * 0.50;
    }
    if (coutaMinima > 10.00){
        coutaMinima = 10.00;
    }
    return coutaMinima;
}
int main()
{
    float automovilUno;
    float automovilDos;
    float automovilTres;

    cout << "Ingrese las horas: "; cin >> automovilUno;
    cout << "Ingrese las horas: "; cin >> automovilDos;
    cout << "Ingrese las horas: "; cin >> automovilTres;

    cout << "\n" << endl;

    double cargoUno = calcularCargos(automovilUno);
    double cargoDos = calcularCargos(automovilDos);
    double cargoTres = calcularCargos(automovilTres);

    cout << left << setw(15) << "Automovil" << setw(15) << "Horas" << setw(15) << "Cargo" << endl;

    cout << fixed << setprecision(2) << endl;
    cout << left << setw(15) << "1" << setw(15) << automovilUno << setw(15) << cargoUno << endl;
    cout << left << setw(15) << "2" << setw(15) << automovilDos << setw(15) << cargoDos << endl;
    cout << left << setw(15) << "3" << setw(15) << automovilTres << setw(15) << cargoTres << endl;
    cout << left << setw(15) << "TOTALES" << setw(15) << (automovilUno + automovilDos + automovilTres) << setw(15) << (cargoUno + cargoDos+ cargoTres) << endl;


    return 0;
}
