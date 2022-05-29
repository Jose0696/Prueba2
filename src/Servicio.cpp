#include "Servicio.h"

Servicio::Servicio() {

}

double Servicio::obtenerPresupuesto(int codigo) {
    double resultado = 0;
    if(codigo == 15){
        resultado = 33000000;
    }if(codigo == 52){
        resultado = 39000000;
    }if(codigo == 55){
        resultado = 15000000;
    }if(codigo == 39){
        resultado = 14000000;
    }if(codigo == 33){
        resultado = 25000000;
    }if(codigo == 43){
        resultado = 60000000;
    }if(codigo == 37){
        resultado = 15000000;
    }
    return resultado;
}

int Servicio::obtenerActividadPorAno(int codigo) {
    int resultado = 0;
    if(codigo == 15){
        resultado = 30;
    }if(codigo == 52){
        resultado = 35;
    }if(codigo == 55){
        resultado = 16;
    }if(codigo == 39){
        resultado = 11;
    }if(codigo == 33){
        resultado = 23;
    }if(codigo == 43){
        resultado = 42;
    }if(codigo == 37){
        resultado = 18;
    }
    return resultado;
}

int Servicio::obtenerCantidadAsociados(int codigo) {
    int resultado = 0;
    if(codigo == 15){
        resultado = 35;
    }if(codigo == 52){
        resultado = 22;
    }if(codigo == 55){
        resultado = 11;
    }if(codigo == 39){
        resultado = 12;
    }if(codigo == 33){
        resultado = 7;
    }if(codigo == 43){
        resultado = 44;
    }if(codigo == 37){
        resultado = 23;
    }
    return resultado;
}
