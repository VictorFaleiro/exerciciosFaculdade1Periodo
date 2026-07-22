#include <stdio.h>

int main(void){
    int num1, num2, num3;

    printf("Entre com o primeiro inteiro: ");
    scanf("%d", &num1);
    printf("Entre com o segundo inteiro: ");
    scanf("%d", &num2);
    printf("Entre com o terceiro inteiro: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("O maior deles e %d\n", num1);
    }else if(num2 > num3){
        printf("O maior deles e %d\n", num2);
    }else{
        printf("O maior deles e %d\n", num3);
    }

    return 0;
}
