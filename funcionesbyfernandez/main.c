#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int op1, op2, res;

    op1=getentero("operando1: ");

    op2=getentero("operando2: ");

    res=suma(op1,op2);

    printf("\nLa suma es: %d", res);

    return 0;
}
