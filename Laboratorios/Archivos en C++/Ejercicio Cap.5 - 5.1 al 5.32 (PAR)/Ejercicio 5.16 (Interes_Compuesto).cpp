#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double monto;
    double principal = 1000.00;
    double tasa = .05;

    cout << "Anio" << setw(21) << "Monto depositado" << endl;
    cout << fixed << setprecision(2);

    for (unsigned int anio = 1; anio <= 10; ++anio){
        monto = principal * pow(1.0 + tasa, anio );

        cout << setw(4) << anio << setw(21) << monto << endl;
    }


    return 0;
}
