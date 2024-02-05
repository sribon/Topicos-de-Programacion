#include "funciones.h"

/*
 intercambio(int* a, int* b)
{
    int temp = *a;
    *a= *b;
    *b= temp;
}
*/

/*
void ingresarFecha(t_Fecha *f)
{
    puts("Ingrese fecha (D/M/A): ");  //Se puede usar el puts si solo se imprime texto.
    scanf("%d / %d / %d", &f->d, &f->m, &f->a);

    while(!esFechaValida(f))
    {
        puts("Ingrese fecha (D/M/A): ");
        scanf("%d / %d / %d", &f->d, &f->m, &f->a);
    }
}


bool esFechaValida(const t_Fecha *f)
{
    if(f->a >= 1601)
        if(f->m >=1 && f->m <=12)
            if(f->d >=1 && f->d <= cantDiaMes(f->m, f->a))
                return true;
    return false;
}


int cantDiaMes(const int m, const int a)
{
    int dm[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31};
    if(m == 2 && esBisiesto(a))
        return 29;
    return dm[m];
}

bool esBisiesto(const int a)
{
    return ((a%4 == 0 && a%100 != 0) || a%400 == 0);
}

t_Fecha sumarDiasaFecha(const t_Fecha *f, const int dias)
{
    t_Fecha fSuma = *f;
    int cdm;

    fSuma.d += dias;
    while(fSuma.d > (cdm = cantDiaMes(fSuma.m, fSuma.a)))
    {
        fSuma.d -= cdm;
        fSuma.m ++;
        if(fSuma.m > 12)
        {
            fSuma.a += 1;
            fSuma.m = 1;
        }
    }

    return fSuma;
}

void mostrarFecha(const t_Fecha *f)
{
    printf("%02d / %02d / %04d\n", f->d, f->m, f->a);
}
*/


void cargarVector(int *vec, const int ce)
{
    int i=0;

    printf("Usted debe cargar %d elementos", ce);

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
