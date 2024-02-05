#include "funciones.h"

struct Persona{
    char nombre[20];
    int edad;
};

int main()
{
/*    t_persona pepe;
    t_persona *p = &pepe;
    p->dni = 34567890;            //(*p) es lo mismo que p->
    p->edad = 20;
    p->legajo = 102;
    printf("Edad: %d\n", p->edad);
    printf("Dni: %d\n", p->dni);
    printf("Legajo: %d\n", p->legajo);
*/

/*
    t_Fecha fInicio, fSuma;

    ingresarFecha(&fInicio);
    fSuma = sumarDiasaFecha(&fInicio, 90);
    mostrarFecha(&fInicio);
    mostrarFecha(&fSuma);
*/

/*
    size_t tam = sizeof(int);                                       ///Tamanio que ocupa un entero en bytes.
    printf("El tamano de un int es: %u", tam);
    printf("El tamano de la estructura persona es: %u", sizeof(struct Persona));
    int numeros[10];
    printf("El tamanio es de: %u bytes", sizeof(numeros));
*/

/*
    //int vec[TAM];
    //int vec[TAM] = {5,4};
    //int vec[TAM] = {};
    //vec[TAM] = 5;
    //int vec[TAM] = {5,1,2,3,4,5,6,7}                               ///WARNING: Inicializa los primeros valores
    //int vec[] = {5,2,1,7,8,9};
    int vec[TAM] = {5,99,2,6,8};
    int i, desp=2;
    int *p = vec;

    printf("El valor apuntado por p es %d\n", *p);
    p += desp;
    printf("El valor apuntado por p es %d\n", *p);

    vec[1]=4;
    //printf("%d\n", (int)sizeof(vec));                                 ///Cantidad de bytes del vector
    //printf("%d\n", (int)sizeof(vec[0]));                             ///Cuanto ocupa el elemento del vector
    for(i=0;i<TAM;i++)                                              ///TAM = sizeof(vec)/sizeof(vec[0])
        printf("El valor en la pos %d es: %d\n", i, vec[i]);
*/


    //*(vec+3)=18;            ///ESTO NO SE PUEDE HACER
    int vec[TAM], ce=5;

    cargarVector(vec,ce);
    imprimirVector(vec,ce);


    return 0;
}
