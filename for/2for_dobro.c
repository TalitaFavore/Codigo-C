#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int contador, dobro;

    for (contador = 1; contador <=10; contador++)
    {
        dobro = contador * 2;
        printf ("O dobro de %d � %d \n", contador, dobro);

    }
    system ("pause");
}
