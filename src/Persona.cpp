
#include <string>
#include <sstream>
#include "Persona.h"

Persona::Persona(const std::__cxx11::basic_string<char> &nombre, const std::__cxx11::basic_string<char> &cedula,
                 int edad) : nombre(nombre), cedula(cedula), edad(edad) {}

const string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

const string &Persona::getCedula() const {
    return cedula;
}

void Persona::setCedula(const string &cedula) {
    Persona::cedula = cedula;
}

int Persona::getEdad() const {
    return edad;
}

void Persona::setEdad(int edad) {
    Persona::edad = edad;
}

string Persona::toString() const {
    stringstream output;
    output << "nombre: " << getNombre() << " cedula: " << getCedula() << " edad: " << getEdad();
    return output.str();
}
