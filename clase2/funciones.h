#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10

//void intercambio(int* a, int* b);

/*
typedef int t_entero;

typedef struct
{
    t_entero edad;
    t_entero dni;
    t_entero legajo;
}t_persona;
*/

/*
typedef struct
{
    int d;
    int m;
    int a;
}t_Fecha;

void ingresarFecha(t_Fecha *f);
bool esFechaValida(const t_Fecha *f);
int cantDiaMes(const int m, const int a);
bool esBisiesto(const int a);
t_Fecha sumarDiasaFecha(const t_Fecha *f, const int dias);
void mostrarFecha(const t_Fecha *f);
*/

void cargarVector(int *vec, const int ce);
void imprimirVector(const int *vec, const int ce);

#endif // FUNCIONES_H_INCLUDED
