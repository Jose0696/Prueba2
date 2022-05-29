//
// Created by Maikol Guzman Alan on 5/17/22.
//

#ifndef PARTIAL_TEST_2_COLEGIADO_PERSONA_H
#define PARTIAL_TEST_2_COLEGIADO_PERSONA_H
#include <iostream>

using namespace std;
class Persona {
private:
    string nombre;
    string cedula;
    int edad;

public:
    Persona() = default;
    Persona(const string &nombre, const string &cedula, int edad);
    ~Persona() = default;

    const string &getNombre() const;
    void setNombre(const string &nombre);
    const string &getCedula() const;
    void setCedula(const string &cedula);
    int getEdad() const;
    void setEdad(int edad);

    virtual string toString() const;
};


#endif //PARTIAL_TEST_2_COLEGIADO_PERSONA_H
