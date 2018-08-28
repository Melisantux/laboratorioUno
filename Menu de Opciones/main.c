#include <stdio.h>
#include <stdlib.h>
// si quisiera hacer una funcion que tiene el menu de opciones:
int elegirOpcion(void);

int main()
{
    int opcion;
    do
    {
        printf("1) Sumar\n");
        printf("2) Restar\n");
        printf("3) Dividir\n");
        printf("4) Multiplicar\n");
        printf("5) Salir\n");

        opcion=elegirOpcion();

        switch (opcion)
        {
        case 1:
            printf("Estoy sumando.");
        break;
        case 2:
            printf("Estoy restando.");
        break;
        case 3:
            printf("Estoy dividiendo.");
        break;
        case 4:
            printf("Estoy multiplicando");
        break;
        case 5:
        break;
        default:
            printf("Ingrese una opcion valida.");
        }
        system("pause");
        system("cls"); //limpia la pantalla.
    } while(opcion!=5);
    return 0;
}

int elegirOpcion(void)
{
    int opcion;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcion);

    return opcion;
}
