#include "sensor.h"
#include <iostream>
#include <fstream>
#include <iomanip>


Sensor::Sensor() {
    nombre = "";
    valor = 0.0;
    unidad = "";
}
Sensor::Sensor(std::string nombre, float valor, std::string unidad) {
    this->nombre = nombre;
    this->valor = valor;
    this->unidad = unidad;
}

std::string Sensor::getNombre(){
    return nombre;
}

void Sensor::setNombre(std::string nombreNuevo){
    nombre = nombreNuevo;
}

float Sensor::getValor(){
    return valor;
}

void Sensor::setValor(float valorNuevo){
    valor = valorNuevo;
}

std::string Sensor::getUnidad(){
    return unidad;
}

void Sensor::setUnidad(std::string unidadNueva){
unidad = unidadNueva;
}

void Sensor::mostrar(){
    std::cout << nombre << " " << valor << " " << unidad << std::endl;
}