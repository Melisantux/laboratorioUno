#include <stdio.h>
#include <stdlib.h>

//Metodo de inserción

int main()
{
    printf("Hello world!\n");
    return 0;
}

void insertion(int data[], int len)
{
    int i;
    int j;
    int auxiliar;

    for(i=1; i<len; i++)
    {
        auxiliar = data[i];
        j = i-1;
        while(j >= 0 && auxiliar < data[j])
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = auxiliar; //insercion.
    }
}


