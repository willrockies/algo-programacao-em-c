#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero;
    printf("Valor do lado: ");
    scanf("%d", &numero);
 
    printf("Perimetro = %d\n", numero * 4);
    printf("Area = %d", numero * numero);
    return 0;

}