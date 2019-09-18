#include "persona.h"

void alta(ePersona per[], int cant)
{
    int flag=0;
    int i;
    char seguir='s';
    for(i=0; i<cant; i++)
    {
        do
        {
            if(per[i].estado==1)
            {

            printf("nombre: ");
            gets(per[i].nombre);
            printf("apellido: ");
            gets(per[i].apellido);
            printf("edad: ");
            scanf("%d",&per[i].edad);
            fflush(stdin);
            printf("dia: ");
            scanf("%d",&per[i].fechanac.dia);
            fflush(stdin);
            printf("mes: ");
            scanf("%d",&per[i].fechanac.mes);
            fflush(stdin);
            printf("año: ");
            scanf("%d",&per[i].fechanac.anio);
            fflush(stdin);
            per[i].estado=0;
            flag=1;
        }

    }
    while(seguir!='s');





    if(flag==0)
    {
        printf("No hay espacio para ingresar datos nuevos al sistema");
    }
}
}
/*void mostrarUno(ePersona per)
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
}*/


void filtrarporpais(ePersona pers[], ePais paises[], int cantPersonas, int cantPaises)
{
    int auxpais;
    int i;
    int j;
    printf("ingrese id del pais:");
    scanf("%d",&auxpais);

    for(i=0; i<cantPaises; i++)
    {
        if(paises[i].id==auxpais)
        {
            for(j=0;j<cantPersonas;j++)
            {
                if(pers[j].ePaisid==auxpais)
                {
                    printf("%s %s",pers[j].nombre,paises[i].descripcion);
                }
            }
        }
    }
}
