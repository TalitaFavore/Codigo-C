#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float distanciaPercorrida, combustivelGasto, consumoMedio;

    printf("Informe a distância percorrida em quilômetros: ");
    scanf("%f", &distanciaPercorrida);

    printf("Informe o total de combustível gasto em litros: ");
    scanf("%f", &combustivelGasto);

    consumoMedio = distanciaPercorrida / combustivelGasto;

    printf("O consumo médio de combustível foi de %.2f km/l\n", consumoMedio);

    return 0;
}
