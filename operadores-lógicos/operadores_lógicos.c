#include <stdbool.h>
#include <stdio.h>
#include <locale.h>

void main()
{
   setlocale (LC_ALL, "");

    printf ("Operador E \n");
    printf ("V e V = %d \n", true && true);
    printf ("V e F = %d \n", true && false);
    printf ("F e V = %d \n", false && true);
    printf ("F e F = %d \n\n", false && false);
    printf ("Operador OU \n");
    printf ("V ou V = %d \n", true || true);
    printf ("V ou F = %d \n", true || false);
    printf ("F ou V = %d \n", false || true);
    printf ("F ou F = %d \n\n", false || false);
    printf ("Operador NÃO \n");
    printf ("nao V = %d \n", true);
    printf ("nao F = %d \n", false);
    system ("pause");
}
