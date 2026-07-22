#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 50

int main(void)
{
    int vetor[TAM];
    int i, aleatorio;

    srand(time(NULL));

    for(i = 0; i < TAM; i++){
        aleatorio = rand() % 101;
        vetor[i] = aleatorio;
    }
    for(i = 0; i < TAM; i++){
        printf("%3d", vetor[i]);
    }

    return 0;
}
