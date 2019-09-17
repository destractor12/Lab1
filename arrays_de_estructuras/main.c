#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 5

int main()
{
    ePersona pers[TAM];

    inicializar(pers, TAM);

    alta(pers,TAM);

    system("cls");

    mostrarTodos(pers,TAM);

    return 0;
}
