#include <stdio.h>
#include <locale.h> //biblioteca de acentua��o
void main()
{
    setlocale(LC_ALL, "");
    float number;
    printf ("Digite um n�mero: ");
    scanf ("%f", &number);
    printf ("O n�mero digitado foi %.0f", number);

}
