#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int contador, soma;
    contador = 1;
    soma = 0;
   do
    {
        soma = soma + contador;
        contador = contador + 1;
    }
    while (contador <=10);
    printf ("A soma de 1 a 10 �: %d \n", soma);
    system ("pause");
}
