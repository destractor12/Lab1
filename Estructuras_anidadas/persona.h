#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"

typedef struct
{
    char nombre[31];
    char apellido[31];
    int edad;
    eFecha fechanac;
    int ePaisid;
    int estado;
}ePersona;

typedef struct
{
    int id;
    char descripcion[50];
}ePais;

void alta(ePersona[],int);
void filtrarporpais(ePersona[], ePais[], int, int);
