#include "solucion.h"
void invertir(char *cadena){
        char *temporal = new char[strlen(cadena) + 1];
        size_t j = strlen(cadena) - 1;
        for(size_t i = 0; i < strlen(cadena); i++){
                temporal[i] = cadena[j];
                j--;
        }
        for(size_t i = 0; i < strlen(cadena); i++){
                cadena[i] = temporal[i];
        }
        delete []temporal;
}
