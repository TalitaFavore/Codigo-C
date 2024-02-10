#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int idade;
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    if (idade >=150) {
        printf ("Você está morto \n");
    } else if (idade >=18) {
    printf ("Você tem %d anos e é maior de idade \n", idade);
    } else if (idade <18) {
    printf("Você tem %d anos e é menor de idade \n");
    }
    system ("pause");
}
