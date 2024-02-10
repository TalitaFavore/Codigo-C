#include <stdio.h>
#include <locale.h>

void main ()
{
setlocale (LC_ALL, "");

    float num1, num2, soma;
    char opcao;

    for (opcao = 's'; opcao == 's' || opcao == 'S'; opcao)
    {
        printf ("Digite um número: ");
        scanf ("%f", &num1);
        printf ("Digite outro número: ");
        scanf ("%f", &num2);
        soma = num1 + num2;
        printf ("A soma de %0.2f + %0.2f = %0.2f \n\n", num1, num2, soma);
        printf ("Deseja continuar o cálculo da soma de outros números? \n");
        ("Tecle [S] para continuar ou [N] para terminar: ");
        scanf (" %c", &opcao);
        printf ("\n");
    }
    printf ("O programa terminou! \n");
    system ("pause");
}
