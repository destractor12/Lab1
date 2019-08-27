#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int getentero(char* mensaje)
{
    int aux;
    printf(mensaje);
    scanf("%d", &aux);

    return aux;
}

int suma(int operando1,int opernado2)
{
    int resultado;

    resultado= operando1+opernado2;

    return resultado;
}
