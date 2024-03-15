#include <stdio.h>

int main()
{

    float altura, ideal;
    char sexo;

    printf("Digite sua altura:");
    scanf("%f", &altura);

    printf("Digite seu sexo:");
    scanf(" %c", &sexo);

    if (sexo == 'M')
    {
        ideal = 72.7 * altura - 58;
        printf("Seu peso ideal é : %.2f\n", ideal);
    }
    else
    {
        ideal = 62.1 * altura - 44.7;
        printf("Seu peso ideal é : %.2f\n", ideal);
    }

    return 0;
}