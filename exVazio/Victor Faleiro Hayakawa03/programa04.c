#include <stdio.h>

int main(void){
    int num1, num2, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    resto = num1 % num2;

    printf("O resto da divisao do primeiro numero com o segundo e: %d\n", resto);

    return 0;
}
