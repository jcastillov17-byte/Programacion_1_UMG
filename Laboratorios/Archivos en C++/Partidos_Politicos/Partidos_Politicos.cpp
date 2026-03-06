// Ejemplo de utilización de matrices codigo heredado de C
//Declaraciòn de Bibliotecas y librerias estandar de C++
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;
//Declaraciòn de Constantes
#define NUMERO_PARTIDOS 5
//define NUMEROVOTOS 5
#define NUMERO_RONDAS 4
#define MAX_VOTOS 10000
#define MIN_VOTOS 0
#define MAXIMA_LONGITUD_CADENA 100
//Declaraciòn de Prototipos de Funciòn
void llamaCiclo();   //Funciòn que controla el Ciclo comparativo de datos por todas las facultades
int busquedaAleatorios(int minimo, int maximo); //Funciòn que permite obtener valores aleatorios en las notas de cada alumno
void llenarMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_RONDAS + 1]); //Funciòn que permite asignar a cada alumno las notas aleatorios
void imprimirMatrizLinea(); //Funciòn que apoya el despliegue de titulos en el comparativo de facultades
float imprimirMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_RONDAS + 1], char partidoPolitico[NUMERO_PARTIDOS][MAXIMA_LONGITUD_CADENA], string nombreDepartamento);
//Funciòn que permite el despliegue de cada facultad con sus alumnos y el calculo de promedios (menor y mayor)
int main()
{
    srand(getpid()); //Proceso preparativo para generaciòn de valores aleatorios
    llamaCiclo();
    return 0;
}
void llamaCiclo()
{
    //Declaraciòn de matrices por cada facultad
    float matriz_departamento_1[NUMERO_PARTIDOS][NUMERO_RONDAS + 1];
    float matriz_departamento_2[NUMERO_PARTIDOS][NUMERO_RONDAS + 1];
    float matriz_departamento_3[NUMERO_PARTIDOS][NUMERO_RONDAS + 1];
    char opcion;  //Variable que controla el ciclo de repeticiòn
    bool repetir = true;  //Variable booleana del ciclo de repeticiòn
    //Declaraciòn de variables flotantes para el calculo de promedios
    float promedio_departamento_1;
    float promedio_departamento_2;
    float promedio_departamento_3;
    //Declaraciòn de matriz que almacenarà los nombres de los alumnos
    char partidoPolitico[NUMERO_PARTIDOS][MAXIMA_LONGITUD_CADENA] = {"Semilla","UNE","VAMOS","CABAL","VOS"};
    //Ciclo repetitivo del comparativo de facultades
    do
    {
        system("cls");
        //Inicializar los promedios por facultad
        promedio_departamento_1=0;
        promedio_departamento_2=0;
        promedio_departamento_3=0;
        cout << "*** Comparativo de Partidos Politicos ***" << endl << endl;
        llenarMatriz(matriz_departamento_1); //Calculo de las notas por facultad
        promedio_departamento_1 = imprimirMatriz(matriz_departamento_1, partidoPolitico, "Quetzaltengo"); //Despliegue de valores por facultad
        llenarMatriz(matriz_departamento_2);
        promedio_departamento_2 = imprimirMatriz(matriz_departamento_2, partidoPolitico, "Alta Verapaz");
        llenarMatriz(matriz_departamento_3);
        promedio_departamento_3 = imprimirMatriz(matriz_departamento_3, partidoPolitico, "Zacapa");
        //Calculo del mejor promedio de las facultades
        if (promedio_departamento_1 > promedio_departamento_2 && promedio_departamento_1 > promedio_departamento_3)
        {
            //Facultad 1 es mayor
            cout << " El departamento con el mejor promedio de voto es : " << "Quetzaltenango" << " Promedio: " << promedio_departamento_1 << endl;
        } else
        if (promedio_departamento_2 > promedio_departamento_1 && promedio_departamento_2 > promedio_departamento_3)
        {
            //Facultad 2 es mayor
            cout << "  El departamento con el mejor promedio de voto es :  " << "Alta Verapaz" << " Promedio: " << promedio_departamento_2 << endl;
        } else
        if (promedio_departamento_3 > promedio_departamento_2 && promedio_departamento_3 > promedio_departamento_1)
        {
            //Facultad 3 es mayor
            cout << "  El departamento con el mejor promedio de voto es :  " << "Zacapa" << " Promedio: " << promedio_departamento_3 << endl;
        } else
        {
            //Varias facultades son iguales en promedio
            cout << " Algunas facultades tienen el mismo promedio " << endl << endl;
        }
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);
}
int busquedaAleatorios(int minimo, int maximo)
{
    //Calculo de valores aleatorios tomando como base la nota minima y màxima del parcial
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void llenarMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_RONDAS + 1])
{
    //Funciòn que permite llenar cada matriz con valores aleatorios
    int y, x;
    for (y = 0; y < NUMERO_PARTIDOS; y++)
    {
        float suma = 0;
        int votos = 0;
        for (x = 0; x < NUMERO_RONDAS; x++)
        {
            if (x == 0 || x == 3)  //Calculo del primer parcial o actividades
            {
                votos = busquedaAleatorios(MIN_VOTOS, 10000);
            } else if (x == 1)  //Calculo del segundo parcial
            {
                votos = busquedaAleatorios(MIN_VOTOS, 10000);
            } else if (x == 2)  //Calculo del examen final
            {
                votos = busquedaAleatorios(MIN_VOTOS, 10000);
            }
            suma += (float)votos;
            matriz[y][x] = votos;
            votos=0;
        }
        // Agregar promedio al final de la matriz

        matriz[y][NUMERO_RONDAS] = suma;
    }
}

void imprimirMatrizLinea()
{
    //Funciòn que despliega titulo de cada nota calculada
    int x;

    cout << "+--------------";
    for (x = 0; x < NUMERO_RONDAS + 1; x++)
    {
        cout << "+--------------";
    }
    cout << "+\n";
}
float imprimirMatriz(float matriz[NUMERO_PARTIDOS][NUMERO_RONDAS + 1], char partidoPolitico[NUMERO_PARTIDOS][MAXIMA_LONGITUD_CADENA], string nombreDepartamento)
{
    //Funciòn que imprime la matriz en pantalla y realizando los calculos necesarios del promedio
    int y, x;

    float promedioMayor = matriz[0][NUMERO_RONDAS];
    float promedioMenor = matriz[0][NUMERO_RONDAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;
    char partidoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char partidoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(partidoPromedioMayor, partidoPolitico[0], MAXIMA_LONGITUD_CADENA);
    memcpy(partidoPromedioMenor, partidoPolitico[0], MAXIMA_LONGITUD_CADENA);
    cout << nombreDepartamento << endl;
    //cout << "(Ronda1)=>Primer Parcial  (Nota2)=>Segundo Parcial (Nota3)=>Final (Nota4)=>Actividades" << endl;
    imprimirMatrizLinea();
    cout << setw(13) << "Partido Politico";
    for (x = 0; x < NUMERO_RONDAS; x++)
    {
        cout << setw(13) << "Ronda" << x + 1;
    }
    cout << setw(15) << "Total" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < NUMERO_PARTIDOS; y++)
    {
        cout << " " << setw(15) << partidoPolitico[y] << "";
        float suma = 0;
        for (x = 0; x < NUMERO_RONDAS; x++)
        {
            int votos = matriz[y][x];
            cout << setw(14) << votos << " ";
        }
        float promedio = matriz[y][NUMERO_RONDAS];
        totalGeneral = matriz[y][NUMERO_RONDAS];
        if (promedio > promedioMayor) //Se va guardando la nota mayor y el nombre del alumno
        {
            promedioMayor = promedio;
            memcpy(partidoPromedioMayor, partidoPolitico[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor) //Se va guardando la nota menor y el nombre del alumno
        {
            promedioMenor = promedio;
            memcpy(partidoPromedioMenor, partidoPolitico[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(0) << promedio << " " << endl;
        imprimirMatrizLinea();
    }
    //Calculo del promedio general de cada facultad
    //promedioGeneral = totalGeneral / ;
    cout << "Mayor cantidad de votos: " << setw(10) << partidoPromedioMayor <<  setw(10) << promedioMayor << endl;
    cout << "Menor cantidad de votos: " << setw(10) << partidoPromedioMenor <<  setw(10) << promedioMenor << endl;
    cout << "\n" << endl;
    cout << "El gandor de este partido es " << partidoPromedioMayor << " con un total de votos de " << promedioMayor << endl;
    cout << "\n" << endl;
    return promedioGeneral; //Retorno del promedio general por facultad
}
