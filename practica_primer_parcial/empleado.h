#include <stdio.h>
#include <stdlib.h>
#include "fecha.h"
#include "sector.h"

typedef struct
{
    int legajoEmpleado;
    char apellido[51];
    char nombre[51];
    char sexo;
    float salario;
    eFecha fechaDeIngreso;
    int idSector;
    int isEmpty;
}eEmpleado;



void menu(eEmpleado[],int);
void alta(eEmpleado[], int);
