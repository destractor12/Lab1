#include "funciones.h"


void inicializar(eEmployee empleado[], int cant)
{
    int i;
    for(i=0; i<cant;i++)
    {
        empleado[i].isEmpty=1;
    }

}


int menu()
{
    int opcion;

    printf("1. Alta\n");
    printf("2. Baja\n");
    printf("3. Modificar\n");
    printf("4. Listar\n");
    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);



    return opcion;
}

void alta(eEmployee empleado[], int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        printf("id: ");
        scanf("%d",&empleado[i].id);
        fflush(stdin);
        printf("nombre: ");
        gets(empleado[i].name);
        printf("apellido: ");
        gets(empleado[i].lastName);
        printf("salario: ");
        scanf("%f",&empleado[i].salary);
        printf("sector: ");
        scanf("%d",&empleado[i].sector);
        fflush(stdin);
        empleado[i].isEmpty=0;
    }

}
