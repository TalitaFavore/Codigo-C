#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    char sabor;
    printf ("Escolha seu sabor de pizza: \n [a] Pizza 4 Queijos \n [b] Pizza Carijó \n [c] Pizza à Moda da Casa \n [d] Pizza Palmito com Catupiry");
    printf ("\n Digite o número correspondente: ");
    scanf ("%c", &sabor);
    switch (sabor) {
    case 'a':
    case 'A':
        printf ("A pizza escolhida foi 4 Queijos e custa 20 reais");
        break;
    case 'b':
    case 'B':
        printf ("A pizza escolhida foi Carijó e custa 20 reais");
        break;
    case 'c':
    case 'C':
        printf ("A pizza escolhida foi à Moda da Casa e custa 20 reais");
        break;
    case 'd':
    case 'D':
        printf ("A pizza escolhida foi Palmito com Catupiry e custa 20 reais.");
        break;
    default:
        printf ("Opção Inválida");
    system ("pause");}
}
