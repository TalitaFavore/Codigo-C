#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
void main ()
{
    setlocale (LC_ALL, "");
    bool v, f;
    v = true;
    f = false;
    printf("O melhor time do Brasil � o Corinthians? %d \n", f);
    printf ("Hoje n�o vai chover? %d \n", v);
}
