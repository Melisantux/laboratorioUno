#include <stdio.h>
#include <stdlib.h>
#define T 3

void cargarAlumnos(int[], char[][21], int[], float[], int);
//crear funcion mostrarAlumnos.
//Rehacer de cero.
//Agregar funciones para: ordenar los nombres alfabeticamente, una que muestre los alumnos aprobados(nota>6),
// una que muestre los alumnos que se llaman Juan, una que muestre los alumnos cuyo nombre comienzan con P.
// una que diga el alumno con mas nota (sabiendo que puede ser màs de uno). El mas mediocre (legajo=100, nota=5
// nombre=pepe y altura=1.75.
// Ingresar un legajo y permitir la modificacion de la nota (hacer una funcion que permita buscar el legajo y modificar
//la nota.
//Transformar la carga de datos en una carga aleatoria. (Inicializar todos los legajos en -1).
// Poner todo en un menù de opciones.


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
