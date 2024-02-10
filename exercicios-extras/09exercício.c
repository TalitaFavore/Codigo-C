#include <stdio.h>

void main ()
{
    int i, idade, contador=0;
for (int i = 1; i <= 5; i++)
{
    printf ("Digite a idade da %d pessoa ", i);
    scanf ("%d", &idade);
if (idade >= 18)
    {
    contador++;
    }
}
printf ("%d pessoa(s) maior(es) de 18 anos", contador);
}
