#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int numero1, numero2, media;

    scanf("%d", &numero1);
    scanf("%d", &numero2);
    media = (numero1 + numero2) / 2;
    printf("Media aritmetica: %d", media);
    return 0;

}