// Estructura: queDevuelve comoSeLlama (queRecibe)
/*  retorna  recibe
        0       0   void nombreDeLaFuncion(void) ó () <--- si uso () asume que recibe enteros.
        0       1   void nombreDeLaFuncion(tipo de dato que recibe)
        1       0   tipoDeVariable nombreDeLaFuncion(void)
        1       1
*/

// Pasaje por valor: a la función le paso un valor. Se modifica solo localmente, no afecta el resultado.
// Pasaje por referencia: cuando a la función le paso una direccion de memoria. Modifica globalmente.
//Variable global: valor que alcanza a todas las funciones del programa. Por ejemplo: int global = 5; No se debe usar.
// La variable global se muestra como:

void suma1(void); //<--- cuando es prototipo lleva ";"
void suma2(int, int);

int main()
{
    int numeroUno, numeroDos;
    printf("Ingrese un numero a sumar: ");
    scanf("%d", &numeroUno);
    printf("Ingrese un numero a sumar: ");
    scanf("%d", &numeroDos);

    suma2(numeroUno, numeroDos); //parametros actuales (los de la llamada)
    //suma1();

    return 0;
}

void suma2(int numeroUno, int numeroDos) //parametros formales (los del prototipo o desarollo)
{
    int suma;
    suma=numeroUno + numeroDos;
    printf("La suma es: %d", suma);
}

/*void suma1 (void)
{
    int numeroUno, numeroDos, suma;

    printf("Ingrese un numero a sumar: ");
    scanf("%d", &numeroUno);
    printf("Ingrese un numero a sumar: ");
    scanf("%d", &numeroDos);
    suma=numeroUno + numeroDos;
    printf("La suma es: %d", suma);
}
*/
