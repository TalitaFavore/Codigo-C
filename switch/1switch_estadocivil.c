#include <stdio.h>
#include <locale.h>

void main () {
setlocale (LC_ALL, "");

char estadoCivil;
printf ("Digite [c] para casado(a) \n");
printf ("Digite [s] para solteiro(a) \n");
printf ("Digite [d] para divorciado(a) \n");
printf ("Digite [v] para vi�vo(a) \n");
printf ("Qual � o seu estado civil: ");
scanf ("%c", &estadoCivil);
switch (estadoCivil) {
case 'c':
case 'C':
    printf ("\n O estado civil selecionado � casado(a \n");
    break;
case 's':
case 'S':
    printf ("\n O estado civil selecionado � solteiro(a \n");
    break;
case 'd':
case 'D':
    printf ("\n O estado civil selecionado � divorciado(a \n");
    break;
case 'v':
case 'V':
    printf ("\n O estado civil selecionado � vi�vo(a \n");
    break;
default:
    printf ("\n Op��o inv�lida \n");}

system ("pause");
}
