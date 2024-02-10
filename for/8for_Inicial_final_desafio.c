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
    if (ninicial>nfinal)
    {
        for (; ninicial >= nfinal;)
     {
         printf ("%d \n", ninicial);
         ninicial = ninicial - 1;
     }

    } else {
    for (; ninicial <= nfinal; )
     {
         printf ("%d \n", ninicial);
         ninicial = ninicial + 1;
     }

    }
     printf ("Terminou a contagem! \n");
     system ("pause");
}
