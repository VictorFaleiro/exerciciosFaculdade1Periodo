#include <stdio.h>

int main(void){
    float salario, porcentagemAumento, novoSalario, aumento;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &porcentagemAumento);

    novoSalario = salario * porcentagemAumento / 100;

    aumento = novoSalario - salario;

    printf("O novo salario do funcionario e: %.2f\n", novoSalario);
    printf("O aumento foi de: %.2f\n", aumento);

return 0;
}
