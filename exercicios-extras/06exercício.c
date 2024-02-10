#include <stdio.h>

int main ()
{
    int num, cont = 1;
    printf ("Digite um n�mero: ");
    scanf("%d", &num);
    printf ("IMPARES \tPARES\n");
    while (cont <= num)
    {
        if (cont % 2 == 1)
        {
            printf("%d \t\t", cont);
        }
        else
        {
            printf("\t%d\n", cont);
        }
        cont++;
    }
    return 0;
}


