#include <stdio.h>

int main(void)
{
    float horasTrabalhadas, salarioMinimo, salarioRecebido, valorHora, salarioBruto, imposto, inss;

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    valorHora = 0.1 * salarioMinimo;
    salarioBruto = valorHora * horasTrabalhadas;
    imposto = 0.03 * salarioBruto;
    inss = 0.11 * salarioBruto;
    salarioRecebido = salarioBruto - inss - imposto;

    printf("O salario recebido e: %.2f\n", salarioRecebido);



    return 0;
}
