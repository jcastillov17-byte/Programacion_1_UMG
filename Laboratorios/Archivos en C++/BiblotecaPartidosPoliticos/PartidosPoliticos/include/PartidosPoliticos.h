#ifndef PARTIDOSPOLITICOS_H
#define PARTIDOSPOLITICOS_H
#include <string>
using namespace std;


class PartidosPoliticos
{
    public:
        static const int NUMERO_PARTIDOS = 5;
        static const int NUMERO_RONDAS = 4;
        static const int MAXIMA_LONGITUD_CADENA = 100;
        static const int MAX_VOTOS = 10000;
        static const int MIN_VOTOS = 0;

        PartidosPoliticos();

        void llamarCiclo();
        int busquedaAleatoria(int maximo, int minimo);
        void llenarMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_RONDAS + 1]);
        void imprimirMatrizLinea();
        float imprimirMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_RONDAS + 1], char partidoPolitico[NUMERO_PARTIDOS][MAXIMA_LONGITUD_CADENA], string nombreDepartamento);

    protected:

    private:
};

#endif // PARTIDOSPOLITICOS_H
