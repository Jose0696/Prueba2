
//#include "Persona.h"
#include "Zona.h"

Zona::Zona() {

}

Zona::Zona(Persona *coordinador, const string &nombreZona) : coordinador(coordinador), nombreZona(nombreZona) {}

const string &Zona::getNombreZona() const {
    return nombreZona;
}

void Zona::setNombreZona(const string &nombreZona) {
    Zona::nombreZona = nombreZona;
}

int Zona::obtenerTotalCantActividades() const {
    return cantidadDeActividades;
}

double Zona::obtenerTotalPresupuesto() const {
    return presupuesto;
}

int Zona::obtenerTotalCantidadAsociados() const {
    return cantidadDeAsociados;
}

void Zona::agregar(Region *region) {
    this->setPresupuesto(this->getPresupuesto() + region->getPresupuesto()) ;
    this->setCantidadDeAsociados(this->getCantidadDeAsociados() + region->getCantidadDeAsociados());
    this->setCantidadDeActividades(this->getCantidadDeActividades() + region->getCantidadDeActividades());
    zonaLista.push_back(region);
}

const vector<Region *> &Zona::getZonaLista() const {
    return zonaLista;
}

string Zona::toString() const {
    stringstream output;
    output.setf(ios::fixed);
    output.precision(0);
    //output << "presupuesto: 60000000 cantidadDeActividades: 42 cantidadDeAsociados: 44 coordinador: nombre: Juan Perez cedula: 1-1234-0342 edad: 35 nombreZona: Zona Golfito";
    for(const auto &group : getZonaLista()){
        output << "presupuesto: "<< obtenerTotalPresupuesto() << " cantidadDeActividades: "  << obtenerTotalCantActividades() << " cantidadDeAsociados: " << obtenerTotalCantidadAsociados();
    }
    output << " coordinador: nombre: " << coordinador->getNombre() << " cedula: " << coordinador->getCedula() << " edad: " << coordinador->getEdad() << " nombreZona: " << getNombreZona();
    return output.str();
}
