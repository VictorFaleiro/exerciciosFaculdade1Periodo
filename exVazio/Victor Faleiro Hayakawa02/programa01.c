#include <stdio.h>
#include <math.h>

int main(void){
    float num, decimal;
    int aCima, aBaixo;
    double inteira;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    aCima = ceil(num);
    printf("Arredondado para cima: %d\n", aCima);

    aBaixo = floor(num);
    printf("Arredondado para baixo: %d\n", aBaixo);

    decimal = modf(num, &inteira);
    printf("Parte inteira %.0lf\n", inteira);
    printf("Parte decimal %f\n", decimal);

    return 0;
}
