#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 2

int main()
{
    int opcion;
    char seguir='s';
    eEmployee empleado[TAM];


    do
    {
        opcion=menu();

       switch(opcion)
       {
           case 1:
            alta(empleado,TAM);
            break;
           case 2:
            break;
           case 3:
            break;
           case 4:
            break;
           default:
            seguir='n';
            break;
       }

    }while(seguir!='n');


    return 0;
}
