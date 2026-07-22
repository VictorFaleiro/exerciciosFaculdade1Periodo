#include <stdio.h>

int main(void)
{
    int i;
    char palavra[50];

    printf("Digite uma palavra qualquer: ");
    fgets(palavra, sizeof(palavra), stdin);

    for(i = 1; i <=20; i++){
            printf("%s", palavra);
    }

    return 0;
}
