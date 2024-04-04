#include <iostream>
#include <vector>
#include <string>
#include "Evento.hpp"

using namespace std;



class EventoConAsistentes : public Evento {
private:
    vector<string>* asistentes;

public:
    EventoConAsistentes(const string& _nombre, const string& _fecha, const string& _tipo) : Evento(_nombre, _fecha, _tipo) {
        asistentes = new vector<string>();
    }

    void agregarAsistente(const string& nombreAsistente) {
        asistentes->push_back(nombreAsistente);
    }

    void mostrarInformacion() const override {
        Evento::mostrarInformacion();
        cout << "Asistentes:" << endl;
        for (const auto& asistente : *asistentes) {
            cout << "- " << asistente << endl;
        }
    }

    ~EventoConAsistentes() {
        delete asistentes;
    }
};