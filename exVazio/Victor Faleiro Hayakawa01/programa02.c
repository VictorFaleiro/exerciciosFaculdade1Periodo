#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2, multiplicacao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    multiplicacao = num1 * num2;

    printf("O produto e: %d\n", multiplicacao);

return 0;
}
