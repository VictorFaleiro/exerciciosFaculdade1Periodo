#include <stdio.h>
#include <math.h>

int lerNumero(){
    int n;
    scanf("%d", &n);
    return n;
}

int ler1Numero(){
    printf("Digite o primeiro numero: ");
    return lerNumero();
}

int ler2Numero(){
    int num;
    printf("Digite o segundo numero: ");
    return lerNumero();
}

int menu(){
    int opcao;
    printf("Programa Calculadora simples:\n\n(1) Somar dois numeros inteiros\n(2) Multiplicar dois numeros inteiros\n(3) Dividir dois numeros inteiros\n(4) Calcular a raiz quadrada de um numero inteiro\n(0) Encerrar o programa\n\nSua opcao: ");
    scanf("%d", &opcao);

    return opcao;
}

int somar(int n1, int n2){
    int soma;
    soma = n1 + n2;

    return soma;
}

int multiplicar(int n1, int n2){
    int multiplicacao;
    multiplicacao = n1 * n2;

    return multiplicacao;
}

float dividir(int n1, int n2){
    float divisao;
    divisao = (float)n1 / n2;

    return divisao;
}

float raiz(int n){
    float raiz;
    raiz = sqrt(n);

    return raiz;
}

void encerrar(){
    printf("Programa encerrado\n");
}

int main(void)
{
    int opcao, soma, multiplicacao, n1, n2;
    float r, divisao;

    int repetir = 1;

    while(repetir){
        opcao = menu();

        switch (opcao){
            case 1:
                n1 = ler1Numero();
                n2 = ler2Numero();
                soma = somar(n1, n2);
                printf("O resultado e: %d\n\n", soma);
                break;

            case 2:
                n1 = ler1Numero();
                n2 = ler2Numero();
                multiplicacao = multiplicar(n1, n2);
                printf("O resultado e: %d\n\n", multiplicacao);
                break;

            case 3:
                n1 = ler1Numero();
                n2 = ler2Numero();
                divisao = dividir(n1, n2);
                printf("O resultado e: %.2f\n\n", divisao);
                break;

            case 4:
                printf("Digite o numero: ");
                n1 = lerNumero();
                r = raiz(n1);
                printf("O resultado e: %.2f\n\n", r);
                break;

            case 0:
                encerrar();
                repetir = 0;
                break;

            default:
                printf("Opcao invalida!\n\n");
        }
    }
    return 0;
}
