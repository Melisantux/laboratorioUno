#include <stdio.h>
#include <stdlib.h>
#define T 3

void cargarAlumnos(int[], char[][21], int[], float[], int);
//crear funcion mostrarAlumnos.
//Rehacer de cero.

int main()
{
    int legajos[T];
    char nombres[T][21];
    int notas[T];
    float altura[T];
    char mail[T][50];
    int i;

    cargarAlumnos(legajos, nombres, notas, altura, T);

    printf("%4s %20s %2s %5s\n", "Legajo", "Nombre", "Nota", "Altura");

    for(i=0; i<T; i++)
    {
        printf("%4d  %20s  %2d  %5.2f\n", legajos[i], nombres[i], notas[i], altura[i]);
    }

    return 0;
}

void cargarAlumnos(int legajos[], char nombres[][21], int notas[], float altura[], int tamañoVector)
{
    int i;
    for(i=0; i<tamañoVector; i++)
    {
        printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);
        printf("Ingrese nombre: ");
        fflush(stdin);
        gets(nombres[i]);
        printf("Ingrese nota: ");
        scanf("%d", &notas[i]);
        printf("Ingrese altura: ");
        scanf("%f", &altura[i]);
    }
}
