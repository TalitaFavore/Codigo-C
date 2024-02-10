#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int contador, soma;

    soma = 0;
   for (contador = 1; contador <=10; contador = contador + 1)
    {
        soma = soma + contador;

    }
    printf ("A soma de 1 a 10 é: %d \n", soma);
    system ("pause");
}
