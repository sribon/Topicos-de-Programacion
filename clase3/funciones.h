#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 8

typedef struct{
    int numero;
    char nombre[20];
}Presidente;

size_t mi_strlen(const char *s);
size_t mi_strcmp(const char *s1, const char *s2);
char *mi_strcpy(char *s1, const char *s2);
#endif // FUNCIONES_H_INCLUDED
