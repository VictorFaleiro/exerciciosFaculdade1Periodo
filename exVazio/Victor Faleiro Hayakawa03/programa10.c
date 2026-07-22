#include <stdio.h>

int main(void){
    float n1, n2, n3, media;

    printf("Digite sua nota da primeira prova: ");
    scanf("%f", &n1);
    printf("Digite sua nota da segunda prova: ");
    scanf("%f", &n2);
    printf("Digite sua nota da terceira prova: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    if(media >= 0.0 && media <= 3.0){
        printf("Reprovado\n");
    }else if(media >= 3.1 && media <= 6.9){
        printf("Exame\n");
    }else if(media >= 7.0 && media <= 10.0){
        printf("Aprovado\n");
    }else{
        printf("Notas invalidas\n");
    }

    return 0;
}
