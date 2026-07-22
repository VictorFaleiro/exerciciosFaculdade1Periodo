#include <stdio.h>

int main(void)
{
    int flag = 1;
    int num;

    while(flag){
        printf("Digite um numero de 1 a 5: ");
        scanf("%d", &num);

        if(num < 1 || num > 5){
            printf("Numero invalido. Redigite\n");
        }else{
            printf("Numero informado esta correto\n");
            flag = 0;
        }
    }

    return 0;
}
