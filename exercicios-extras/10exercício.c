#include <stdio.h>

void main ()
{
    int num;
    do
    {
        printf ("Informe um número entre 1 a 4: \n");
        scanf("%d",&num);
    }
    while (num >= 1 && num <= 4);
    printf ("\nTerminou\n");
}
