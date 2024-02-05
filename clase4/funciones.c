#include "funciones.h"

int esIdentidad(const int mat[][MAXCOL], int fc)
{
    for(int i=0; i<fc; i++)
    {
        for(int j=0; j<fc; j++)
        {
            if(j==i && mat[i][j]!=1)
                return NOPAL;
            if(j!=i && mat[i][j]!=0)
                return NOPAL;
        }
    }
    return ESPAL;
}
