#include <stdio.h>

int main()
{
    int number, mod;

    printf("Digite o número: ");
    scanf("%d", &number);

    mod = (number < 0) ? -1 * number : number;

    printf("O módulo de %d é %d\n", number, mod);
    return 0;
}