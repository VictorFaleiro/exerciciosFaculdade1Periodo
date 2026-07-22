#include <stdio.h>
#include <math.h>

int main(void){
    float PI = M_PI;
    float raio, area;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = raio * raio * PI;
    printf("A area e: %f\n", area);

return 0;
}
