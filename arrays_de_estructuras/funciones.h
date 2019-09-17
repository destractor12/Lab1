#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char dni[9];
    char apellido[31];
    char nombre[50];
    int edad;
    int estado;
}ePersona;

/*ePersona alta(ePersona);*/
void alta(ePersona per[], int cant);
void mostrarUno(ePersona per);
void mostrarTodos(ePersona per[], int cant);
void inicializar(ePersona per[], int cant);
