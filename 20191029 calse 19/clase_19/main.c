#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct S_Persona
{
    int id;
    char nombre[32];
    char apellido[32];
    int edad;
};

typedef struct S_Persona Persona;

int parseData(char* fileName, Persona* arrayPersonas, int len);

int main(void){
    Persona personas[10];
    int r,i;

    r = parseData("datos.csv",personas,11);

    for(i=0; i<r; i++)
        printf("id:%d nombre:%s apellido:%s edad:%d\n", personas[i].id, personas[i].nombre, personas[i].apellido, personas[i].edad);

    exit(EXIT_SUCCESS);
}

int parseData(char* fileName,Persona* arrayPersonas, int len){
    FILE *pFile;
    FILE *p;

    int r,i=0;
    char var1[50],var3[50],var2[50],var4[50];
    pFile = fopen(fileName,"r");
    p= fopen("prueba.csv", "w");

    if(pFile == NULL){
        return -1;
    }
     if(p == NULL){
        return -1;
    }

        fprintf(p,"Listado\n");
        fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);//sirve para que se salte la primer linea del archivo
    do{
        r = fscanf(pFile,"%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4);
        if(r==4){
            fprintf(p,"%s --- %s --- %s --- %s\n",var1,var2,var3,var4);
            arrayPersonas[i].id = atoi(var1);
            strncpy(arrayPersonas[i].nombre,var2,sizeof(arrayPersonas[i].nombre));//en el 1er parametro se guarda el segundo parametro y en el tercero se limita la cantidad de caracteres
            strncpy(arrayPersonas[i].apellido,var3,sizeof(arrayPersonas[i].apellido));
            arrayPersonas[i].edad = atoi(var4);
            i++;
        }
        else
            break;
    }while(!feof(pFile) && i<len);

    fclose(pFile);

    return i;
}
