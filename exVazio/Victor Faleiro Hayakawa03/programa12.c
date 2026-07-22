#include <stdio.h>

int main(void)
{
    float salario, imposto;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    if(salario <1400){
        imposto = 0.05 * salario;
        printf("O valor do imposto sera: %.2f\n", imposto);
    }else if(salario >= 1400 && salario <= 3000){
        imposto = 0.1 * salario;
        printf("O valor do imposto sera: %.2f\n",imposto);
    }else if(salario > 3000){
        imposto = 0.15 * salario;
        printf("O valor do imposto sera: %.2f\n", imposto);
    }

    return 0;
}
