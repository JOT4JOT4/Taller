#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "EventoConAsistentes.hpp"

using namespace std;

bool buscarEvento(const vector<Evento*>& eventos, const string& nombreEvento) {
    for (const auto& evento : eventos) {
        if (evento->obtenerNombre() == nombreEvento) {
            return true;
        }
    }
    return false;
}

EventoConAsistentes buscarEventoPos(const vector<Evento*>& eventos, const string& nombreEvento) {
    for (size_t i = 0; i < eventos.size(); ++i) {
        if (eventos[i]->obtenerNombre() == nombreEvento) {
            return (const EventoConAsistentes &) eventos[i];
        }
    }; // Si no se encuentra el evento, se retorna -1

}

int main() {
    vector<Evento*> eventos;
    int opcion, rut;
    string tipo, nombreEvento, fecha, asistente, aux; 
    
    cout << "Que desea visualizar" << endl;
    cout << "Opcion 1: Ingresar Evento" << endl;
    cout << "Opcion 2: Registrar Asistentes a evento" << endl;
    cout << "Opcion 3: Lista de Asistentes" << endl;
    cout << "Opcion 4: Generar Informe" << endl;
    cout << "Opcion 5: SALIR" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1: {
        cout << "---INGRESAR EVENTO---" << endl;
        cout << "Ingrese un nombre de evento" << endl;
        cin >> nombreEvento;
        cout << "Ingrese la fecha del evento" << endl;
        cin >> fecha;
        cout << "Ingrese el tipo de evento" << endl;
        cin >> tipo;
        
        if (buscarEvento(eventos, nombreEvento)) {
        cout << "El evento \"" << nombreEvento << "\" ya existe en la lista." << std::endl;
        } else {
        cout << "El evento \"" << nombreEvento << "\" Se puede agregar." << endl;
        EventoConAsistentes EventoNuevo(nombreEvento, fecha, tipo);
        eventos.push_back(&EventoNuevo);
        }

        break;
    }
    
    case 2: {
        string nombre = "";
        cout << "---REGISTRO DE ASISTENTES---" << endl;
        cout << "Ingrese nombre del asistente" << endl;
        cin >> nombre;
        cout << "Ingrese nombre del evento" << endl;
        cin >> nombreEvento;
        EventoConAsistentes e = buscarEventoPos(eventos, nombreEvento) ;

        e.agregarAsistente(nombre);

        break;
    }
    case 3: {
       int aux = 0;
        cout << "---Lista de Asistentes---" << endl;
        cout << "Ingrese el numero del evento que desea consultar" << endl;
        cin >> aux;

        int i;
        for (i = 0; i < eventos.size(); i++) {
            if (i == aux) { // Suponiendo que hay un método getNumero() en la clase Evento
                // Se encontró el evento
                cout << "Evento encontrado. Detalles: " << endl;
                // Aquí puedes imprimir los detalles del evento, según la implementación de tu clase Evento
                eventos[i]->mostrarInformacion();
                break;
            }
        }
        cout << "Evento no encontrado." << endl;
        break;
    }
    case 4: {
        cout << "-----Generando Informe -----" <<  endl;
        cout << "Lista de eventos programados" << endl;
        
        for (const auto& evento : eventos) {
        evento->mostrarInformacion();
        }

        break;
    }
    case 5: {
        cout << "Adios, espero haber ayudado" << endl;
        break;
    }
    default: {
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
    }

    
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
    //AQUI SE GUARDAN EN UNA LISTA//
    eventos.push_back(&evento1);
    eventos.push_back(&evento2);
    eventos.push_back(&evento3);
    eventos.push_back(&evento4);
    //AQUI SE MUESTRA LA INFO//
    for (const auto& evento : eventos) {
        evento->mostrarInformacion();
    }

 // GUARDAR EN EL READMI//
    ofstream archivo("README.md");
    if (archivo.is_open()) {
        for (const auto& evento : eventos) {
            archivo << evento->obtenerInformacion() << endl;
        }
        archivo.close();
        cout << "La información se ha guardado en el archivo README.md" << endl;
    } else {
        cerr << "No se pudo abrir el archivo README.md" << endl;
    }

  // Liberar memoria 
    for (auto evento : eventos) {
        delete evento;
    }   

    return 0;
}