#include <stdio.h>
#include <stdlib.h>
struct persona
{
 char dni[9];
 char nombre[50];
 int edad;
};

int main()
{
   struct persona per;

    printf("dni: ");
    gets(per.dni);
    printf("nombre: ");
    gets(per.nombre);
    printf("edad: ");
    scanf("%d",&per.edad);

    mostrar(per.dni,per.nombre,per.edad);

    return 0;
}

void mostrar(char dni[],char nombre[], int edad)
{
  printf("dni: %s\nnombre: %s\nedad: %d",dni,nombre,edad);
}
