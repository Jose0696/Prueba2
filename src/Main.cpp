//
// Created by Maikol Guzman on 3/18/22.
//
#include <iostream>
#include "Zona.h"
using namespace std;

int main() {
    Grupo grupoAccionistas (15, "GACCI", "Accionistas");
    Grupo grupoSocios (52, "GSOCI", "Socios");
    Grupo grupoTrabajadores (55, "GTRAB", "Trabajadores");
    Grupo grupoClientes (39, "GCLIE", "Clientes");
    Grupo grupoCompetidores (33, "GCOMP", "Competidores");
    Grupo grupoContratistas (43, "GCONT", "Contratistas");
    Grupo grupoMediosComunicacion (37, "GMEDI", "Medios de Comunicacion");

    Zona zonaSantaCruz (new Persona ("David Munoz", "6-2345-1111", 29), "Zona Santa Cruz");
    zonaSantaCruz.agregar(&grupoSocios);

    Zona zonaNicoya (new Persona ("Jason Murillo", "1-9839-2098", 28), "Zona Nicoya");
    zonaNicoya.agregar(&grupoAccionistas);

    Zona zonaChorotega (new Persona ("German Gamboa", "1-3452-0987", 33), "Zona Chorotega");
    zonaChorotega.agregar(&zonaSantaCruz);
    zonaChorotega.agregar(&zonaNicoya);

    Zona zonaSarapiqui (new Persona ("Maria Salguero", "1-2343-2222", 45), "Zona Sarapiqui");
    zonaSarapiqui.agregar(&grupoMediosComunicacion);
    zonaSarapiqui.agregar(&grupoTrabajadores);

    Zona zonaHuetarNorte (new Persona ("Marcela Quiros", "5-2343-2222", 34), "Zona Huetar-Norte");
    zonaHuetarNorte.agregar(&zonaSarapiqui);

    Zona zonaGolfito (new Persona ("Juan Perez", "1-1234-0342", 35), "Zona Golfito");
    zonaGolfito.agregar(&grupoContratistas);

    Zona zonaPerezZeledon (new Persona ("Cesar Gutierrez", "1-1455-2234", 28), "Zona Perez Zeledon");
    zonaPerezZeledon.agregar(&grupoClientes);
    zonaPerezZeledon.agregar(&zonaGolfito);

    Zona zonaBrunca (new Persona ("Antonio Jesus", "1-1455-3466", 57), "Zona Brunca");
    zonaBrunca.agregar(&zonaPerezZeledon);

    Zona zonaNacional (new Persona ("Rodrigo Chavez", "1-1080-0342", 43), "Zona Nacional");
    zonaNacional.agregar(&zonaBrunca);
    zonaNacional.agregar(&grupoCompetidores);
    zonaNacional.agregar(&zonaHuetarNorte);
    zonaNacional.agregar(&zonaChorotega);


    cout.setf(ios::fixed);
    cout.precision(0);

    cout << "Cantidad Total de Actividades: " << zonaNacional.obtenerTotalCantActividades() << endl;
    cout << "Cantidad Total de Presupuesto: "<<zonaNacional.obtenerTotalPresupuesto() << endl;
    cout << "Cantidad Total de Asociados: "<<zonaNacional.obtenerTotalCantidadAsociados() << endl;

    return 0;
}
