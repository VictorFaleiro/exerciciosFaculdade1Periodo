#include <stdio.h>

int main(void)
{
    int i = 1;
    int num;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);

    do{
        printf("%d\n", i);
        i++;
    }while(i <= num);

    return 0;
}
