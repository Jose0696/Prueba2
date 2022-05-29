
#include "Region.h"

Region::Region(double presupuesto, int cantidadDeActividades, int cantidadDeAsociados) : presupuesto(presupuesto),
                                                                                         cantidadDeActividades(
                                                                                                 cantidadDeActividades),
                                                                                         cantidadDeAsociados(
                                                                                                 cantidadDeAsociados) {}

string Region::toString() const {
    return std::string();
}

double Region::getPresupuesto() const {
    return presupuesto;
}

void Region::setPresupuesto(double presupuesto) {
    Region::presupuesto = presupuesto;
}

int Region::getCantidadDeActividades() const {
    return cantidadDeActividades;
}

void Region::setCantidadDeActividades(int cantidadDeActividades) {
    Region::cantidadDeActividades = cantidadDeActividades;
}

int Region::getCantidadDeAsociados() const {
    return cantidadDeAsociados;
}

void Region::setCantidadDeAsociados(int cantidadDeAsociados) {
    Region::cantidadDeAsociados = cantidadDeAsociados;
}
