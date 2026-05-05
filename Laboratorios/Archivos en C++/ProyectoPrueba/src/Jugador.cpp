#include "Jugador.h"
#include <iostream>
using namespace std;

Jugador::Jugador()
{
    //ctor
}

void Jugador::crearPersonaje(string pNombreJugador)
{
    nombreJugador = pNombreJugador;
    cout << "El nombre del jugador: " << nombreJugador << endl;
}

string getNombre(){
    return nombreJugador;
}
void setNombre(string pNombreJugador){
    nombreJugador = pNombreJugador;
}


