#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float primeiroNumero;
    float segundoNumero;
    float soma;
    float subtracao;
    float multiplicacao;
    float divisao;
    printf("Primeiro Numero:");
    scanf("%f", &primeiroNumero);
    printf("Segundo Numero: ");
    scanf("%f", &segundoNumero);

    soma = primeiroNumero + segundoNumero;
    subtracao = primeiroNumero - segundoNumero;
    multiplicacao = primeiroNumero * segundoNumero;
    divisao = primeiroNumero / segundoNumero;
    printf("%.2f + %.2f = %.2f\n", primeiroNumero, segundoNumero, soma);
    printf("%.2f - %.2f = %.2f\n", primeiroNumero, segundoNumero, subtracao);
    printf("%.2f * %.2f = %.2f\n", primeiroNumero, segundoNumero, multiplicacao);
    printf("%.2f / %.2f = %.2f\n", primeiroNumero, segundoNumero, divisao); 
    return 0;

}