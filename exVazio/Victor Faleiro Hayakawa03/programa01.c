#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("color F0");

    int num1, num2;
    float razao;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro: ");
    scanf("%d", &num2);

    razao = (float) num1 / num2;

    printf("A razao e de: %f\n", razao);

    return 0;
}
