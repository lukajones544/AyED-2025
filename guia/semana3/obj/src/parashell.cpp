#include <iostream>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
class Sensor {
    private:
        string nombre;
        float valor;
        string unidad;
    public:
        Sensor();
        Sensor(string nombre, float v, string unidad);
        string getNombre();
        void setNombre(string nombreNuevo);

        float getValor();
        void setValor(float valorNuevo);

        string getUnidad();
        void setUnidad( string unidadNueva);

        void mostrar();
};

int main() {
    // Instancia un objeto de la clase Sensor
    Sensor* s1 = new Sensor("Temp Cocina", 22.6, "C");
    // s1->nombre = "Temp Cocina";
    cout << s1->getNombre() << endl;
    cout << s1 ->getValor() << endl;
    cout << s1 -> getUnidad() << endl;
    // cout << s1->nombre << endl;

    s1 -> mostrar();

    delete s1;

    return 0;
}

Sensor::Sensor() {
    nombre = "";
    valor = 0.0;
    unidad = "";
}
Sensor::Sensor(string nombre, float valor, string unidad) {
    this->nombre = nombre;
    this->valor = valor;
    this->unidad = unidad;
}

  string Sensor::getNombre(){
    return nombre;
}

void Sensor::setNombre(string nombreNuevo){
    nombre = nombreNuevo;
}

float Sensor::getValor(){
    return valor;
}

void Sensor::setValor(float valorNuevo){
    valor = valorNuevo;
}

string Sensor::getUnidad(){
    return unidad;
}

void Sensor::setUnidad(string unidadNueva){
unidad = unidadNueva;
}

void Sensor::mostrar(){
    cout << nombre << " " << valor << " " << unidad << endl;
}

