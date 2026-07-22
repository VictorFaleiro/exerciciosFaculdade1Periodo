#include <stdio.h>

int main(void){
    int num, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resto = num % 2;

    if (resto == 0){
        printf("O numero e par\n");
    }else{
        printf("O numero e impar\n");
    }

return 0;
}
