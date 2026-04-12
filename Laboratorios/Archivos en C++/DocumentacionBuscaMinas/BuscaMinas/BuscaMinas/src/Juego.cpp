#include "Juego.h"
#include <fstream>
#include <unistd.h>

int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);//Genera numeros aleatorios
	}

	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);//Altura del tablero
	}

	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);//Ancho del tablero
	}

	Juego::Juego(Tablero tablero, int cantidadMinas)//Constructor
	{
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente();
	}

    //Genera las minas aleatoriamente
	void Juego::colocarMinasAleatoriamente()
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))//Se agrega la mina aleatoriamente en X y Y
			{
				minasColocadas++;//Agrega las minas
			}
		}
	}

	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";//Se le pide al usuario la fila en la que se puede encontrar la mina
		cin >> fila;
		return fila - 1;//Se borra la fila en la que se encontraba la mina
	}

	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";//Se le pide al usuario la columna en la que se puede encontrar la mina
		cin >> columna;
		return columna - 1;//Se borra la mina en la que se encontraba la mina
	}

	bool Juego::jugadorGana()
	{
	    //Funcion de conteo de celdas sin minas y sin descubrir
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
		if (conteo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Juego::iniciar()//Juego principal
	{
		int fila, columna;
		while (true)
		{
			this->tablero.imprimir();//Imprime el tablero ¿
			fila = this->solicitarFilaUsuario();//Se solicita la fila del usuario
			columna = this->solicitarColumnaUsuario();//Se solicita la columna del usuario
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);//Muestra si la mina fue descubierta
			if (!respuestaAUsuario)
			{
			    //Muestra un mensaje si perdio el juego
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}

			if (this->jugadorGana())
			{
			    //Muestra un mensaje si gano el juego
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}
		}
	}
