#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int numero;
    int numero2;
    printf("Entre com um numero: ");
    scanf("%d", &numero);
    printf("Entre com outro numero: ");
    scanf("%d", &numero2);

    if (numero2 > numero)
    {
        printf("Ordem crescente: %d <= %d\n", numero, numero2);
    }

    else
    {
        printf("Ordem crescente: %d <= %d\n", numero2, numero);
    }
    return 0;
}