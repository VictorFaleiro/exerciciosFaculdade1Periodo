#include <stdio.h>

int main(void)
{
    int x, i;
    i = 1;

    printf("Digite um inteiro: ");
    scanf("%d", &x);

    do{
        printf("%d\n", i++);
    }while(i <= x);

    return 0;
}
