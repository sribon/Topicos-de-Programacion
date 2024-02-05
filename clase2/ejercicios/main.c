#include "funciones.h"

int main()
{
    int vec[TAM], ce=5;
    cargarVector(vec, ce);
    insertarElem(vec, &ce, TAM, 181, 4);         ///181 es el elemento a agregar, el 4 es la posicion en la que se debe agregar
    imprimirVector(vec, ce);

    return 0;
}
