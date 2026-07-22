#include <stdio.h>

int main(void)
{
    int i, num;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("%d\n", i);
    }

    return 0;
}
