#include <stdio.h>

int main(void)
{
    int x, y, somatorio;
    somatorio = 0;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero *maior que o anterior*: ");
    scanf("%d", &y);

    for(; x <= y; x++){
        somatorio += x;
    }
    printf("%d\n", somatorio);

    return 0;
}
