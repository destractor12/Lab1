#include "funciones.h"


void mostrarUno(ePersona per)
{
        printf("dni: %s\nnombre: %s\nedad: %d",per.dni,per.nombre,per.edad);
}

/*ePersona alta(ePersona per)
{
        printf("dni: ");
        gets(per.dni);
        printf("nombre: ");
        gets(per.nombre);
        printf("apellido: ");
        gets(per.apellido);
        printf("edad: ");
        scanf("%d",&per.edad);
        per.estado=0;

    return per;
}*/

void alta(ePersona per[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        printf("dni: ");
        gets(per[i].dni);
        printf("nombre: ");
        gets(per[i].nombre);
        printf("apellido: ");
        gets(per[i].apellido);
        printf("edad: ");
        scanf("%d",&per[i].edad);
        fflush(stdin);
        per[i].estado=0;
    }

}

void inicializar(ePersona per[], int cant)
{
    int i;
    for(i=0; i<cant;i++)
    {
        per[i].estado=1;
    }

}

void mostrarTodos(ePersona per[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        mostrarUno(per[i]);
    }
}
