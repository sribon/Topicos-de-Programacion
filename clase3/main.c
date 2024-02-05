#include "funciones.h"

///memcpy se utiliza para copiar un bloque de memoria de una direccion origen a una direccion destino. No verifica si las areas de memoria se superponen.
///memmove se utiliza para copiar un bloque de memoria de una direccion origen a una direccion destino. Verifica si las areas de memoria se superponen.


int main()
{
/*
    char cad[TAM];

    char cad1[TAM]="hola";  ///Ocupa 8 bytes, cada char ocupa 1 byte
    printf("\n%s",cad1);

    char cad2[]="chau";     ///Ocupa 5 bytes, lo necesario. 4 por caracteres y el '\0'
    printf("\n%s",cad2);

    char cad3[TAM] = {'h','o','l','a'};     ///No recomendable
    printf("\n%s",cad3);

    char cad4[] = {'h','o','l','a','\0'};     ///No recomendable
    printf("\n%s",cad4);
*/

/*
    char s[13] = "Hola a todos";
    printf("s=%s\n", s);
    printf("Longitud de s = %u", mi_strlen(s));
*/

/*
    char s1[6] = "Abeja";
    char s2[6] = "abeja";
    int i;

    printf( "s1=%s\t", s1 );
    printf( "s2=%s\n", s2 );

    i = mi_strcmp(s1, s2);

    printf("s1 es ");
    if(i < 0)
        printf("menor que ");
    else if(i > 0)
        printf("mayor que ");
    else
        printf("igual que ");
    printf("s2\n");
*/

/*
    char s2[8] = "hola";
    char s1[8] = "matiP";

    mi_strcpy(s1,s2);

    printf( "s2=%s\n", s2);
    printf( "s1=%s\n", s1);

    return 0;

///TAREA: STRCAT - STRNCAT - STRCHR - STRRCHR - STRLWR - STRUPR - TOLOWER - TOUPPER
*/

    //int valor1 = atoi("123");        ///atoi convierte ladena en un valor numerico
    //int valor2 = atoi("-43ca879");
    //int valor3 = atoi("+8-5");
    //int valor4 = atoi("a3454w345");
    //printf("\n%d", valor1);
    //printf("\n%d", valor2);
    //printf("\n%d", valor3);
    //printf("\n%d", valor4);

    //int valor5 = 12345;
    //char cadena[25];
    //itoa(valor5,cadena,10);      ///Convierte un valor numero en una cadena. Envia base(10)
    //printf("\n%s", cadena);

    //double pi = atof("3.1415");     ///Convierte cadena en valor double
    //printf("\n%f", pi);

    //long num = atol("1241212667");      ///Convierte cadena en valor long
    //printf("\n%ld", num);

/*
    Presidente presi[] = {
        {1, "Milei"},
        {2, "Fernandez"},
        {3, "Macri"},
        {4, "De la Rua"}

    };
    Presidente copia[4];

    memcpy(copia, presi, sizeof(Presidente)*3);

    for(int i=0; i<2; i++)
    {
        printf("Presidente: %s\n", copia[i].nombre);
    }
*/

/*
    char a[3]={12,25,65};
    char b[3]={12,25,65};

    int i;
    i=memcmp(a,b,3);
    if(i>0)
        printf("a es mayor que b");
    else if (i<0)
        printf("a es menor que b");
    else
        printf("a es igual que b");
*/



    return 0;
}

