#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)//Constructor
{
    //
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}
void Config::menuConfiguracion()//Menu para el usuario
{
    //Variables
    int opciones;
    int valorIngresado;
    bool repetir = true;
    do
    {
        system("cls"); //Funcion para borrar el contenido del CMD
        //Menu
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: "; // Se le pedi la opcion al usuario
        cin >> opciones;
        if (opciones!=6)//La condicion lo regresara al menu principal
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";//Un valor que el usuario desea cambiar
            cin >> valorIngresado;
        }
        //Case para validar las opciones del menu
        //Se usa set para obtener
        switch (opciones)
        {
        case 1:
            {
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;//Se actualizada la fila del tablero
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;//Se actualizada la columna del tablero
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;//Se cambia la posicion de las minas
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;//Modo para desarrollador para actualizar el modo de juego
                break;
            }
        case 5:
            {
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;//Actualizar las vidas que desea agregar el usuario
                break;
            }
        case 6: repetir = false;
                break;
        }
        system("pause");
    } while (repetir);
}
//Obtenemos los datos usando set y get
int Config::getfilasTablero()
{
    return this->filasTablero;//Establecer las filas del tablero
}
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero=filasTablero;//Obtener las filas de tablero
}
int Config::getcolumnasTablero()
{
    return this->columnasTablero;//Establecer columnas del tablero
}
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;//Obtener columnas del tablero
}
int Config::getminasTablero()
{
    return this->minasTablero;//Establecer minas del tablero
}
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;//Obtener minas del tablero
}
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;//Establecer el modo desarrollador
}
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;//Obtener el modo desarrollador
}
int Config::getvidasTablero()
{
    return this->vidasTablero;//Establecer vidas del tablero
}
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;//Obtener vidas del tablero
}


