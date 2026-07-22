#include <stdio.h>

int main(void){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade <= 123 && idade != 0){
        printf("Voce pode tirar sua habilitacao para dirigir\n");
    }else if (idade < 18 && idade !=0) {
        printf("Voce nao pode tirar sua habilitacao para dirigir\n");
    }else{
        printf("Idade invalida\n");
    }

    return 0;
}
