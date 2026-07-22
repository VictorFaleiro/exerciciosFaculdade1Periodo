#include <stdio.h>
#include <math.h>

int main(void)
{
    int opcao;
    int num1, num2, num;
    int soma, multiplicacao;
    float divisao, raiz;

    printf("Programa Calculadora Simples\n");
    printf("\n(1) Somar dois numeros inteiros\n");
    printf("(2) Multiplicar dois numeros inteiros\n");
    printf("(3) Dividir dois numeros inteiros\n");
    printf("(4) Calcular a raiz quadrada de um numero inteiros\n");
    printf("(0) Encerrar o programa\n");
    printf("\nSua opcao: ");
    scanf("%d", &opcao);

    if(opcao == 1)
    {
        printf("Insira o primeiro numero: ");
        scanf("%d", &num1);
        printf("Insira o segundo numero: ");
        scanf("%d", &num2);

        soma = num1 + num2;
        printf("O resultado e: %d\n", soma);
    }
    else if(opcao == 2)
    {
        printf("Insira o primeiro numero: ");
        scanf("%d", &num1);
        printf("Insira o segundo numero: ");
        scanf("%d", &num2);

        multiplicacao = num1 * num2;
        printf("O resultado e: %d\n", multiplicacao);
    }
    else if(opcao == 3)
    {
        printf("Insira o primeiro numero: ");
        scanf("%d", &num1);
        printf("Insira o segundo numero: ");
        scanf("%d", &num2);

        divisao = (float)num1 / num2;
        printf("O resultado e: %f\n", divisao);
    }
    else if(opcao == 4)
    {
        printf("Insira um numero: ");
        scanf("%d", &num);

        raiz = sqrt(num);
        printf("O resultado e: %f\n", raiz);
    }
    else if(opcao == 0)
    {
        printf("Programa encerrado\n");
    }
    else
    {
        printf("Opcao nao valida\n");
    }

    return 0;
}
