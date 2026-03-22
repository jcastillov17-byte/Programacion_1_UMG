#include <iostream>
using namespace std;

class Persona{
public:
    Persona(){
    }
    Persona(string pNombre, string pApellido){
        nombre = pNombre;
        apellido = pApellido;
    }
    string getNombre(){
        return nombre;
    }
    void setNombre(string pNombre){
        nombre = pNombre;
    }
    string getApellido(){
        return apellido;
    }
    void setApellido(string pApellido){
        apellido = pApellido;
    }
private:
    string nombre;
    string apellido;
};
int main(){
    Persona Persona1;
    //Persona1.nombre = "Julio";
    Persona1.setNombre("Julio");
    Persona Persona2;
    Persona2.setNombre("Carlos");
    Persona2.setApellido("Molina");
    cout << Persona2.getNombre() << endl;
    cout << "\n" << endl;
    cout << Persona2.getApellido() << endl;


    return 0;
}
