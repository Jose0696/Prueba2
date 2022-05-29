//
// Created by Maikol Guzman Alan on 5/17/22.
//

#ifndef PARTIAL_TEST_2_COLEGIADO_ZONA_H
#define PARTIAL_TEST_2_COLEGIADO_ZONA_H
#include "Region.h"
#include "Persona.h"
#include "Grupo.h"

class Zona :  public Grupo{
private:
    Persona *coordinador;
    string nombreZona;

    vector<Grupo *> zonaLista;
public:
    Zona();
    Zona(Persona *coordinador, const string &nombreZona);
    virtual ~Zona() = default;

    const string &getNombreZona() const;
    void setNombreZona(const string &nombreZona);

    int obtenerTotalCantActividades() const override;
    double obtenerTotalPresupuesto() const override;
    int obtenerTotalCantidadAsociados() const override;
    string toString() const override;

    void agregar(Grupo *grupo) override;
    const vector<Grupo *> &getZonaLista() const;
};


#endif //PARTIAL_TEST_2_COLEGIADO_ZONA_H
