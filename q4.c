#include <stdio.h>

int main()
{

    int number;

    printf("Digite um número:");
    scanf("%d", &number);

    printf("Triplo = %d\nQuadrado = %d\nMeio = %d", number * 3, number * number, number / 2);

    return 0;
}