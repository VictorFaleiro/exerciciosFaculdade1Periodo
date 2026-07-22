#include <stdio.h>

int main(void){
    int mes;

    printf("Digite o mes do ano: ");
    scanf("%d", &mes);

    if(mes == 1)
        printf("Janeiro\n");
    else if(mes == 2)
        printf("Fevereiro\n");
    else if(mes == 3)
        printf("Marco\n");
    else if(mes == 4)
        printf("Abril\n");
    else if(mes == 5)
        printf("Maio\n");
    else if(mes == 6)
        printf("Junho\n");
    else if(mes == 7)
        printf("Julho\n");
    else if(mes == 8)
        printf("Agosto\n");
    else if(mes == 9)
        printf("Setembro\n");
    else if(mes == 10)
        printf("Outubro\n");
    else if(mes == 11)
        printf("Novembro\n");
    else if(mes == 12)
        printf("Dezembro\n");
    else
        printf("Mes invalido\n");

    return 0;
}
