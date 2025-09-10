#include "readings.h"
#include <iostream>
#include <fstream>
#include <new>        // std::nothrow
#include <iomanip>    // std::setprecision

float* crear_arreglo(int size) {
    if (size <= 0) {
        return nullptr;
    }
    return new float[size];
}

void liberar_arreglo(float*& arr) {
    //TODO
    delete []arr;
    arr = nullptr;
}

int cargar_desde_archivo(const std::string& ruta, float* arr, int size) {
    //TODO
    int cant_valores = 0;
    std::ifstream archivo(ruta);
    if(!archivo.is_open){
        return 0;
    }
    
    float valor;
    while(cant_valores < size && archivo >> valor){
    arr[cant_valores] = valor;
    cant_valores++;
    }
    return cant_valores;
}

bool guardar_en_archivo(const std::string& ruta, const float* arr, int size) {
    // TODO

if(arr == nullptr || size <=0){
    return false;
}
std::ofstream archivo(ruta);
if(!is.open){
    return false;
}
for(int i= 0; i < size; i++){
    archivo << arr[i] << "\n";
    if(!archivo){
        archivo.close();
    return false;
    }
}
    archivo.close();
    return true;
}

void imprimir(const float* arr, int size) {
    // TODO
}
