#include <iostream>
#include <iomanip>

using namespace std;


// -----------------------------------------------------------------------------
// (C) Paso por puntero: swap y variaciones     
// Implementar aquí para usarlas más abajo.s
// -----------------------------------------------------------------------------
void swap_por_puntero(int* a, int* b) {
    // TODO: implementar intercambio clásico usando *a, *b y una variable temporal.
    // int tmp = *a;
    // *a = *b;
    // *b = tmp;
    int temp = *a;
    *a = *b;
    *b = temp;

}

void swap_si_mayor(int* p, int* q) {
    // TODO: intercambiar solo si *p > *q.

    if(*p > *q){
        int temp = *p;
        *p = *q;
        *q = temp;
    }
}

void swap_si_menor(int* p, int* q) {
    // TODO (opcional): intercambiar solo si *p < *q.

    if(*p < *q){
        int temp =*p;
        *p = *q;
        *q = temp;
    }

}

void set_si_positivo(int* p, int valor) {
    // TODO (opcional): escribir 'valor' en *p solo si valor > 0.
    if(valor > 0){
        *p = valor;
    }
}

// -----------------------------------------------------------------------------
// (D) Funciones que procesan arreglos pasados por puntero
// -----------------------------------------------------------------------------
int suma(const int* arr, int n) {
    // TODO: recorrer arr[0..n-1] y acumular.
    int suma = 0;
    for(int i = 0; i <n; i++){
        suma+=arr[i];
    }

    return suma;

}

double promedio(const int* arr, int n) {
    // TODO: usar suma(...) y devolver (double)suma/n si n>0; si n==0 retornar 0.0.
    if(n > 0){
        int valor_total = suma(arr,n);
        return (double)valor_total/n;
    }
    else{
        return 0.0;
    }
    
}

int maximo(const int* arr, int n) {
    // TODO (opcional): devolver el mayor valor del arreglo (validar n>0).
    if(n > 0){
        int max = arr[0];
        for(int i= 1; i <n;i++){
            if(arr[i] > max)
            max = arr[i];

        }
          
    return max;
    }
    else{
    return 0;
    }
}

int main() {
    cout << fixed << setprecision(2);

    // -------------------------------------------------------------------------
    // (A) Variables y direcciones (calentamiento)
    // -------------------------------------------------------------------------
    // TODO:
    // 1) Declarar: int a=5; float f=3.14f; char c='Z';
    // 2) Imprimir valor y dirección:
    //    cout << "a=" << a << "  &a=" << &a << "\n";
    //    cout << "f=" << f << "  &f=" << &f << "\n";
    //    Para 'c' usar:
    //    cout << "c=" << c << "  &c=" << static_cast<const void*>(&c) << "\n";
    // 3) Escribir en comentarios 2-3 observaciones sobre el patrón de direcciones.
    //1_
            int a = 5;
            float f = 3.14;
            char c= 'Z';
    //2_
        cout << "a= " << a << " &a=" <<&a << "\n";
        cout << "f= " << f << " &f=" <<&f << "\n";
        cout << "c= " << c << " &c=" << static_cast<const void*>(&c) << "\n";

    /*(3_ Según el patron de direcciones se puede decir que se imprimen una tras otro desde
         el que contiene mayor cantidad 
            de bits hasta el que tiene menos".)
       */   
      //----------------------------------------------------------------------------  
    // -------------------------------------------------------------------------
    // (B) Proyecto CasaDomotica++ - Parte 1: Sensor de temperatura por puntero
    // -------------------------------------------------------------------------
    // El "sensor" será una variable 'temperaturaActual' y un puntero a ella.
    // TODO:
    // 1) Declarar: int temperaturaActual = 22;
    // 2) Declarar: int* ptrTemp = &temperaturaActual;
    // 3) Mostrar equivalencia: *ptrTemp y temperaturaActual.
    // 4) Modificar el valor a través del puntero: *ptrTemp = 27; y verificar.
    // 5) Leer una nueva temperatura desde consola y asignarla vía *ptrTemp.

    //1_
        int temperaturaActual = 22, nuevaTemp;
    //2_
        int * ptrTemp = &temperaturaActual;
    //3_
    cout << "temperaturaActual= " << temperaturaActual << " " << &temperaturaActual <<"\n";
    cout << "ptrTemp= " << ptrTemp << " " << *ptrTemp << "\n";
    //4_
    *ptrTemp = 27;
    cout << ptrTemp <<"\n";
    cin>> nuevaTemp;
    *ptrTemp = nuevaTemp;
    cout << ptrTemp << endl;

    // -------------------------------------------------------------------------
    // (C) Paso por puntero: pruebas de swap y variantes
    // -------------------------------------------------------------------------
    // TODO:
    // 1) Implementar swap_por_puntero arriba y probar con:
    //    int x=5, y=9;  swap_por_puntero(&x,&y);

    int x, y,d,e,n,m;
    x=5; y=9; d=10; e=3; n=2; m=7;

    cout << x << " "<< y << endl;

    swap_por_puntero(&x,&y);

    cout << x << " "<< y << endl;
    cout << d << " "<< e << endl;
    swap_si_mayor(&d,&e);
    cout << d << " "<< e << endl;
    cout << n << " "<< m << endl;
    swap_si_menor(&n,&m);
    cout << n << " "<< m << endl;
    set_si_positivo(&x,x);
    cout << x << endl;
    // 2) Implementar swap_si_mayor y probar casos (p.ej., 10 y 3, luego 2 y 7).
    // 3) (Opcional) swap_si_menor y set_si_positivo.
    


    // -------------------------------------------------------------------------
    // (D) Arreglos estáticos: direcciones y funciones con punteros
    // -------------------------------------------------------------------------
    // 1) Declarar un arreglo fijo: int v[5] = {10,20,30,40,50};
    int v[5] = {10,20,30,40,50};

    // 2) Imprimir v[i] y &v[i] en un for (i=0..4) para observar contigüidad.
    //    Sugerencia de línea para dirección:
    //    cout << (void*)(&v[i]) << "\n";
    for(int i= 0; i <5;i++){
        cout <<"v[" <<i <<"]=" <<v[i] <<
        (void*)(&v[i])<<"\n";
    }

    // 3) Llamar a suma(v,5), promedio(v,5) y (opcional) maximo(v,5) e imprimir.
    cout << suma(v,5) <<" "<< promedio(v,5) <<" "<< maximo(v,5)<<"\n";
   
    //    // TODO: completar implementaciones arriba.
    cout << "\nFin Semana 1. Próximo paso: memoria dinámica y archivos (Semana 2).\n";
    return 0;
}
