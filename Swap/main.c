#include <stdio.h>
#include <stdlib.h>

#define T 10

//Mètodo de burbujeo.

int main()
{
    int vector[T] = {4,2,3,1,5,34,33,8,9,12};
    int i; // "mano celeste"
    int j; // "mano amarilla"
    int auxiliar; // debe ser del mismo tipo de datos que los que estoy ordenando.

    for(i=0; i<T-1; i++)
    {
        for(j=i+1; j<T; j++)
        {
            if(vector[i] < vector [j])
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }

    for(i=0; i<T; i++)
    {
        printf("%d\n", vector[i]);
    }
    return 0;
}
