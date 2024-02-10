#include <stdio.h>
#include <locale.h>

void main () {
setlocale (LC_ALL, "");

float num1, num2, soma;
char opcao;

do
{
    printf ("Digite um número: ");
    scanf ("%f", &num1);
    printf ("Digite outro número: ");
    scanf ("%f", &num2);
    soma = num1 +num2;
    printf ("A soma de %0.2f + %0.2f = %0.2f \n\n", num1, num2, soma);
    printf ("Deseja continuar o cáuculo da soma de outros números? \n");
    printf ("Tecle [S] para continuar ou [N] para terminar: ");
    scanf (" %c", &opcao);
    printf ("\n");
}
    while (opcao == 's' || opcao == 'S');
    printf ("O programa terminou! \n");
    system ("pause");
}
