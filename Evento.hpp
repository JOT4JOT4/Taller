#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Evento {
protected:
    string nombre;
    string fecha;
    string tipo;

public:
    Evento(const string& _nombre, const string& _fecha, const string& _tipo) : nombre(_nombre), fecha(_fecha), tipo(_tipo) {}

    virtual void mostrarInformacion() const {
        cout << "Evento: " << nombre << " Fecha: " << fecha << " Tipo: " << tipo << endl;
    }

    virtual string obtenerInformacion() const {
        return "Evento: " + nombre + " Fecha: " + fecha + " Tipo: " + tipo + "\n";
    }

    virtual std::string obtenerNombre() const {
        return nombre;
    }

    virtual ~Evento() {}
};