#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int idade, habilitacao;
    printf ("Qual � sua idade? ");
    scanf ("%d", &idade);
    if (idade>=18){
    printf ("Voc� possui habilita��o? Se sim, digite 1, se n�o digite 0: ");
    scanf ("%d", &habilitacao);
    }else if (idade >=18 && habilitacao = 1) {
    printf ("Voc� pode dirigir o ve�culo");
    }else{
    printf ("Voc� n�o pode dirigir");
    }
    system ("pause");
    }
