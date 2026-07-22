#include <stdio.h>
#define TAM 30

void imprimePalavra(char palavra[TAM], int qtd)
{
    int i;
    for(i = 0; i < qtd; i++){
        printf("%s\n", palavra);
    }
}

int main()
{
    int num;
    char palavra[TAM];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Quantas vezes voce quer imprimi-la? ");
    scanf("%d", &num);

    imprimePalavra(palavra, num);

    return 0;
}
