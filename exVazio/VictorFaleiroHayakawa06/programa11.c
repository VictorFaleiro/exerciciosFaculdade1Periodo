#include <stdio.h>

int main(void)
{
    char frase[50];
    int vogais = 0;
    int i;

    printf("Escreva um frase curta: ");
    fgets(frase, sizeof(frase), stdin);

    for(i = 0; frase[i] != '\n'; i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
            vogais += 1;
        }
    }
    printf("Essa frase tem %d vogais\n", vogais);

    return 0;
}
