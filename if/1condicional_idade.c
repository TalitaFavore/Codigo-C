#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int idade;
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);

    if (idade >=150) {
        printf ("Voc� est� morto \n");
    } else if (idade >=18) {
    printf ("Voc� tem %d anos e � maior de idade \n", idade);
    } else if (idade <18) {
    printf("Voc� tem %d anos e � menor de idade \n");
    }
    system ("pause");
}
