#include <iostream>
using namespace std;

int  main(){
    int preguntaUno;
    int preguntaDos;
    int preguntaTres;
    int preguntaCuatro;
    int preguntaCinco;
    int respuestasCorrectas = 0;

     cout << "--- Examen Sobre el Calentamineto Global ---" << endl;
     cout << "\n" << endl;
     cout << "a) Que gas es el mas conocido por contribuir el efecto invernadero" << endl;
     cout << "1. Nitrogeno\n2. Helio\n3. Oxigeno\n4. Dioxido de carbono" << endl;
     cout << "Respuesta: "; cin >> preguntaUno;
     if (preguntaUno == 4){
        respuestasCorrectas++;
     }
     cout << "\n" << endl;

     cout << "b) Cual es la principal fuente de energia que calienta nuetro  planeta" << endl;
     cout << "1. Las centrales electricas\n2. El nucleo de la tierra\n3. La luna\n4. El sol" << endl;
     cout << "Respuesta: "; cin >> preguntaDos;
     if (preguntaDos == 4){
        respuestasCorrectas++;
     }
     cout << "\n" << endl;

     cout << "c) En que parte del planeta es mas evidente el derritimiento de hielo" << endl;
     cout << "1. En los desiertos\n2. En el centro de ciudades\n3. En el fondo del oceano\n4. En los polos (Artico y Antartida)" << endl;
     cout << "Respuesta: "; cin >> preguntaTres;
     if (preguntaTres == 4){
        respuestasCorrectas++;
     }
     cout << "\n" << endl;

     cout << "d) Que gas exhalan los seres humanos y es tambien un gas efecto invernadero" << endl;
     cout << "1. Dioxido de carbono\n2. Argon\n3. Hidrogeno\n4. Ozono" << endl;
     cout << "Respuesta: "; cin >> preguntaCuatro;
     if (preguntaCuatro == 1){
        respuestasCorrectas++;
     }
     cout << "\n" << endl;

     cout << "e) Cual de estas es una energia limpia o renovable" << endl;
     cout << "1. Quema de plasticos\n2. Uso de gasolina\n3. Quema de carbon\n4. Energia solar" << endl;
     cout << "Respuesta: "; cin >> preguntaCinco;
     if (preguntaCinco == 4){
        respuestasCorrectas++;
     }

     cout << "\n" << endl;

     switch (respuestasCorrectas){
     case 5:
        cout << "Excelente" << endl;
        break;
     case 4:
        cout << "Muy bien" << endl;
        break;
     case 3:
     case 2:
     case 1:
     case 0:
        cout << "Es tiempo de aprender más sobre el calentamiento global" << endl;
        break;
     }

    return 0;
}
