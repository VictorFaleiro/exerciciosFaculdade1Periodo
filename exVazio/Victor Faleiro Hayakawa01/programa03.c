#include <stdio.h>

int main(void){
    int num1, num2, num3, somatorio;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    somatorio = num1 + num2 + num3;

    printf("A soma desses numeros e: %d\n", somatorio);
return 0;
}
