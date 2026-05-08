#include "menuRegistro.h"
#include "Alumnos.h"
#include <iostream>
#include <conio.h>
using namespace std;

menuRegistro::menuRegistro()
{
    //ctor
}


void menuRegistro::menuPrincipalRegistro()
{
    int escogerOpcion = 0;
    Alumnos obtenerRegistroAlumno;

    do{
        system("cls");
        cout << "\t\t\t\t\t----------------------------------" << endl;
        cout << "\t\t\t\t\t |   ¿COMO DESEA REGISTRAR?   |" << endl;
        cout << "\t\t\t\t\t----------------------------------" << endl;
        cout << "\t\t\t\t\t1.Alumno" << endl;
        cout << "\t\t\t\t\t2.Catedratico" << endl;
        cout << "\t\t\t\t\t---------------------------------" << endl;
        cout << "\t\t\t\t\t Opciones a Escoger: [1/2]" << endl;
        cout << "\t\t\t\t\t---------------------------------" << endl;
        cout << "\n\t\t\t\t¿Que opcion desea escoger?: "; cin >> escogerOpcion;
        switch (escogerOpcion)
        {
        case 1:
            obtenerRegistroAlumno.menuInsertar();
            break;
        case 2:
            break;
        default:
            cout << "\n\t\t\t\t Opcion invalida... Por favor pruebe otra vez" << endl;
        }
        getch();
    }while(escogerOpcion != 2);
}
