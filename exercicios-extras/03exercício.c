#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "");

    float peso, altura, altura2, imc;

    printf("Informe seu peso em quilos: ");
    scanf("%f", &peso);

    printf("Informe sua altura em metros: ");
    scanf("%f", &altura);

    altura2 = pow (altura, 2);
    imc = peso / altura2;

    printf("Seu Índice de Massa Corporal é %.2f\n", imc);

    return 0;
}

