#include <stdio.h>

int main(void)
{
    int i, n1, n2, somatorio, num;
    somatorio = 0;

    do{
        printf("Digite um numero de 1 a 50: ");
        scanf("%d", &n1);
        if(n1 < 1 || n1 > 50){
            printf("Numero invalido\n");
        }
    }while(n1 < 1 || n1 > 50);
    do{
        printf("Digite outro numero de 1 a 50, maior que o anterior: ");
        scanf("%d", &n2);
        if(n2 < 1 || n2 > 50 || n1 > n2){
            printf("Numero invalido\n");
        }
    }while(n2 < 1 || n2 > 50 || n1 > n2);

    num = n1;
    for(; num <= n2; num++){
        somatorio += num;
    }
    printf("O somatoria de %d ate %d e: %d\n", n1, n2, somatorio);

    return 0;
}
