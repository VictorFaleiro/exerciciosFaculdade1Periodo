#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int intervaloChute, i, aleatorio;

    do{
        printf("Digite um numero de 10 a 100: ");
        scanf("%d", &intervaloChute);
    }while(intervaloChute < 10 || intervaloChute > 100);

    printf("Quantos numeros aleatorios voce quer nesse intervalo: ");
    scanf("%d", &i);
    srand(time(NULL));

    for(; i > 0; i--){
        aleatorio = (rand() % intervaloChute) + 1;
        printf("%d\n", aleatorio);
    }

    return 0;
}
