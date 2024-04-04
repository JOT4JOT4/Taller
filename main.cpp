#include <iostream>
#include <string>
#include <vector>
#include "EventoConAsistentes.hpp"

using namespace std;


int main() {
    vector<Evento*> eventos;
    int opcion, rut;
    string tipo, nombre, fecha, asistente, aux; 
    /*
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
        cout << "Ingrese la fecha del evento" << endl;
        cin >> fecha;
        cout << "Ingrese el tipo de evento" << endl;
        cin >> tipo;
        

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
        
        for (const auto& evento : eventos) {
        evento->mostrarInformacion();
    }

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
    */
    EventoConAsistentes evento1("Conferencia de Programación", "10/04/2024", "Charla");
    evento1.agregarAsistente("Juan");
    evento1.agregarAsistente("Maria");
    evento1.agregarAsistente("Saul");
    evento1.agregarAsistente("Vicente");
    EventoConAsistentes evento2("Los pollos hermanos", "29/09/2013", "Cocina en compañia");
    evento2.agregarAsistente("Gustavo");
    evento2.agregarAsistente("Jessey");
    evento2.agregarAsistente("Walter");
    evento2.agregarAsistente("Mike");
    EventoConAsistentes evento3("Karmaland", "07/08/2019", "Evento social");
    evento3.agregarAsistente("Samuel");
    evento3.agregarAsistente("Guillermo");
    evento3.agregarAsistente("Ruben");
    evento3.agregarAsistente("Juan");
    EventoConAsistentes evento4("Salida de Silksong", "30/02/2030", "Dia santo");
    evento4.agregarAsistente("Alex");
    evento4.agregarAsistente("Felipe");
    evento4.agregarAsistente("Eric");
    evento4.agregarAsistente("Baity");
    //AQUI HAY QUE MOSTRAR LA INFO//
    evento1.mostrarInformacion();
    evento2.mostrarInformacion();
    evento3.mostrarInformacion();
    evento4.mostrarInformacion();
    eventos.push_back(&evento1);
    eventos.push_back(&evento2);
    eventos.push_back(&evento3);
    eventos.push_back(&evento4);



    return 0;
}