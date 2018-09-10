#include <stdio.h>
#include <stdlib.h>

//Inicializar un vector con una funcion inicializadora y mostrarla con otra función.

void inicializarVector(int[], int cantidad, int valorInicializador);
void mostrarVector(int [], int cantidad);


int main()
{
    int miArrayDelMain[10];
    inicializarVector(miArrayDelMain, 10, -1);
    mostrarVector(miArrayDelMain, 10);

    return 0;
}

void inicializarVector(int parametroVector[], int cantidad, int inicializador)
{
    cantidad = cantidad - 1;

    for ( ; cantidad >= 0; cantidad--)
    {
        parametroVector[cantidad] = inicializador;
    }
}

void mostrarVector(int parametroVector[], int cantidad)
{
    cantidad = cantidad - 1;

    for (; cantidad >= 0; cantidad--)
    {
        printf("%d\n", parametroVector[cantidad]);
    }
}
