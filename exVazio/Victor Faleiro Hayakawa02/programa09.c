#include <stdio.h>

int main(void){
    float salarioMinimo, consumoKW, valorKW, valorConta, valorDesconto;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o valor do consumo em quilowatt: ");
    scanf("%f", &consumoKW);

    valorKW = salarioMinimo / 5;
    valorConta = valorKW * consumoKW;
    valorDesconto = valorConta * 0.85;

    printf("O valor de cada quilowatt e: %.2f\n", valorKW);
    printf("O valor da conta a ser pago e: %.2f\n", valorConta);
    printf("Com desconto de 15%: %.2f", valorDesconto);

    return 0;
    }
