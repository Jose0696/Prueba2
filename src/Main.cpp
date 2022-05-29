//
// Created by Maikol Guzman on 3/18/22.
//
#include <iostream>
#include "Zona.h"
using namespace std;

int main() {
    Grupo grupoClientes (39, "GCLIE", "Clientes");
    Grupo grupoContratistas (43, "GCONT", "Contratistas");

    Zona zonaGolfito (new Persona ("Juan Perez", "1-1234-0342", 35), "Zona Golfito");
    zonaGolfito.agregar(&grupoContratistas);

    Zona zonaPerezZeledon (new Persona ("Cesar Gutierrez", "1-1455-2234", 28), "Zona Perez Zeledon");
    zonaPerezZeledon.agregar(&grupoClientes);
    zonaPerezZeledon.agregar(&zonaGolfito);

    Zona zonaBrunca (new Persona ("Antonio Jesus", "1-1455-3466", 57), "Zona Brunca");
    zonaBrunca.agregar(&zonaPerezZeledon);

    cout << zonaBrunca.obtenerTotalPresupuesto();

    return 0;
}
