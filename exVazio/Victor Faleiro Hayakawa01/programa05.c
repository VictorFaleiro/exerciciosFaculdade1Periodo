#include <stdio.h>

int main(void){
    float base, altura, area;

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    printf("Digite a base do triangulo: ");
    scanf("%f", &base);

    area = (altura * base)/2.0;

    printf("Area do triangulo: %.2f\n", area);

return 0;
}
