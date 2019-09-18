#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char nombre[50];
char apellido[31];
int edad;
int estado;
}ePersona;

void ordenar(ePersona[],int);

void mostrarTodos(ePersona per[], int cant);

void mostrarUno(ePersona per);


/*typedef struct{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
}eEmployee;*/
