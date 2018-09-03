// Acá van todas las funciones implementadas.
#include "Biblioteca.h"
#include <stdio.h>

int pedirEntero(char texto[])
{
    int numero;

    printf("%s", texto);
    scanf("%d", &numero);

    return numero;
}

void incrementarValor(int* y) //variable* signfica puntero.
{
    (*y)++; //*variable para acceder al valor que està guardado en la direccion de memoria que toma el puntero
}
