#include <stdio.h>

int main(void){
    int num1, num2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    if(num1 == num2){
        printf("Os numeros sao iguais\n");
    }else if(num1 > num2){
        printf("O maior e %d\n", num1);
    }else{
        printf("O maior e %d\n", num2);
    }

    return 0;
}
