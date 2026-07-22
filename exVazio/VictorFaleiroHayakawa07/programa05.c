#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TAM 100

int main(void)
{
    int i, aleatorio, par, impar;
    int vetor[TAM] = {};
    par = impar = 0;

    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        aleatorio = (rand() % 1000) + 1;
        vetor[i] = aleatorio;
    }
    for(i = 0; i < TAM; i++){
        printf("%d\n", vetor[i]);
        if(vetor[i] % 2 == 0){
            par += 1;
        }else{
            impar += 1;
        }
    }
    printf("Nesse vetor ha %d numeros pares e %d impares.\n", par, impar);

    return 0;
}
