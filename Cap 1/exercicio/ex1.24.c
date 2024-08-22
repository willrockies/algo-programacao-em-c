#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float valorHoraAula;
    int qtAulas;
    float porcetagemDescontoInss;
    printf("Valor da hora/aula: ");
    scanf("%f", &valorHoraAula);
    printf("Quantidade de aulas: ");
    scanf("%d", &qtAulas);
    printf("Porcetagem de desconto do INSS: ");
    scanf("%f", &porcetagemDescontoInss);

    float salarioBruto = valorHoraAula * qtAulas;   
    float inss = salarioBruto * (porcetagemDescontoInss / 100.0);
    
    float salarioLiquido = salarioBruto - inss;
    printf("Salario Liquido: %.2f", salarioLiquido);
    return 0;

}