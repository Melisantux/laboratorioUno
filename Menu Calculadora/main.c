#include <stdio.h>
#include <stdlib.h>

int seleccionDeOpcion(void);
float ingresoPrimerOperando(void);
float ingresoSegundoOperando(void);
int seleccionOperacion(void);
float operacionSuma(float primerOperando, float segundoOperando);
float operacionResta(float primerOperando, float segundoOperando);
float operacionDivision(float primerOperando, float segundoOperando);
float operacionMultiplicacion (float primerOperando, float segundoOperando);

int main()
{
    int opcion;
    int opcion3;
    float primerOperando;
    float segundoOperando;
    float suma;
    float resta;
    int banderaPrimerOperando=0;
    int banderaSegundoOperando=0;
    int banderaSuma=0;
    int banderaResta=0;
    int banderaMultiplicacion=0;
    int banderaDivision=0;
    //int banderaFactorial=0;
    float multiplicacion;
    float division;
    //int factorial;

    do
    {
        printf("\n_____________________________________________\n");

        if (banderaPrimerOperando == 0)
        {
            printf("\n1)Ingresar el primer operando.\n");
        }
        else
        {
            printf("\n1)Ingresar el primer operando: %0.3f\n", primerOperando);
        }

        if (banderaSegundoOperando == 0)
        {
            printf("2)Ingresar el segundo operando.\n");
        }
        else
        {
            printf("2)Ingresar el segundo operando: %0.3f\n", segundoOperando);
        }
        printf("3)Realizar operaciones.\n");
        printf("4)Informar resultados.\n");
        printf("5)Salir.\n");

        printf("_____________________________________________\n");

        opcion=seleccionDeOpcion();

        switch(opcion)
        {
        case 1:
            primerOperando=ingresoPrimerOperando();
            banderaPrimerOperando=1;
            system("cls");
            break;
        case 2:
            segundoOperando=ingresoSegundoOperando();
            banderaSegundoOperando=1;
            system("cls");
            break;
        case 3:
            printf("_____________________________________________\n");

            printf("\n1)Calcular la suma.\n");
            printf("2)Calcular la resta.\n");
            printf("3)Calcular la division.\n");
            printf("4)Calcular la multiplicacion.\n");
            printf("5)Calcular el factorial.");

            printf("\n_____________________________________________\n");

            opcion3=seleccionOperacion();

            switch(opcion3)
            {
            case 1:
                suma=operacionSuma(primerOperando, segundoOperando);
                banderaSuma=1;
                break;
            case 2:
                resta=operacionResta(primerOperando, segundoOperando);
                banderaResta=1;
                break;
            case 3:
                division=operacionDivision(primerOperando, segundoOperando);
                banderaDivision=1;
                break;
            case 4:
                multiplicacion=operacionMultiplicacion(primerOperando, segundoOperando);
                banderaMultiplicacion=1;
            }

            system("cls");
            break;
        case 4:
            if (banderaSuma == 1)
            {
                printf("\n_____________________________________________\n");
                printf("\nEl resultado de %0.3f", primerOperando);
                printf(" + %0.3f", segundoOperando);
                printf(" es: %0.3f", suma);
                printf("\n_____________________________________________\n");
            }
            if (banderaResta == 1)
            {
                printf("\n_____________________________________________\n");
                printf("\nEl resultado de %0.3f", primerOperando);
                printf(" - %f", segundoOperando);
                printf(" es: %0.3f", resta);
                printf("\n_____________________________________________\n");

            }
            if (banderaDivision == 1 && segundoOperando !=0)
            {
                printf("\n_____________________________________________\n");
                printf("\nEl resultado de %0.3f", primerOperando);
                printf("/%0.3f", segundoOperando);
                printf(" es: %0.3f", division);
                printf("\n_____________________________________________\n");
            } else
            {
                if (segundoOperando == 0)
                {
                    printf("\n_____________________________________________\n");
                    printf("\nNo es posible dividir por cero.");
                    printf("\n_____________________________________________\n");
                }
            }
            if (banderaMultiplicacion == 1)
            {
                printf("\n_____________________________________________\n");
                printf("\nEl resultado de %0.3f", primerOperando);
                printf("* %0.3f", segundoOperando);
                printf(" es: %0.3f", multiplicacion);
                printf("\n_____________________________________________\n");
            }
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

float ingresoPrimerOperando()
{
    float primerOperando;
    printf("Ingrese el primer operando: ");
    scanf("%f", &primerOperando);

    return primerOperando;
}

float ingresoSegundoOperando()
{
    float segundoOperando;
    printf("Ingrese el segundo operando: ");
    scanf("%f", &segundoOperando);

    return segundoOperando;
}

int seleccionOperacion(void)
{
    int opcion;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

float operacionSuma(float primerOperando, float segundoOperando)
{
    float suma;
    suma= primerOperando + segundoOperando;

    return suma;
}

float operacionResta(float primerOperando, float segundoOperando)
{
    float resta;
    resta= primerOperando - segundoOperando;

    return resta;
}

float operacionDivision(float primerOperando, float segundoOperando)
{
    float division;
    if (segundoOperando != 0)
    {
        division=primerOperando/segundoOperando;
    }

    return division;
}

float operacionMultiplicacion(float primerOperando, float segundoOperando)
{
    float multiplicacion;
    multiplicacion= primerOperando * segundoOperando;

    return multiplicacion;
}
