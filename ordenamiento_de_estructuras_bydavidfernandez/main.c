#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 3

int main()
{
    ePersona pers[TAM]={{"juan","perez",50,0},
                        {"jose","diaz",65,0},
                        {"jorge","martinez",33,0}};

    ordenar(pers,TAM);



    return 0;
}
