#include <stdio.h>
#include <math.h>

int main(void){
    float salarioBase, salarioFinal, imposto, gratificacao;

    printf("Digite o salario base do funcionario: ");
    scanf("%f", &salarioBase);

    gratificacao = (5.00/100) * salarioBase;
    imposto = (7.00/100) * salarioBase;
    salarioFinal = salarioBase + gratificacao - imposto;

    printf("O salario final do funcionario e: %.2f\n", salarioFinal);

return 0;
}
