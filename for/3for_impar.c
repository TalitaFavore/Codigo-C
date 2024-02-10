#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int contador;

    for (contador = 1; contador <=10; contador = contador + 2)
    {
        printf ("%d \n", contador);

    }
    printf ("Terminou a contagem! \n");
    system ("pause");
}
