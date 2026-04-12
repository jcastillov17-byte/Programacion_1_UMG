#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double redondearAEntero(double numero){
    return floor(numero + 0.5);
}

double redondearADecimas(double numero){
    return floor(numero * 10 + 0.5) / 10.0;
}

double redondearACentesimas(double numero){
     return floor(numero * 100 + 0.5) / 100.0;
}

double redondearAMilesimas(double numero){
     return floor(numero * 1000 + 0.5) / 1000.0;
}
int main()
{
    double numero;
    cout << "Ingrese el numero que desea redondear: "; cin >> numero;

    cout << fixed << setprecision(6);
    cout << "Valor Original: " << numero << endl;
    cout << "\n" << endl;
    cout << "A entero: " << fixed << setprecision(0) << redondearAEntero(numero) << endl;
    cout << "A decimas: " << fixed << setprecision(1) << redondearADecimas(numero) << endl;
    cout << "A centesimas: " << fixed << setprecision(2) << redondearACentesimas(numero) << endl;
    cout << "A milesimas: " << fixed <<setprecision(3) << redondearAMilesimas(numero) << endl;

    return 0;
}
