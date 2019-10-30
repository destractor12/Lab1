#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado  controller_addemployee
     4. Modificar datos de empleado controller_editEmployee
     5. Baja de empleado controller_removeEmployee
     6. Listar empleados controller_ListEmployee
     7. Ordenar empleados controller_sortEmployee
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto). controller_saveAsText
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario). controller_saveAsBinary
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
        }
    }while(option != 10);
    return 0;
}
