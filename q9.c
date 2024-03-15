#include <stdio.h>

int main()
{
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    printf("Seu antecessor é %d, e o seu sucessor é %d\n",number-1,number+1);
}