#include "funciones.h"

///En matrices se puede utilizar subindices.

int main()
{
    int mat[][MAXCOL] = {
        {1,0,0,0},
        {0,1,0,0},
        {0,0,1,0},
        {0,0,0,1},
    };

    int x, fc=4;       ///Cantidad filas-columnas

    x = esIdentidad(mat, fc);

    if(x==ESPAL)
        printf("La matriz es identidad");
    else
        printf("La matriz no es identidad");

    return 0;
}
