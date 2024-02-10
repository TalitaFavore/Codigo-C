#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    float precoproduto, formapag, desconto, precovista;
    printf ("Informe o valor do produto: ");
    scanf ("%f", &precoproduto);
    printf ("Formas de pagamento:\n 1 - à vista \n 2 - à prazo \n Escolha o pagamento (1 ou 2): ");
    scanf ("%f", &formapag);
    if (formapag >= 2) {
            printf ("O preço à prazo será de %.2f \n", precoproduto);
    }else{
        desconto = 0.1;
        precovista = precoproduto - (precoproduto * desconto);
        printf ("O total a pagar à vista será de %.2f \n", precovista);
    }
    system ("pause");}
