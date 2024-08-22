#include <stdio.h>
#include <stdlib.h>

int main(void)  
{
    float valorProduto;
    scanf("%f", &valorProduto);
    
    int desconto = 9;

    float precoDeVenda = valorProduto - (valorProduto * (desconto / 100.0));

    printf("Preco de venda com 9%% de desconto: %.2f", precoDeVenda);
    return 0;
}