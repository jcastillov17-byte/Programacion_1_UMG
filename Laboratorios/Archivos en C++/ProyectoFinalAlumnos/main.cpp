#include "Alumnos.h"
#include "Carrera.h"
#include "Curso.h"
#include <iostream>
#include <clocale>
#include <ctime>
#include <vector>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "spanish");
    Alumnos registroAlumno;
    string verificarCarnet = "";
    //registroAlumno.menuRegistro();
    Curso config;
    vector<Curso> catalagoCurso = config.catalagoCursosIngSistemas();
    Alumnos prueba;
    vector<Alumnos> obtenerAlumnos = prueba.alumnosPrueba();

    Alumnos configurar;
    configurar.menuInsertar();

    /*cout << "Alumno: " << obtenerAlumnos[0].getnombreCompletoAlumno() << endl;
    cout << "Carnet: " << obtenerAlumnos[0].getcarnetPersonal() << endl;
    cout << "DPI: " << obtenerAlumnos[0].getnumeroDpi() << endl;
    cout << "Correo: " << obtenerAlumnos[0].getcorreoPersonal() << endl;*/

    /*cout << "Ingrese su carnet: ";getline(cin, verificarCarnet);
    for (int i = 0; i < obtenerAlumnos.size(); i++){
            if (verificarCarnet == obtenerAlumnos[i].getcarnetPersonal()){
                cout << "Bienvenido, " << obtenerAlumnos[i].getnombreCompletoAlumno() << endl;
                break;
        }
    }*/

    /*if (verificarCarnet == obtenerAlumnos.size(); i++){
        cout << "Bienvenido, " << obtenerAlumnos[0].getnombreCompletoAlumno() << endl;
    }else{
        cout << "carnet no valido" << endl;
    }*/


    /*cout << "--- Pensum Ing Sistemas ---" << endl;
    for(int i = 10; i < 15; i++){
        cout << catalagoCurso[i].getcodigoCurso() << " - " << catalagoCurso[i].getnombreCurso() << " - " << catalagoCurso[i].getpreRequisitoDeCurso() << endl;
    }

    cout << "\n" << endl;
    cout << "obtener el segundo curso: " << catalagoCurso[49].getnombreCurso() << endl;
    cout << "obtner codigo: " << catalagoCurso[49].getcodigoCurso() << endl;
    cout << "Prerequisito: " << catalagoCurso[49].getpreRequisitoDeCurso() << endl;*/

    return 0;
}
