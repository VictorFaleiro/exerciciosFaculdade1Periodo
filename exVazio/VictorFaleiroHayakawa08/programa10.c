#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 1000

int vetor[TAM];

void preencheArray(){
    int i;
    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        vetor[i] = (rand() % 10000) + 1;
    }
}

void imprimeArray(){
    int i;
    for(i = 0; i < TAM; i++){
        printf("%d - %d\n", i + 1, vetor[i]);
    }
}

int somatorioArray(){
    int i;
    int somatorio = 0;
    for(i = 0; i < TAM; i++){
        somatorio += vetor[i];
    }
    return somatorio;
}

int main(){
    int somatorio;

    preencheArray();
    imprimeArray();

    somatorio = somatorioArray();
    printf("O somatorio do vetor e de: %d\n", somatorio);

    return 0;
}
