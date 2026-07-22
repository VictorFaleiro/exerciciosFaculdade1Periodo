#include <stdio.h>

int main(void){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Voce pode tirar sua habilitacao para dirigir\n");
    }else{
        printf("Voce nao pode tirar sua habilitacao para dirigir\n");
    }

    return 0;
}
