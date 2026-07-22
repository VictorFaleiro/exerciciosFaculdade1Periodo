#include <stdio.h>

int imprimeNumero(int num)
{
    return num;
}

int main(void)
{
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    printf("O numero digitado foi: %d\n", imprimeNumero(x));

    return 0;
}
