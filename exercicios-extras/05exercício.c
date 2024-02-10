#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nomeVendedor[100];
    float salarioMinimo, totalVendas, comissao, salarioTotal;

    printf("Informe o nome do vendedor: ");
    fgets(nomeVendedor, sizeof(nomeVendedor), stdin);

    printf("Informe o salário mínimo do vendedor: ");
    scanf("%f", &salarioMinimo);

    printf("Informe o total de vendas do vendedor: ");
    scanf("%f", &totalVendas);

    comissao = totalVendas * 0.15;
    salarioTotal = salarioMinimo + comissao;

    printf("O salário total do vendedor %s será de %.2f\n", nomeVendedor, salarioTotal);

    return 0;
}
