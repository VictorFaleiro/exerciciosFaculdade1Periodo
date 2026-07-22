#include <stdio.h>

int somar(int x, int y)
{
    return x + y;
}

int main(void)
{
    int num1, num2, soma;
    printf("Digite um inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro inteiro: ");
    scanf("%d", &num2);

    soma = somar(num1, num2);
    printf("A soma e: %d\n", soma);

    return 0;
}
