#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fflush(stdin); //Para estructuras repetititas. Tambièn se puede ponerlo por las dudas.
// stricmp: cumple la misma función que strcmp pero no es case sensitive (no distingue mayusculas de minusculas).
//Funciones vistas: strcmp, stricmp, strcopy, gets, strlen.
// strupr: equivalente a toLocaleUpperCase. Uno lee una cadena (strupr) y el otro lee sólo un caracter (UpperCase).
// strlwr: equivalente a toLocaleLowerCase.
//puts: equivalente al gets. No permite darle formato. Tiene un salto de linea.

int main()
{
    char cadena[20];
    char cadenaDos[50] = "gato";
    int estado;

    estado = strcmp(cadenaDos, "Gato"); //Muestra 0 cuando dos cadenas son iguales. Si devuelve 1 es que la primer cadena
                                        //está alfabeticametne después que la segunda cadena. Si da -1 la primer cadena
                                        //está alfabéticamente antes que la segunda cadena.

    strupr(cadenaDos);

    puts(cadenaDos);
    //strcpy(cadena, cadenaDos);
    //cantidad = strlen(cadena);
    //gets(cadena);
    printf("%d", estado);

    return 0;
}
