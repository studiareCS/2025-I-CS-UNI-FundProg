#include <iostream>
#include "recursion.h"
using namespace std;

long FactIter(int n){
    if( n == 0 )
        return 1;
    if( n == 1 )
        return 1;
    long rpta = 1;
    for(int i = 2 ; i <= n ; ++i)
        rpta *= i;
    return rpta;
}

long FactRec(int n){
    if( n == 0 )
        return 1;
    if( n == 1 )
        return 1;
    return n * FactRec(n-1);
}

// TODO: Implementar  y enviar por PR
long FibIter(int ){
    return 0;
}

// TODO: Implementar  y enviar por PR
long FibRec (int n){
    return 0;
}

void DemoRecursividad(){

    for( int i = 0; i < 20 ; ++i ){
        cout << "FactIter(" << i << ")=" << FactIter(i) << endl;
        cout << "FactRec (" << i << ")=" << FactRec (i) << endl;
    }
}