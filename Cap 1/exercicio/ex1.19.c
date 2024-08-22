#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float raio;
    float pi = 3.141592;
    
   
    scanf("%f", &raio);
    float diametro = raio * 2;;
    float circunferencia = (pi * 2) * raio;
    float area = (raio * raio) * pi;

    printf("Diametro = %.2f\n", diametro);
    printf("Circunferencia = %.2f\n", circunferencia);
    printf("Area = %.2f\n", area);
    
    return 0;
}