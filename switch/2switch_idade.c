#include <stdio.h>
#include <locale.h>

void main () {
setlocale (LC_ALL, "");
int idade;
printf ("Digite sua idade: ");
scanf ("%d", &idade);
switch (idade >=18)
{

case (1):
    printf ("\n Sua idade � %d e voc� � maior de idade.", idade);
    break;
default :
    printf ("\n Sua idade � %d e voc� � menor de idade. \n", idade);
    system ("pause");}
}
