#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int ninicial, nfinal;
    printf ("Digite o número inicial da contagem: ");
    scanf ("%d", &ninicial);
    printf ("Digite número final da contagem: ");
    scanf ("%d", &nfinal);
     for (;ninicial <= nfinal; ninicial = ninicial + 1)
     {
         printf ("%d \n", ninicial);

     }
     printf ("Terminou a contagem! \n");
     system ("pause");
}
