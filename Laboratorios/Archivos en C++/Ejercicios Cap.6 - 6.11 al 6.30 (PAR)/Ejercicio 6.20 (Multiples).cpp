#include <iostream>
using namespace std;

string multiple(int primerEntero, int segundoEntero);
int main()
{
    int primerEntero;
    int segundoEntero;
    cout << "Ingrese el primer entero: "; cin >> primerEntero;
    cout << "ingrese el segundo entero: "; cin >> segundoEntero;
    cout << multiple(primerEntero, segundoEntero) << endl;
    return 0;
}

string multiple(int primerEntero, int segundoEntero){
    bool x = true;
    bool y = false;
    if (segundoEntero % primerEntero == 0){
        return "True";
    }else{
        return "False";
    }
}
