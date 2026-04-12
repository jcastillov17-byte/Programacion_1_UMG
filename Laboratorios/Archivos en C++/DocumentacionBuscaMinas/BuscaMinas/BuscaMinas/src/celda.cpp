#include "Celda.h"
#include <iostream>
using namespace std;
Celda::Celda()
{
}
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)//Constructor
{
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;//Obtener las coordenadas X del tablero
}
int Celda::getCoordenadaX()
{
    return this->coordenadaX;//Establecer las coordenadas X del tablero
}
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;//Obtener coordenada Y del tablero
}
int Celda::getCoordenadaY()
{
    return this->coordenadaY;//Establecer coordenada Y del tablero
}
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }
    else{
        this->mina = estadoMina;//Obtener mina
        return true;
    }
}
bool Celda::getMina()
{
    return this->mina;//Establecer mina
}
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;//Obtener mina descubierta
}
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;//Establecer mina descubierta
}
void Celda::imprimirCelda()//Imprime la celda de las minas
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}


