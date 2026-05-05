#ifndef JUGADOR_H
#include <iostream>
#include <string>
using namespace std;


class Jugador
{
    public:
        Jugador();
        void crearPersonaje(string pNombreJugador);

    protected:

    private:
        string nombreJugador;
};

#endif // JUGADOR_H
