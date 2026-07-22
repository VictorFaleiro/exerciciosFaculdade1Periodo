#include <stdio.h>

int main(void)
{
    int x, y, somP, somI;
    somP = somI = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero *maior que o anterior*: ");
    scanf("%d", &y);

    for(; x <= y; x++){
        if(x % 2 == 0){
            somP += x;
        }else{
            somI += x;
        }
    }

    printf("O somatorio dos numeros impares e: %d\n", somI);
    printf("O somatorio dos numeros pares e: %d\n", somP);

    return 0;
}
