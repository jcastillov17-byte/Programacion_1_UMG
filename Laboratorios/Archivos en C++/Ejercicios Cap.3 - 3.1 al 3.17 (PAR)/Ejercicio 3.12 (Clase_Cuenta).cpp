#include <iostream>
using namespace std;

class Cuenta{
public:
    int saldoCuenta;
    Cuenta(int pSaldoCuenta){
        if(pSaldoCuenta >= 0){
            saldoCuenta = pSaldoCuenta;
        }else{
            saldoCuenta = 0;
            cout << "El monto es invalido" << endl;
        }
    }
    int abonar(int pAbonar){
        saldoCuenta += pAbonar;
        return pAbonar;

    }
    int cargar(int pCargar){
        if (pCargar <= saldoCuenta){
            saldoCuenta -= pCargar;
            return pCargar;
        }else{
            cout << "El monto a cargar excede el saldo de la cuenta" << endl;
            return 0;
        }
    }

    int obtenerSaldo(){
        return saldoCuenta;
    }
};

int main()
{
    Cuenta Persona1(2000);
    cout << "Abono: " << Persona1.abonar(1000) << endl;
    cout << "Carga: " << Persona1.cargar(3000) << endl;
    cout << "Saldo Cuenta: " << Persona1.obtenerSaldo() << endl;
    cout << "\n" << endl;
    Cuenta Persona2(5000);
    cout << "Abono: " << Persona2.abonar(1000) << endl;
    cout << "Carga: " << Persona2.cargar(3000) << endl;
    cout << "Saldo Cuenta: " << Persona2.obtenerSaldo() << endl;

    return 0;
}
