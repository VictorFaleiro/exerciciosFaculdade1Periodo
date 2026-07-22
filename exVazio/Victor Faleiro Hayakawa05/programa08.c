#include <stdio.h>

int main(void)
{
    int i, num;
    char palavra[50];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    printf("Digite um inteiro: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        printf("%s\n", palavra);
    }

    return 0;
}
