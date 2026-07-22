#include <stdio.h>

int main(void)
{
    int i, num, somatorio;
    float media;

    somatorio = 0;
    i = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        somatorio += i;
    }

    media = (float)somatorio / num;

    printf("A media e: %.2f\n", media);

    return 0;
}
