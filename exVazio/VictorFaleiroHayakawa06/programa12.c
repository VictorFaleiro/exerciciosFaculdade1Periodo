#include <stdio.h>

int main(void)
{
    float n1, n2, media;

    do{
        printf("Digite a primera nota: ");
        scanf("%f", &n1);
        if(n1 < 0 || n1 > 10){
            printf("Nota invalida! Redigite.\n");
        }
    }while(n1 < 0 || n1 > 10);

    do{
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        if(n2 < 0 || n2 > 10){
            printf("Nota invalida! Redigite.\n");
        }
    }while(n2 < 0 || n2 > 10);

    media = (n1 + n2) / 2;
    if(media > 6){
        printf("Aprovado!\n");
    }else{
        printf("Reprovado!\n");
    }
    printf("A media e: %.2f\n", media);

    return 0;
}
