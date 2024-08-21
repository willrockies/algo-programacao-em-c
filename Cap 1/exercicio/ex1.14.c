#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float numero;
    printf("Valor do lado: \n");
    scanf("%f", &numero);

    printf("Perimetro = %.2f\n", numero * 4);
    printf("Area = %.2f", numero * numero);
 
    return 0;

}