#include <stdio.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "");

    int maior=0, num, cont=1;
    do
    {
        printf ("Digite o n�mero %d: ", cont);
        scanf ("%d", &num);

        if ( num > maior)
        {
            maior=num;
        }

    cont++;
    } while (cont <= 5);

    printf("Maior: %d", maior);

    return 0;
}
