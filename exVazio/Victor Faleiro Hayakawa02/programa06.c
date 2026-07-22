#include <stdio.h>
#include <time.h>

int main(void) {
    int anoNascimento, idade, idadeFutura;
    struct tm *dataHoraAtual;
    time_t segundos;

    time(&segundos);
    dataHoraAtual = localtime(&segundos);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = (dataHoraAtual->tm_year + 1900) - anoNascimento;
    idadeFutura = 2050 - anoNascimento;

    printf("A sua idade atual e: %d anos\n", idade);
    printf("A sua idade em 2050 sera de: %d anos\n", idadeFutura);

    return 0;
}
