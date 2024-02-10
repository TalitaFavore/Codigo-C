#include <stdio.h>
#include <locale.h> //biblioteca de acentuação
void main()
{
    setlocale(LC_ALL, "");
    float number;
    printf ("Digite um número: ");
    scanf ("%f", &number);
    printf ("O número digitado foi %.0f", number);

}
