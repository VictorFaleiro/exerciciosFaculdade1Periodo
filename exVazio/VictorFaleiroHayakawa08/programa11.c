#include <stdio.h>

float lerNota(){
    float nota;
    do{
        scanf("%f", &nota);
        if(nota < 0 || nota > 10)
            printf("Nota invalida. Redigite: ");
    }while(nota < 0 || nota > 10);
    return nota;
}

float calcularMedia(float n1, float n2, float n3){
    float media;
    media = (n1 + n2 + n3) / 3;
    return media;
}

int main(void)
{
    float n1, n2, n3, media;

    printf("Digite a primeira nota: ");
    n1 = lerNota();
    printf("Digite a segunda nota: ");
    n2 = lerNota();
    printf("Digite a terceira nota: ");
    n3 = lerNota();

    media = calcularMedia(n1, n2, n3);

    if(media <= 3){
        printf("Reprovado, com a media de %.1f\n", media);
    }else if(media <= 6.9){
        printf("Exame, com media de %.1f\n", media);
    }else{
        printf("Aprvado, com media de %.1f\n", media);
    }

    return 0;
}
