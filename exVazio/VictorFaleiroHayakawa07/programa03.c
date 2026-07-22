#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 50

int main(void)
{
    int i, aleatorio;
    int vetor[TAM];
    srand(time(NULL));
    i = 0;

    while(i < 50){
        aleatorio = (rand() % 200) + 1;
        vetor[i] = aleatorio;
        i++;
    }

    i = 0;
    while(i < 50){
        printf("%d\n", vetor[i]);
        i++;
    }

    return 0;
}
