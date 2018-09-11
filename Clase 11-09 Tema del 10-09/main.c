#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// strncpy(destino, origen, cantidad de elementos a copiar). Permite hacer una copia en modo seguro, agregando la
// cantidad de elementos que quiero copiarle a la otra función.


int main()
{
    char cadena1[5];
    char cadena2[100] = "Hola como estas?";

    strncpy(cadena1, cadena2, 4);

    puts(cadena1);

    return 0;
}
