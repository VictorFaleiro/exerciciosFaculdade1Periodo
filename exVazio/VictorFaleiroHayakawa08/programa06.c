#include <stdio.h>

int maior(int n1, int n2, int n3)
{
    if(n1 > n2 && n1 > n3){
        return n1;
    }else if(n2> n3){
        return n2;
    }else{
        return n3;
    }
}

int main(){
    int num1, num2, num3;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro inteiro: ");
    scanf("%d", &num3);

    printf("O maior e: %d\n", maior(num1, num2, num3));

    return 0;
}
