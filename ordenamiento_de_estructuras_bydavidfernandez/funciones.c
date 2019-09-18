#include "funciones.h"

void ordenar(ePersona persona[],int cant)
{
    int i;
    int j;
    ePersona aux;

    for(i=0;i<cant-1;i++)
    {
        for(j=i+1;j<cant;j++)
        {
            if(strcmp(persona[i].nombre,persona[j].nombre)!=0)
            {
                aux=persona[i];
                persona[i]=persona[j];
                persona[j]=aux;
            }
        }
    }
}

void mostrarUno(ePersona per)
{
        printf("nombre: %s\n");
}

void mostrarTodos(ePersona per[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        mostrarUno(per[i]);
    }
}
