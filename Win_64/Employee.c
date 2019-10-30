#include "Employee.h"

Employee* employee_new()
{
    Employee* aux=malloc(sizeof(Employee));
    return aux;
}


/*  employee_getId(Employee* this, int* id)
{
    id=this->id;
}
