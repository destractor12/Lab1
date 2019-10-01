#include <stdlib.h>
#include <stdio.h>

typedef struct{
 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;
} eEmployee;

/** \brief inicializa los estados a vacio
 *
 * \param eEmployee[] estructura
 * \param int tamaño de la estructura
 * \return void
 *
 */
int initEmployees(eEmployee[], int);
void alta(eEmployee empleado[], int cant);
int menu();
