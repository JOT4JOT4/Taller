#include <iostream>
#include <string>
#include <vector>
#include <EventoConAsistentes.hpp>;

using namespace std;


int main() {
    // Ejemplo de uso del programa
    int opcion, rut;
    string tipo, nombre, fecha, asistente, aux; 

    cout << "Que desea visualizar" << endl;
    cout << "Opcion 1: Ingresar Evento" << endl;
    cout << "Opcion 2: Registrar Asistentes a evento" << endl;
    cout << "Opcion 3: Lista de Asistentes" << endl;
    cout << "Opcion 4: Generar Informe" << endl;
    cout << "Opcion 5: SALIR" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "---INGRESAR EVENTO---" << endl;
        cout << "Ingrese un nombre de evento" << endl;
        cin >> nombre;
        cout << "Ingrese el tipo de evento" << endl;
        cin >> tipo;
        cout << "Ingrese la fecha del evento" << endl;
        cin >> fecha;

        break;
    
    case 2:
        cout << "---REGISTRO DE ASISTENTES---" << endl;
        cout << "Ingrese rut de asistente todo junto y sin digito verificador" << endl;
        cin >> rut;
        cout << "Nombre del asistente" << endl;
        cin >> asistente;

        break;

    case 3:
        cout << "---Lista de Asistentes---" << endl;
        cout << "Ingrese el numero del evento que desea consultar" << endl;
        cin >> aux;

        int i;
        for (i=0;i<10;i++)
        {
            //BUSQUEDA DEL EVENTO//
        }
        break;
    
    case 4:
        cout << "-----Generando Informe -----" <<  endl;
        cout << "Lista de eventos programados" << endl;
        //FOR QUE RECORRA LA LISTA DE EVENTOS//
        cout << "Evento: " << endl;

        break;
    case 5:
        cout << "Adios, espero haber ayudado" << endl;
        break;
    default:
        cout << "Porfavor ingrese un caracter correcto" << endl;
        cout << "Que desea visualizar" << endl;
        cout << "Opcion 1: Ingresar Evento" << endl;
        cout << "Opcion 2: Registrar Asistentes a evento" << endl;
        cout << "Opcion 3: Lista de Asistentes" << endl;
        cout << "Opcion 4: Generar Informe" << endl;
        cout << "Opcion 5: SALIR" << endl;
        cin >> opcion;
        break;
    }

    EventoConAsistentes evento1("Conferencia de Programación", "10/04/2024");
    evento1.agregarAsistente("Juan");
    evento1.agregarAsistente("Maria");
    evento1.mostrarInformacion();

    return 0;
}