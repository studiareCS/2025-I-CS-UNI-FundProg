#include <iostream> // cout
#include "demos.h"   // para usar la funcion suma, resta
#include "array.h"
#include "struct.h"
#include "recursion.h"
#include "sorting.h"
#include "solucion.h"
using namespace std; // Para evitar el std::

// Para compilar con C++:
// clang++ -o main main.cpp arit.cpp demos.cpp array.cpp
//
// Para compilar con C++17:
// g++ -pthread -std=c++17 -o main main.cpp arit.cpp demos.cpp array.cpp struct.cpp recursion.cpp solucion.cpp
// para correr ejecutar: ./main

int main(){
    cout << "Fundamentos de Programación 2025-I" << endl;
    // DemoFunciones();
    // DemoParametros();
    // DemoArrays();
    // DemoStructs();
    // DemoRecursividad();
    // DemoSorting();

    // Solucion "Invertir una palabra"
    const char* palabra = "holasdsd";
    cout << "Palabra original: \n" << palabra << endl;
    char* p1 = new char[strlen(palabra) + 1];
	strcpy(p1, palabra);
	invertir(p1);
	cout << "Palabra invertida: \n" << p1 << endl;
	return 0;
}


