#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ano, anoAtual;
    
    scanf("%d", &ano);
    scanf("%d", &anoAtual);

    int idade = anoAtual - ano;
    printf("Idade aproximada: %d anos", idade);
    return 0;
}