#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float valorProduto, quantidadeParcelas, valorParcela;

    printf("Digite o valor do produto: ");
    scanf("%f", &valorProduto);

    do {
        printf("Digite a quantidade de parcelas desejadas (deve ser maior que zero): ");
        scanf("%f", &quantidadeParcelas);
    } while (quantidadeParcelas <= 0);

    valorParcela = valorProduto / quantidadeParcelas;

    printf("O valor de cada parcela será: %.2f \n", valorParcela);
    printf("Pressione qualquer tecla para continuar...\n");

    return 0;
}


