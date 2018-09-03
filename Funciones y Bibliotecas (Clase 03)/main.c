#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    int edad;
    int nota;
    int legajo;
    int x=10;

    edad = pedirEntero("Ingrese edad: ");
    printf("Edad: %d", edad);
    nota = pedirEntero("\nIngrese nota: ");
    printf("Nota: %d", nota);
    legajo = pedirEntero("\nIngrese legajo: ");
    printf("Legajo: %d", legajo);

    incrementarValor(&x);
    printf("\nX=%d", x);

    return 0;

}
