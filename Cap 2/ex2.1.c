#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero;

    printf("Entre com um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("Numero é par");
    if (numero % 2 != 0)
        printf("numero é ímpar");
    return 0;
}