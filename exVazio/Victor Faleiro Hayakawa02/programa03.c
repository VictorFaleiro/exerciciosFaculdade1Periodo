#include <stdio.h>
#include <math.h>
int main(void){
    double x, y, resultado;

    printf("Digite um numero: ");
    scanf("%lf", &x);
    printf("Digite o expoente desejado: ");
    scanf("%lf", &y);

    resultado = pow(x, y);
    printf("O resultado e %.lf\n", resultado);

return 0;
}
