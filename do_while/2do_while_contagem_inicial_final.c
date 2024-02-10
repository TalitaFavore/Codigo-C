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
    do
     {
         printf ("%d \n", ninicial);
         ninicial = ninicial + 1;
     }
      while (ninicial <= nfinal);
     printf ("Terminou a contagem! \n");
     system ("pause");
}
