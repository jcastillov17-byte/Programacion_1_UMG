#include <iostream>
using namespace std;

float calcularSuma (float numeroUno, float numeroDos);
float calcularResta (float numeroUno, float numeroDos);
float calcularMultiplicacion (float numeroUno, float numeroDos);
float calcularDivision (float numeroUno, float numeroDos);
int calcularModulo (int numeroUno, int numeroDos);

int main(){
    float numeroUno;
    float numeroDos;
    int opcionCalculadora;

    do
    {
        cout << "--- Opciones Calculadora ---\n1. Suma (+)\n2. Resta (-)\n3. Division(/)\n4. Multiplicacion(*)\n5. Residuo(%)\n6. Fin" << endl;
        cout << "Que opcion desea escoger: " << endl;
        cin >> opcionCalculadora;
        if (opcionCalculadora >= 1 && opcionCalculadora <= 5)
        {
            cout << "Ingrese el primer valor: " << endl;
            cin >> numeroUno;
            cout << "Ingrese el segundo valor: " << endl;
            cin >> numeroDos;
            switch (opcionCalculadora)
            {
            case 1:
                cout << "resultado: " << calcularSuma(numeroUno, numeroDos) << endl;
                break;
            case 2:
                cout << "resultado: " << calcularResta(numeroUno, numeroDos) << endl;
                break;
            case 3:
                if (numeroDos != 0){
                    cout << "resultado: " << calcularDivision(numeroUno, numeroDos) << endl;
                } else{
                 cout << "Error, no se puede dividir entre 0" << endl;
                }
                break;
            case 4:
                cout << "resultado: " << calcularMultiplicacion(numeroUno, numeroDos) << endl;
                break;
            case 5:
                cout << "resultado: " << calcularModulo(numeroUno, numeroDos) << endl;
                break;
            }
        } else if (opcionCalculadora != 6){
            cout << "Opcion no valido, intentelo de nuevo" << endl;
        }

    }while (opcionCalculadora != 6);

    return 0;
}

float calcularSuma(float numeroUno, float numeroDos)
{
    return numeroUno + numeroDos;
}

float calcularResta(float numeroUno, float numeroDos)
{
    return numeroUno - numeroDos;
}

float calcularMultiplicacion(float numeroUno, float numeroDos)
{
    return numeroUno * numeroDos;
}

float calcularDivision (float numeroUno, float numeroDos)
{
    return numeroUno / numeroDos;
}

int calcularModulo (int numeroUno, int numeroDos)
{
    return numeroUno % numeroDos;
}
