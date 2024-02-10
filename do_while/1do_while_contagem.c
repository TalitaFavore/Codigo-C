#include <stdio.h>
#include <locale.h>

void main () {
setlocale (LC_ALL, "");

int contador;

contador = 1;
do
{
    printf ("%d \n", contador);
    contador ++;
}
while (contador <=10);
system ("pause");
}
