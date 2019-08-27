#include <stdio.h>
#include <stdlib.h>
 int getint(char*);

int main()
{
    int legajo;
    char nombre[31];
    float salario;
    char sexo;

    legajo=getint("Ingrese un legajo: ");

    fflush(stdin);

    printf("ingrese un nombre: ");
    gets(nombre);

    printf("ingrese un salario: ");
    scanf("%f",&salario);

    fflush(stdin);

    printf("ingrese sexo: ");
    scanf("%c", &sexo);
    system("cls");

    printf("Legajo\tNombre\tSexo\tSalario\n");
    printf("%d\t%s\t%c\t%.2f", legajo,nombre,sexo,salario);

    return 0;
}



int getint(char* mensaje)
{
    int aux;
    printf(mensaje);
    scanf("%d", &aux);

    return aux;
}
