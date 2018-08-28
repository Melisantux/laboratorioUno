#include <stdio.h>
#include <stdlib.h>

// Funcion: modulo que realiza una tarea especifica.
// 1) Declarar la funcion/prototipo/firma
// 2) Llamada a la funcion
// 3) Desarollo de la funcion

// Estructura: queDevuelve comoSeLlama (queRecibe)
/*  retorna  recibe
        0       0   void nombreDeLaFuncion(void) ó () <--- si uso () asume que recibe enteros.
        0       1   void nombreDeLaFuncion(tipo de dato que recibe)
        1       0
        1       1
*/

void suma1(void); //<--- cuando es prototipo lleva ";"
void suma2(float, float);

int main()
{
    float numero;
    int i;
    for(i=0; i<2; i++)
    {
        printf("Ingrese un numero a sumar: ");
        scanf("%f", &numero);
    }

    suma2(numero);
    //suma1();
    return 0;
}

void suma2(float numero1, float numero2)
{
    float suma
    suma=numero1 + numero2;
    printf("La suma es: %f", suma);
}

void suma1 (void)
{
    float numero,suma;
    int i;
    for(i=0; i<2; i++)
    {
        printf("Ingrese un numero a sumar: ");
        scanf("%f", &numero);
        suma= numero + numero;
    }
    printf("La suma es: %f", suma);
}

