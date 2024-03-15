#include <stdio.h>

int main()
{

    int x, y, z;

    x = 7 + 3 * 6 / 2 - 1;             // Primeiro ele faz 6/2, depois a multiplicação com 3, subtrai -1 e soma mais 7.
    y = 2 % 2 + 2 * 2 - 2 / 2;         // Primeiro faz o módulo que é 0, soma mais a multiplicação que é 4 e diminui pela divisão que é 1.
    z = (3 * 9 * (3 + (9 * 3 / (3)))); // Seguindo a ordem dos parênteses, faz o produto mais interno, divide por 3, soma mais 3 e multiplica os demais.

    printf("x = %d\ny = %d\nz = %d", x, y, z);

    return 0;
}