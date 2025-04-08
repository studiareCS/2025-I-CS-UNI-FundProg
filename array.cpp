#include <iostream>
#include "array.h"

using namespace std;

int *pArray = nullptr, nElem = 0;

// Version reprobada 100%
void DemoArrays(){
    cout << "Ingrese tamano del array:";
    int n;
    cin >> n;

    // Crear el vector
    pArray = new int [n]; // Pido memoria para n elementos de tipo int
    
    // Ingresar los valores
    for(int i = 0 ; i < n ; ++i){
        cout << "Ingresar v[" << i << "]: ";
        cin  >> pArray[i];
    }
    // Imprimir los valores ingresados
    cout << "Los valores ingresados son:" << endl;
    for(int i = 0 ; i < n ; ++i){
        cout << "v[" << i << "]: " << pArray[i] << endl;
    }

    // Eliminar la memoria
    cout << "Liberando la memoria asignada" << endl;
    delete [] pArray;    // Liberar la memoria
}