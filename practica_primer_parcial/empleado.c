#include "empleado.h"

void alta(eEmpleado empleados[], int cant)
{
    printf("Ingrese el nombre del empleado: ");
    gets(empleados.nombre);
    printf("Ingrese el apellido del empleado: ");
    gets(empleados.apellido);

}

void baja(eEmpleado empleados[], int cant)
{
    int i;
    int auxId;


    printf("\nIngrese el legajo del empleado a dar de baja: ");
    scanf("%d",&auxId);

    for(i=0;i<cant;i++)
    {
        if(empleados[i].legajoEmpleado==auxId)
        {
           empleados[i].isEmpty=-1;
           break;
        }

    }



}





void menu(eEmpleado empleados[], int cant)
{
    int opcion;
    char seguir='s';
    do
    {
        printf("1. Alta\n");
        printf("2. Baja\n");
        printf("3. Modificar\n");
        printf("4. Informar\n");
        printf("5. Listar\n");
        printf("6. Salir\n");
        printf("Ingrese una opción: ")
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            fflush(stdin);
            alta(empleados, cant);
            break;
        case 2:
            fflush(stdin);
            baja(empleados, cant);
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            seguir='n';
            break;
        }

    }
    while(seguir!='s');


}
