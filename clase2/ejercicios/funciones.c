#include "funciones.h"

void cargarVector(int *vec, const int ce)
{
    int i=0;

    printf("Usted debe cargar %d elementos\n", ce);

    for(i=0; i<ce; i++)
    {
        scanf("\n%d", vec);
        vec++;
    }
}

void imprimirVector(const int *vec, const int ce)
{
    int i;

    for(i=0; i<ce; i++)
    {
        printf("\nElemento %d es %d", i, *vec);
        vec++;
    }
}

void insertarElem(int *vec, int *ce, const int tam, const int elem, const int pos)
{
    if(*ce==tam)
    {
        vec+=(*ce)-1;
        *ce -=1;
    }
    else
    {
        vec+=(*ce);
    }

    for(int i=*ce; i>pos-1; i--)
    {
        *vec = *(vec-1);
        vec--;
    }

    *vec = elem;
    *ce+=1;
}
