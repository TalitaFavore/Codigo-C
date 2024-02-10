#include <stdio.h>
#include <locale.h>
void main()
{
    setlocale (LC_ALL, "");
    char nome [50];
    char sexo;
    printf ("Digite seu nome: ");
    gets(nome);
    printf ("Digite f [feminino] ou m [masculino]: ");
    scanf ("%c", &sexo);
    printf ("O nome digitado foi %s que possui o sexo %c", nome, sexo);
}
