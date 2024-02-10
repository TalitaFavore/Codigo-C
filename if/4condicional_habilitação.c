#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int idade, habilitacao;
    printf ("Qual é sua idade? ");
    scanf ("%d", &idade);
    if (idade>=18){
    printf ("Você possui habilitação? Se sim, digite 1, se não digite 0: ");
    scanf ("%d", &habilitacao);
    }else if (idade >=18 && habilitacao = 1) {
    printf ("Você pode dirigir o veículo");
    }else{
    printf ("Você não pode dirigir");
    }
    system ("pause");
    }
