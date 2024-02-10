#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159

void main ()
{
    setlocale (LC_ALL, "");
    double c, r;
    r = 5;
    c = 2 * PI * r;
    printf("O comprimento da circunferência = %f \n", c);
    system ("pause");
}
