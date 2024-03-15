#include <stdio.h>

int main()
{

    int number;

    printf("Entre com o valor: ");
    scanf("%d", &number);

    printf("Hexa: %X\n", number);
    printf("Octal: %o\n", number);

    return 0;
}