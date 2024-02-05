#include "funciones.h"

size_t mi_strlen(const char *s)
{
    size_t cant = 0;

    while(*s != '\0')
    {
        s++;
        cant++;
    }

    return cant;
}


size_t mi_strcmp(const char *s1, const char *s2)
{
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 == *s2)
        {
            s1++;
            s2++;
        }
        else return *s1 - *s2;
    }

    return *s1 - *s2;
}


char *mi_strcpy(char *s1, const char *s2)
{
    char *aux = s1;

    while(*s2 != '\0')
    {
        *s1 = *s2;
        s2++;
        s1++;
    }

    *s1 = '\0';
    return aux;
}
