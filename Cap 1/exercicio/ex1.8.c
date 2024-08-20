#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int altura;
    int largura;
    printf("Valor da largura: ");
    scanf("%d", &largura);
    printf("Valor da altura: ");
    scanf("%d", &altura);
    
    int calcularPerimento = largura * 2 + altura * 2;
    int calcularArea = largura * altura;
    printf("Perimetro = %d\n", calcularPerimento);
    printf("Area = %d", calcularArea);
  

    return 0;

}