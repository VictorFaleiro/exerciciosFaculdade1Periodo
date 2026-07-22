#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 50

int main(void)
{
    int vetor[TAM] = {};
    int i, aleatorio;
    i = 0;

    srand(time(NULL));

    do{
        aleatorio = (rand() % 401) + 100;
        vetor[i] = aleatorio;
        i++;
    }while(i < TAM);

    i = 0;
    do{
        printf("%d\n", vetor[i]);
        i++;
    }while(i < TAM);

    return 0;
}
