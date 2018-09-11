#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresarNombreVerificado (char [],int);
void ingresarApellidoVerificado (char[], int);
void verificarMayusculas (char[], int);
void concatenarCadenas (char nombreYApellido [], char nombre[], char apellido[]);

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreYApellido[41];

    ingresarNombreVerificado(nombre, 20);
    ingresarApellidoVerificado(apellido, 20);
    concatenarCadenas(nombreYApellido, nombre, apellido);
    printf("%s", nombreYApellido);
    //agregarMayusculas(nombreYApellido, 43);

    return 0;
}

void ingresarNombreVerificado(char vector [],int cantidad)
{
    int contadorNombre;

    printf("Ingrese su nombre: ");
    gets(vector);

    contadorNombre = strlen(vector);

    while (contadorNombre > cantidad)
    {
        printf("Error. Ingrese un nombre con 20 o menos caracteres: ");
        fflush(stdin);
        gets(vector);
        contadorNombre = strlen(vector);
    }

}

void ingresarApellidoVerificado(char vector[], int cantidad)
{
    int contadorApellido;

    printf("Ingrese su apellido: ");
    gets(vector);

    contadorApellido = strlen(vector);

    while (contadorApellido > cantidad)
    {
        printf("Error. Ingrese un nombre con 20 o menos caracteres: ");
        fflush(stdin);
        gets(vector);
        contadorApellido = strlen(vector);
    }
}

void concatenarCadenas (char nombreYApellido [], char nombre[], char apellido[])
{
    int i;
    int j;

    for(i = 0; apellido[i] != '\0'; i++)
    {
        nombreYApellido[i] = apellido[i];
    }

    nombreYApellido[i] = ',';
    i++;

    nombreYApellido[i] = ' ';
    i++;

    for(j = 0; nombre[j] != '\0'; j++)
    {
        nombreYApellido[i+j] = nombre[j];
    }

    nombreYApellido[i+j] = '\0';
}

/* void verificarMayusculas(char vector [], int cantidad)
{
    int i;

    for (i = 0; vector[i] != '0'; i++)
    {
        if (i == 0)
        {
            if(vector[i] >= 'a' && vector[i] <= 'z')
            {
                vector[i] = vector[i] - 32;
                continue;
            }
        }
        if  (vector[i] == ',')
        {
            i++;
            continue;
        }
        if (vector[i] == ' ')
        {
            i++;
        } else
        {
            if(vector[i] >= 'a' && vector[i] <= 'z')
            {
                vector[i] = vector[i] - 32;
                continue;
            } else
            {
                if(vector[i] >= 'A' && vector[i] <= 'Z')
                {
                    vector[i] = vector[i] + 32;
                }
            }
        }
    printf("%s", vector);
    }
}
*/
