#include <stdio.h>
#include <stdlib.h>

int seleccionDeOpcion(void);
int ingresoPrimerOperando(void);
int ingresoSegundoOperando(void);
int seleccionOperacion(void);
int operacionSuma(int primerOperando, int segundoOperando);
int operacionResta(int primerOperando, int segundoOperando);
float operacionDivision(int primerOperando, int segundoOperando);

int main()
{
    int opcion;
    int opcion3;
    int primerOperando;
    int segundoOperando;
    int suma;
    int resta;
    //float multiplicacion;
    float division;
    //float factorial;

    do
    {
        printf("\n_____________________________________________\n");

        printf("\n1)Ingresar el primer operando. %d\n", primerOperando);
        printf("2)Ingresar el segundo operando. %d\n", segundoOperando);
        printf("3)Realizar operaciones.\n");
        printf("4)Informar resultados.\n");
        printf("5)Salir.\n");

        printf("_____________________________________________\n");

        opcion=seleccionDeOpcion();

        switch(opcion)
        {
        case 1:
            primerOperando=ingresoPrimerOperando();
            system("cls");
            break;
        case 2:
            segundoOperando=ingresoSegundoOperando();
            system("cls");
            break;
        case 3:
            printf("\n_____________________________________________\n");

            printf("\n1)Calcular la suma.\n");
            printf("2)Calcular la resta.\n");
            printf("3)Calcular la division.\n");
            printf("4)Calcular la multiplicacion.\n");
            printf("5)Calcular el factorial.\n");

            printf("\n_____________________________________________\n");

            opcion3=seleccionOperacion();

            switch(opcion3)
            {
            case 1:
                suma=operacionSuma(primerOperando, segundoOperando);
                break;
            case 2:
                resta=operacionResta(primerOperando, segundoOperando);
                break;
            case 3:
                division=operacionDivision(primerOperando, segundoOperando);

            }
            system("cls");
            break;
        case 4:
            printf("\n_____________________________________________\n");
            printf("\nEl resultado de %d", primerOperando);
            printf(" + %d", segundoOperando);
            printf(" es: %d\n", suma);
            printf("\n_____________________________________________\n");
            printf("\nEl resultado de %d", primerOperando);
            printf(" - %d", segundoOperando);
            printf(" es: %d\n", resta);
            printf("\nEl resultado de %d", primerOperando);
            printf("/%d", segundoOperando);
            printf(" es: %0.3f\n", division);
        }
    }
    while (opcion >= 1 && opcion <5);

    return 0;
}

int seleccionDeOpcion(void)
{
    int opcion;

    printf("\nIngrese una opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;
}

int ingresoPrimerOperando()
{
    int primerOperando;
    printf("Ingrese el primer operando: ");
    scanf("%d", &primerOperando);

    return primerOperando;
}

int ingresoSegundoOperando()
{
    int segundoOperando;
    printf("Ingrese el segundo operando: ");
    scanf("%d", &segundoOperando);

    return segundoOperando;
}

int seleccionOperacion(void)
{
    int opcion;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

int operacionSuma(int primerOperando, int segundoOperando)
{
    int suma;

    suma= primerOperando + segundoOperando;

    return suma;
}

int operacionResta(int primerOperando, int segundoOperando)
{
    int resta;
    system("cls");
    resta= primerOperando - segundoOperando;

    return resta;
}

float operacionDivision(int primerOperando, int segundoOperando)
{
    float division;

    division=(float)primerOperando/segundoOperando;

    return division;
}
