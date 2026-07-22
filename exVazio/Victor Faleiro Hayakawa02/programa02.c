#include <stdio.h>
#include <math.h>

int main(void){
    float num, raiz;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    raiz = sqrt(num);
    printf("A raiz e: %f\n", raiz);

return 0;
}
