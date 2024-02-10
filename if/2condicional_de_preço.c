#include <stdio.h>
#include <locale.h>

void main ()
{
    setlocale (LC_ALL, "");
    int cadeiras, resultado;
    printf ("Informe o total de cadeiras da compra: ");
    scanf ("%d", &cadeiras);
    resultado = cadeiras <=50 ? (cadeiras * 45) : (cadeiras * 40);
    printf ("O valor total da compra será de: %d reais \n", resultado);
    system ("pause");

}
