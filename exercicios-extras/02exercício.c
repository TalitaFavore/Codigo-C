#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome[100];
    float n1, n2, n3, n4, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    printf("A média do aluno %s é %.2f\n", nome, media);

    return 0;
}

