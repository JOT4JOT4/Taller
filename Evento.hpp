#include <iostream>
#include <string>
#include <vector>

class Evento {
protected:
    string nombre;
    string fecha;

public:
    Evento(const string& _nombre, const string& _fecha) : nombre(_nombre), fecha(_fecha) {}

    virtual void mostrarInformacion() const {
        cout << "Evento: " << nombre << " Fecha: " << fecha << endl;
    }

    virtual ~Evento() {}
};