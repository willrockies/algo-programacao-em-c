#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int diagonalMaior;
    int diagonalMenor;

    printf("Valor da base maior: ");
    scanf("%d", &diagonalMaior);
    printf("Valor Da base menor: ");
    scanf("%d", &diagonalMenor);

    int area = (diagonalMaior * diagonalMenor) / 2;
    printf("Area = %d", area);
    return 0;
}