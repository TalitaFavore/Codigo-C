#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int contador, dobro;
    contador = 1;
    while (contador <=10)
    {
        dobro = contador * 2;
        printf ("O dobro de %d é %d \n", contador, dobro);
        contador = contador + 1;
    }
    system ("pause");
}
