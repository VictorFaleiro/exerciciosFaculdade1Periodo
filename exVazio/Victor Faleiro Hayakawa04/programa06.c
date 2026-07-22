#include <stdio.h>
#include <math.h>

int main(void)
{
    int opcao, num1, num, num2, soma, multiplicacao;
    float raiz, divisao;

    printf("Programa Calculadora Simples\n");
    printf("\n(1) Somar dois numeros inteiros\n");
    printf("(2) Multiplicar dois numeros inteiros\n");
    printf("(3) Dividir dois numeros inteiros\n");
    printf("(4) Calcular a raiz quadrada de um numero inteiro\n");
    printf("(0) Encerrar o programa\n");
    printf("\nSua opcao: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            soma = num1 + num2;
            printf("A soma e: %d\n", soma);
            break;

        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            multiplicacao = num1 * num2;
            printf("O produto e: %d\n", multiplicacao);
            break;

        case 3:
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);

            divisao = (float)num1 / num2;
            printf("A divisao e: %f\n", divisao);
            break;

        case 4:
            printf("Digite um numero: ");
            scanf("%d", &num);

            raiz = sqrt(num);
            printf("A raiz e: %f\n", raiz);
            break;

        case 0:
            printf("Programa encerrado\n");
            break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
