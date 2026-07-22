#include <stdio.h>

int main(void){
    float raio, area;
    const float  PI = 3.141592;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("Area do circulo: %.2f\n", area);

return 0;
}
