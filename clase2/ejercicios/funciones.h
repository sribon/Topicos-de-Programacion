#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM 100

void cargarVector(int *vec, const int ce);
void insertarElem(int *vec, int *ce, const int tam, const int elem, const int pos);
void imprimirVector(const int *vec, const int ce);


#endif // FUNCIONES_H_INCLUDED
