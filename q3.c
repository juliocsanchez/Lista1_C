#include <stdio.h>

int main()
{

    float number;

    printf("Digite um valor real:");
    scanf("%f", &number);

    printf("Numero formatado: %.1f\n", number);

    return 0;
}