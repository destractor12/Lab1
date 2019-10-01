#include <stdio.h>
#include <stdlib.h>
int getint(char[]);
float getfloat(char[]);
char obtenerletra(char[]);

int main()
{
    int num1;
    float num2;
    char letra;

    num1=getint("Ingrese un numero entero: ");
    num2=getfloat("Ingrese un numero decimal: ");
    letra=obtenerletra("Ingrese una letra: ");

    return 0;
}

int getint(char mensaje[])
{
    int numero;

    printf("%s",mensaje);
    scanf("%d", &numero);

    return numero;
}

float getfloat(char mensaje[])
{
    float numero;

    printf("%s", mensaje);
    scanf("%f", &numero);

    return numero;
}

char obtenerletra(char mensaje[])
{
    char letra;

    fflush(stdin);
    printf("%s", mensaje);
    scanf("%c", &letra);

    return letra;
}
