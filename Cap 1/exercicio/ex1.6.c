#include <stdio.h>
#include <stdlib.h>

int main(void){
    int adicao;
    int subtracao;
    int multiplicacao;
    int divisao;
    int numero1;
    int numero2;

    //printf("%d", numero1);
    scanf("%d", &numero1);

    //printf("%d", numero2);
    scanf("%d", &numero2);

    adicao =  numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("%d + %d = %d\n", numero1, numero2,  adicao);
    printf("%d - %d = %d\n", numero1, numero2, subtracao);
    printf("%d * %d = %d\n", numero1, numero2, multiplicacao);
    printf("%d / %d = %d\n", numero1, numero2, divisao);

    return 0;
}