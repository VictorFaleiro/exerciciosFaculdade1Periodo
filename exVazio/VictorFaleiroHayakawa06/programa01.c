#include <stdio.h>

int main(void)
{
    int x, i;
    i = 1;

    printf("Digite um inteiro: ");
    scanf("%d", &x);

    while(i <= x){
        printf("%d\n", i++);
    }

    return 0;
}
