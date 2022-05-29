//
// Created by Maikol Guzman Alan on 5/17/22.
//

#ifndef PARTIAL_TEST_2_COLEGIADO_GRUPO_H
#define PARTIAL_TEST_2_COLEGIADO_GRUPO_H
#include "Region.h"
#include "Servicio.h"
#include "vector"

class Grupo : public Region{
private:
    int codigo;
    string codigoGrupo;
    string nombreGrupo;

public:
    Grupo();
    Grupo(int codigo, const string &codigoGrupo, const string &nombreGrupo);
    ~Grupo() = default;

    int getCodigo() const;

    void setCodigo(int codigo);

    const string &getCodigoGrupo() const;

    void setCodigoGrupo(const string &codigoGrupo);

    const string &getNombreGrupo() const;

    void setNombreGrupo(const string &nombreGrupo);

    int obtenerTotalCantActividades() const override;
    double obtenerTotalPresupuesto() const override;
    int obtenerTotalCantidadAsociados() const override;
    string toString() const override;

    virtual void agregar(Grupo *grupo);
};


#endif //PARTIAL_TEST_2_COLEGIADO_GRUPO_H
