#include <stdio.h>
#include <stdlib.h>
//Sumar3 caso retorna pero no recibe.
void sumar2(int, int);
int sumar3(void);
int sumar4(int,int);

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma= sumar4(numeroUno, numeroDos);
    printf("La suma es: %d", suma);
    return 0;
}

int sumar3(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma= numeroUno + numeroDos;

    return suma;
}

//sumar4 retorna y recibe. Este caso es el ideal.
int sumar4(int numeroUno, int numeroDos)
{
    int suma;
    suma=numeroUno+numeroDos;
    return suma;
}
