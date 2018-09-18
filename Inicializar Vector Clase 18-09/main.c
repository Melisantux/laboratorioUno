#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 6

/** \brief busca espacio disponible.
 *
 * \param int[] listado de enteros.
 * \param int tamaño del listado.
 * \param int el valor ilogico.
 * \return int [-1] si no hay espacio, [>=0] un indice donde guardarlo.
 *
 */
int buscarLibre(int[], int, int);

int main()
{
    //Crear vector de enteros.
    //inicializarlo a -1.
    //do-while pidiendo datos.

    int vector[T];
    int i;
    char pregunta;
    int indice;

    for(i=0; i < T; i++)
    {
        vector[i] = -1;
    }

    do
    {
        indice = buscarLibre(vector, T, -1);
        if(indice != -1)
        {
            printf("Ingrese el numero a guardar: ");
            scanf("%d", &vector[indice]);
        } else
        {
            printf("¡No hay mas espacio!\n");
        }

        printf("¿Desea cargar otro dato? S/N: ");
        fflush(stdin);
        scanf("%c", &pregunta);
        pregunta = tolower(pregunta);
    }
    while(pregunta == 's');

    return 0;
}

int buscarLibre(int numeros[], int dimension, int numeroIlogico)
{
    int index = -1;
    int i;

    for(i=0; i<dimension; i++)
    {
        if(numeros[i] == numeroIlogico)
        {
            index = i;
            break;
        }
    }
    return index;
}
