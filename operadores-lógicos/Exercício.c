#include <stdbool.h>
#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int v1, v2, r1, r2, r3;
    printf ("Digite um n�mero: ");
    scanf ("%d", &v1);
    printf ("Digite outro n�mero: ");
    scanf ("%d", &v2);
    r1 = (v1 > v2) && (v1 == v2);
    printf ("%d > %d e %d == %d resultado � %d \n", v1, v2, v1, v2, r1);
    r2 = (v1 <= v2) || (v1 != v2);
    printf ("%d <= %d ou %d != %d resultado � %d \n", v1, v2, v1, v2, r2);
    r3 = !(v1 < v2);
    printf ("N�o (%d < %d) resultado � %d \n", v1, v2, r3);
    system ("pause");

}
