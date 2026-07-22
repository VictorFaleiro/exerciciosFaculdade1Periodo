#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("Intervalo invalido\n");
    }

    for( ; num1 <= num2; num1++){
        printf("%d\n", num1);
    }

    return 0;
}
