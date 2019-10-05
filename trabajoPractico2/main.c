#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 10
#include "ArrayEmployees.h"
#include "funciones.h"

int main()
{
    int opcion;
    char opcionChar[50];
    int exit=1;

    Employee employeeListing[A];
    construirArray(employeeListing,A);


    while(exit==1)
    {
        printf("1.Alta\n2.Baja\n3.Modificar\n4.Mostrar\n5.Salir\n\n");
        while(!pedirOpcionMenu("Ingrese el numero de la opcion: ",opcionChar))
        {
            printf("\nERROR.la opcion debe ser un numero!\n\n");
        }

        opcion=atoi(opcionChar);

        switch(opcion)
        {
            case 1:
                addEmployee(employeeListing, A);
                break;
            case 2:
                mostrarArray(employeeListing, A);
                deleteEmployee(employeeListing, A);
                break;
            case 3:
                mostrarArray(employeeListing, A);
                editEmployee(employeeListing, A);
                break;
            case 4:
                sortEmployees(employeeListing, A);
                mostrarArray(employeeListing, A);
                arrayInformation(employeeListing, A);
                break;
            case 5:
                exit = 0;
                break;
            default:
                printf("Opcion incorrecta, reingrese...\n");
        }
        system("pause");
        system("cls");
    }

    return 0;
}
