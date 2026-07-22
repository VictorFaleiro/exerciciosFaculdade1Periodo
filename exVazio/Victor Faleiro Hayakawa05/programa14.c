#include <stdio.h>

int main(void)
{
    int idade;

    do{
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        if(idade < 1 || idade > 123){
            printf("Idade invalida\n\n");
        }

    }while(idade < 1 || idade > 123);

    return 0;
}
