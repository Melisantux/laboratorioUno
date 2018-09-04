#include <stdio.h>
#include <stdlib.h>

#define T 10

/* Un puntero (se señaliza con *) guarda la dirección de memoria de una variable para que pueda modificarse el valor
de esa variable desde, por ejemplo, la funcion main. Si mostramos con un printf un puntero, veremos el valor que esta
guardado en la direcciòn de memoria.
Para pasar una dirección de memoria al puntero, éste debe estar declarado por ejemplo: puntero (&p, q).

Vectores: lìmite inferior: es siempre 0. El límite superior es siempre la cantidad de elementos menos uno.
Como declarar un vector: tipoDeVariable nombre representativo [tamaño del vector].
Para acceder a un ìndice del vector: nombreDelVector[índice al que quiero acceder] = valorAGuardar.
Para mostrar el valor de un índice del vector: por ejemplo: printf("%d", vector [2]).
Carga secuencial: el usuario carga los datos que contiene el vector, de forma ordenada (empezando por el lìmite
inferior hasta el lìmite superior).

#define = para definir una variable que toma el código antes de compilarse y la reemplaza por el valor al compilarse.

Para declarar una constante: por ejemplo: int const Q = 10. Esto generalmente no lo usamos.

swap de sentencias: C = B, B = A y A = C.
*/

int main()
{
    int vector[T] = {1,2,3,4,5,6,7,8,9,10}; //Se lo puede definir como un conjunto, debe ser coherente con lo definido.
    int i;

    //Asignacion sencuencial de valores.
    for(i=0; i<T ; i++ )
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }

    printf("\nTodos los numeros: \n");
    for(i=0; i<T ; i++ )
    {
        printf("%d\n", vector[i]);
    }

    printf("\nTodos los numeros pares: \n");
    for(i=0; i<T ; i++ )
    {
        if (vector[i]%2==0)
        {
            printf("%d\n", vector[i]);
        }
    }

    //Barrido del vector para mostrar los valores guardados en el vector.

    return 0;
}
