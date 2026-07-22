#include <stdio.h>

int main(void)
{
    int i;
    char frase[50] = "";

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i = 0; frase[i] != '\0'; i++){
        printf("%c\n", frase[i]);
    }

    return 0;
}
