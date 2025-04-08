#include <iostream>
#include "array.h"

using namespace std;

void CreateArray(int *&pArray, int n){
    pArray = new int [n]; // Pido memoria para n elementos de tipo int
}

void ReadArray(int *pArray, int n){
    cout << "Leyendo " << n << " elementos ..." << endl;
    for(int i = 0 ; i < n ; ++i){
        cout << "Ingresar v[" << i << "]: ";
        cin  >> pArray[i];
    }
}

void PrintArray(int *pArray, int n){
    cout << "Los valores ingresados son:" << endl;
    for(int i = 0 ; i < n ; ++i){
        cout << "v[" << i << "]: " << pArray[i] << endl;
    }
}

void DestroyArray(int *&pArray){
    cout << "Liberando la memoria asignada" << endl;
    delete [] pArray;    // Liberar la memoria
    pArray = nullptr;
}

// Version programacion estructurada ... todavia reprobada
void DemoArrays(){
    int *pV1 = nullptr, nElem1 = 0;
    int *pV2 = nullptr, nElem2 = 0;

    cout << "Ingrese tamano del array:";
    cin >> nElem1;

    // Crear el vector
    CreateArray(pV1, nElem1);
    // Ingresar los valores
    ReadArray(pV1, nElem1);
    // Imprimir los valores ingresados
    PrintArray(pV1, nElem1);
    // Eliminar la memoria
    DestroyArray(pV1);

    cout << "Ingrese tamano del array:";
    cin >> nElem2;
    // Crear el vector
    CreateArray(pV2, nElem2);
    // Ingresar los valores
    ReadArray(pV2, nElem2);
    // Imprimir los valores ingresados
    PrintArray(pV2, nElem2);
    // Eliminar la memoria
    DestroyArray(pV2);
}