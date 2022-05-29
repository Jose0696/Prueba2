
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
    Servicio servicio;
    int resultado = 0;
    for(const auto & grupo : getZonaLista()){
        resultado = servicio.obtenerActividadPorAno(grupo->getCodigo());
    }
    return resultado;
}

double Zona::obtenerTotalPresupuesto() const {
    Servicio servicio;
    double resultado = 0;
    for(const auto & grupo : getZonaLista()){
        resultado = servicio.obtenerPresupuesto(grupo->getCodigo());
    }
    return resultado;
}

int Zona::obtenerTotalCantidadAsociados() const {
    Servicio servicio;
    int resultado;
    for(const auto & grupo : getZonaLista()){
        resultado = servicio.obtenerCantidadAsociados(grupo->getCodigo());
    }
    return resultado;
}

void Zona::agregar(Grupo *grupo) {
    double presupuestoAux = grupo->obtenerTotalPresupuesto() + grupo->obtenerTotalPresupuesto();
    grupo->setPresupuesto(presupuestoAux);

    zonaLista.push_back(grupo);
}

const vector<Grupo *> &Zona::getZonaLista() const {
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
