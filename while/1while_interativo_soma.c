#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    float num1, num2, soma;
    char opcao;
    opcao = 's';
    while (opcao == 's' || opcao == 'S')
    {
        printf ("Digite um n�mero: ");
        scanf ("%f", &num1);
        printf ("Digite outro n�mero: ");
        scanf ("%f", &num2);
        soma = num1 + num2;
        printf ("A soma de %.1f + %.1f = %.1f \n\n", num1, num2, soma);
        printf ("Deseja continuar o c�lculo da soma para outros n�meros? \n");
        printf ("Tecle [S] para continuar ou [N] para terminar: ");
        scanf (" %c", &opcao);
        printf ("\n");
    }
    printf ("O programa terminou! \n");
}
