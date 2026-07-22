#include <stdio.h>

int main(void)
{
    int i = 1;
    int num;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);

    while(i <= num){
        printf("%d\n", i);
        i++;
    }

    return 0;
}
