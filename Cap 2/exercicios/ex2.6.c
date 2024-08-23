#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{

    float numero;
    float metade = 2.0;
    float resultado;
    printf("Entre com um valor: ");
    scanf("%f", &numero);

    if (numero >= 20)
    {
        resultado = numero / metade;
        printf("A metade de %.2f e %.2f", numero, resultado);
    }
    else 
    {
        resultado = numero * 3;
        printf("O triplo de %.2f e %.2f", numero, resultado);
    }

    return 0;
}