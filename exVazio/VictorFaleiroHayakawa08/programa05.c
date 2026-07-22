#include <stdio.h>

int ehPar(int x)
{
    if(x % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(void){
    int num1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    if(ehPar(num1)){
        printf("E par\n");
    }
    else{
        printf("E impar\n");
    }

    return 0;
}
