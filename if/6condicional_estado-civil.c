#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main ()
{
    setlocale (LC_ALL, "");

    char estadocivil;
    printf ("Informe seu estado civil. Para isso, digite uma letra correspondente: \n s - solteiro \n n - namorando \n c - casado \n v - vi�vo \n d - divorciado \n");
    scanf ("%c", &estadocivil);
    if (estadocivil == 's'|| estadocivil == 'S') {
    printf ("Seu estado civil �: solteiro \n");
    } else if (estadocivil == 'n'|| estadocivil == 'N') {
    printf ("Seu estado civil �: namorando \n");
    } else if (estadocivil == 'c'|| estadocivil == 'C') {
    printf ("Seu estado civil �: casado \n");
    } else if (estadocivil == 'v'|| estadocivil == 'V') {
    printf ("Seu estado civil �: vi�vo \n");
    } else if (estadocivil == 'd' || estadocivil == 'D') {
    printf ("Seu estadocivil �: divorciado \n");
    } else {
    printf ("Voc� escolheu uma op��o inv�lida \n"); }
    system ("pause");
}
