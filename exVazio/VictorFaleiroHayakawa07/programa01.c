#include <stdio.h>
#define TAM 10

int main(void)
{
    int vetor[TAM];
    int i;

    for(i = 0; i < TAM; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    for(i = 0; i < TAM; i++){
        printf("%3d", vetor[i]);
    }

    return 0;
}
