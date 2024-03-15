#include <stdio.h>

int main()
{
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

   number%2 == 0 ? printf("Par\n") : printf("ímpar\n");
}