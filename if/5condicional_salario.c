#include <stdio.h>
#include <locale.h>

void main () {
setlocale (LC_ALL, "");
 float salario, tempo, idade;
 printf ("Informe seu sal�rio: ");
 scanf ("%f", &salario);
 printf ("Informe seu tempo de servi�o neste emprego em anos: ");
 scanf ("%f", &tempo);
 printf ("Informe sua idade: ");
 scanf ("%f", &idade);
 if (salario < 4000 && idade >= 30 && tempo >=3) {
printf ("Voc� receber� ajuste no sal�rio \n");
 } else {
 printf ("Voc� n�o receber� ajuste no sal�rio \n");
 }
 system ("pause");
}
