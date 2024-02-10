#include <stdio.h>
#include <locale.h>

void main () {
setlocale (LC_ALL, "");
 float salario, tempo, idade;
 printf ("Informe seu salário: ");
 scanf ("%f", &salario);
 printf ("Informe seu tempo de serviço neste emprego em anos: ");
 scanf ("%f", &tempo);
 printf ("Informe sua idade: ");
 scanf ("%f", &idade);
 if (salario < 4000 && idade >= 30 && tempo >=3) {
printf ("Você receberá ajuste no salário \n");
 } else {
 printf ("Você não receberá ajuste no salário \n");
 }
 system ("pause");
}
