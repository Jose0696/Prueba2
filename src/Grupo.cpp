
#include <string>
#include "Servicio.h"
#include "Grupo.h"

Grupo::Grupo() {
}

Grupo::Grupo(int codigo, const string &codigoGrupo, const string &nombreGrupo) : codigo(codigo),
                                                                                 codigoGrupo(codigoGrupo),
                                                                                 nombreGrupo(nombreGrupo) {
    this->setPresupuesto(Servicio().obtenerPresupuesto(codigo));
    this->setCantidadDeActividades(Servicio().obtenerActividadPorAno(codigo));
    this->setCantidadDeAsociados(Servicio().obtenerCantidadAsociados(codigo));
}

int Grupo::getCodigo() const {
    return codigo;
}

void Grupo::setCodigo(int codigo) {
    Grupo::codigo = codigo;
}

const string &Grupo::getCodigoGrupo() const {
    return codigoGrupo;
}

void Grupo::setCodigoGrupo(const string &codigoGrupo) {
    Grupo::codigoGrupo = codigoGrupo;
}

const string &Grupo::getNombreGrupo() const {
    return nombreGrupo;
}

void Grupo::setNombreGrupo(const string &nombreGrupo) {
    Grupo::nombreGrupo = nombreGrupo;
}

int Grupo::obtenerTotalCantActividades() const {
    Servicio servicio;
    return servicio.obtenerActividadPorAno(this->getCodigo());
}

double Grupo::obtenerTotalPresupuesto() const {
    Servicio servicio;
    return servicio.obtenerPresupuesto(this->getCodigo());
}

int Grupo::obtenerTotalCantidadAsociados() const {
    Servicio servicio;
    return servicio.obtenerCantidadAsociados(this->getCodigo());
}

string Grupo::toString() const {
    stringstream output;
    output.setf(ios::fixed);
    output.precision(0);
    output <<"presupuesto: " << obtenerTotalPresupuesto() <<" cantidadDeActividades: " << obtenerTotalCantActividades()
    <<" cantidadDeAsociados: " << obtenerTotalCantidadAsociados() <<" codigo: " << getCodigo() <<" codigoGrupo: " << getCodigoGrupo() <<" nombreGrupo: " <<getNombreGrupo();
    return output.str();
}

void Grupo::agregar(Grupo *grupo) {

}
