#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int ninicial, nfinal;
    char opcao;
    opcao = 's';
    for (opcao = 's'; opcao == 's' || opcao == 'S';)
    {
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

        }
        else
        {
            for (; ninicial <= nfinal;)
            {
                printf ("%d \n", ninicial);
                ninicial = ninicial + 1;
            }

        }
        printf ("Deseja continuar a contagem para outros números? \n");
        printf ("Tecle [S] para continuar ou [N] para terminar: ");
        scanf (" %c", &opcao);
        printf ("\n");
    }
    printf ("Terminou a contagem! \n");
    system ("pause");
}
