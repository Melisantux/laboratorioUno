#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//atoi = equivalente a parseInt de JS.
//atof = para convertirlo a flotante.
// ISdigit = para verificar si son caracteres numericos.

void ingresarNombreVerificado (char [],int);
void ingresarApellidoVerificado(char[], int);

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreYApellido[41];
    int i;

    ingresarNombreVerificado(nombre, 20);
    ingresarApellidoVerificado(apellido, 20);

    strcpy(nombreYApellido, apellido);
    strcat(nombreYApellido, ", ");
    strcat(nombreYApellido, nombre);

    strlwr(nombreYApellido);

    nombreYApellido[0] = toupper(nombreYApellido[0]);

    for (i = 0; i < strlen(nombreYApellido); i++)
    {
        if (nombreYApellido[i] == ' ') //if (isspace(nombreYApellido[i]).
        {
            nombreYApellido[i + 1] = toupper(nombreYApellido[i + 1]);
        }
    }

    puts(nombreYApellido);

    return 0;
}

void ingresarNombreVerificado(char vector [],int cantidad)
{
    char buffer[1024];

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(buffer);

    while (strlen(buffer) > (cantidad - 1))
    {
        printf("Error. Ingrese un nombre con 20 o menos caracteres: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(vector, buffer);

}

void ingresarApellidoVerificado(char vector [],int cantidad)
{
    char buffer[1024];

    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer);

    while (strlen(buffer) > (cantidad - 1))
    {
        printf("Error. Ingrese un apellido con 20 o menos caracteres: ");
        fflush(stdin);
        gets(buffer);
    }

    strcpy(vector, buffer);

}
