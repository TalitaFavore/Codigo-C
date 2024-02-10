#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int contador;
    contador = 1;
    while (contador <=10)
    {
        printf ("%d \n", contador);
        contador = contador + 2;
    }
    printf ("Terminou a contagem! \n");
    system ("pause");
}
