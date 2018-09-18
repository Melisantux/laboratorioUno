#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Alumno.h"
#define A 3

//scanf("%d", &listado[i].legajo. <----- pedir un dato para guardar en una variable de una estructura.

int main()
{
    sAlumno listadoMain[A];
    int i;
    char opcion;

    do
    {
        printf("a. Alta de alumno.\n b. Ordenar lista de alumnos.\n c. Mostrar listado de alumnos.\nd. Salir.");
        printf("\nIngrese una opcion: ");
        opcion = getche();
        switch(opcion)
        {
        case 'a':
            cargarListadoDeAlumnos(listadoMain, A);
            break;
        case 'b':
            ordenarListadoDeAlumnosPorNombre(listadoMain, A);
            break;
        case 'c':
            mostrarListadoDeAlumnos(listadoMain, A);
            break;
        }

    }while(opcion != 'd');

    cargarListadoDeAlumnos(listadoMain, A);

    mostrarListadoDeAlumnos(listadoMain, A);

    printf("Ordenar\n");

    ordenarListadoDeAlumnosPorNombre(listadoMain, A);

    mostrarListadoDeAlumnos(listadoMain, A);




    return 0;
}
