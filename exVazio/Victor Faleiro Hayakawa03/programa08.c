#include <stdio.h>

int main(void)
{
    int codigo;

    printf("Digite o codigo da estacao do ano: ");
    scanf("%d", &codigo);

    if(codigo == 1){
        printf("Primavera\n");
    }else if(codigo == 2){
        printf("Verao\n");
    }else if(codigo == 3){
        printf("Outono\n");
    }else if(codigo == 4){
        printf("Inverno\n");
    }else{
        printf("Codigo invalido\n");
    }

    return 0;
}
