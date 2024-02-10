#include <stdio.h>

int main()
{
    int item, quantidadeItens, quantidade, contador;
    float subtotalItem = 0, totalNota = 0, valor;

    printf("Digite a quantidade de itens da nota fiscal: ");
    scanf("%d", &quantidadeItens);
    printf("\n");

    for (contador = 1; contador <= quantidadeItens; contador++)
    {
        printf("Digite o valor do item %d: ", contador);
        scanf("%f", &valor);
        printf("Digite a quantidade do item %d: ", contador);
        scanf("%d", &quantidade);

        subtotalItem = valor * quantidade;
        printf("Subtotal do item %d: %.1f\n\n", contador, subtotalItem);

        totalNota = totalNota + subtotalItem;
    }
    printf("Total da Nota Fiscal: %.1f\n", totalNota);

    return 0;
}
