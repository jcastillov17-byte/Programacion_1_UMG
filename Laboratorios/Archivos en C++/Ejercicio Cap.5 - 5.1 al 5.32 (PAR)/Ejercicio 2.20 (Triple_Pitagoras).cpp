#include <iostream>

using namespace std;

int main(){
    int ladoUno;
    int ladoDos;
    int hipotenusa;
    int contador = 0;

    cout << "Lado 1\tLado2 \tHipotenusa" << endl;
    cout << "\n" << endl;

    for (ladoUno = 1; ladoUno <= 500; ladoUno++){
        for (ladoDos = 1; ladoDos <= 500; ladoDos++){
            for (hipotenusa = 1; hipotenusa <= 500; hipotenusa++){
                if ((ladoUno * ladoUno) + (ladoDos * ladoDos) == (hipotenusa * hipotenusa)){
                    cout << ladoUno << "\t" << ladoDos << "\t" << hipotenusa << endl;
                    contador++;
                }
            }
        }
    }

    cout << "\nSe encontraron " << contador << " triple de pitagoras" << endl;



    return 0;
}
